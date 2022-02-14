
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_12__ {int shift; int gb; } ;
typedef TYPE_1__ WNV1Context ;
struct TYPE_15__ {int height; int width; TYPE_1__* priv_data; } ;
struct TYPE_14__ {int key_frame; unsigned char** data; int * linesize; } ;
struct TYPE_13__ {size_t* data; int size; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (size_t*) ;
 int FUNC_2 (TYPE_4__*,int ,char*,...) ;
 size_t* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_4__*,char*,size_t const) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__* const,int ) ;
 size_t* VAR_4 ;
 int FUNC_6 (int *,size_t*,int) ;
 int FUNC_7 (size_t*,int ,scalar_t__) ;
 unsigned char FUNC_8 (TYPE_1__* const,int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_5,
                        void *VAR_6, int *VAR_7,
                        AVPacket *VAR_8)
{
    WNV1Context * const VAR_9 = VAR_5->priv_data;
    const uint8_t *VAR_10 = VAR_8->data;
    int VAR_11 = VAR_8->size;
    AVFrame * const VAR_12 = VAR_6;
    unsigned char *VAR_13,*VAR_14,*VAR_15;
    int VAR_16, VAR_17, VAR_18;
    int VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
    uint8_t *VAR_22;

    if (VAR_11 < 8 + VAR_5->height * (VAR_5->width/2)/8) {
        FUNC_2(VAR_5, VAR_2, "Packet size %d is too small\n", VAR_11);
        return VAR_0;
    }

    VAR_22 = FUNC_3(VAR_11 + VAR_1);
    if (!VAR_22) {
        FUNC_2(VAR_5, VAR_2, "Cannot allocate temporary buffer\n");
        return FUNC_0(VAR_3);
    }
    FUNC_7(VAR_22 + VAR_11, 0, VAR_1);

    if ((VAR_18 = FUNC_5(VAR_5, VAR_12, 0)) < 0) {
        FUNC_1(VAR_22);
        return VAR_18;
    }
    VAR_12->key_frame = 1;

    for (VAR_16 = 8; VAR_16 < VAR_11; VAR_16++)
        VAR_22[VAR_16] = VAR_4[VAR_10[VAR_16]];

    if ((VAR_18 = FUNC_6(&VAR_9->gb, VAR_22 + 8, VAR_11 - 8)) < 0)
        return VAR_18;

    if (VAR_10[2] >> 4 == 6)
        VAR_9->shift = 2;
    else {
        VAR_9->shift = 8 - (VAR_10[2] >> 4);
        if (VAR_9->shift > 4) {
            FUNC_4(VAR_5,
                                  "Unknown WNV1 frame header value %i",
                                  VAR_10[2] >> 4);
            VAR_9->shift = 4;
        }
        if (VAR_9->shift < 1) {
            FUNC_4(VAR_5,
                                  "Unknown WNV1 frame header value %i",
                                  VAR_10[2] >> 4);
            VAR_9->shift = 1;
        }
    }

    VAR_13 = VAR_12->data[0];
    VAR_14 = VAR_12->data[1];
    VAR_15 = VAR_12->data[2];
    for (VAR_17 = 0; VAR_17 < VAR_5->height; VAR_17++) {
        for (VAR_16 = 0; VAR_16 < VAR_5->width / 2; VAR_16++) {
            VAR_13[VAR_16 * 2] = FUNC_8(VAR_9, VAR_19);
            VAR_20 = VAR_14[VAR_16] = FUNC_8(VAR_9, VAR_20);
            VAR_19 = VAR_13[(VAR_16 * 2) + 1] = FUNC_8(VAR_9, VAR_13[VAR_16 * 2]);
            VAR_21 = VAR_15[VAR_16] = FUNC_8(VAR_9, VAR_21);
        }
        VAR_13 += VAR_12->linesize[0];
        VAR_14 += VAR_12->linesize[1];
        VAR_15 += VAR_12->linesize[2];
    }


    *VAR_7 = 1;
    FUNC_1(VAR_22);

    return VAR_11;
}
