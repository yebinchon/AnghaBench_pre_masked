
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {scalar_t__ pix_fmt; int width; int height; } ;
struct TYPE_11__ {int key_frame; int** data; int* linesize; int pict_type; } ;
struct TYPE_10__ {int size; int data; } ;
typedef int GetByteContext ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_3__*,int,int) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_6, void *VAR_7, int *VAR_8,
                        AVPacket *VAR_9)
{
    AVFrame *VAR_10 = VAR_7;
    GetByteContext VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    uint8_t *VAR_17;
    uint8_t VAR_18;
    int VAR_19, VAR_20;

    FUNC_7(&VAR_11, VAR_9->data, VAR_9->size);

    if (FUNC_5(&VAR_11) < VAR_0) {
        FUNC_1(VAR_6, VAR_2, "Header too small %d.\n", VAR_9->size);
        return VAR_1;
    }

    VAR_12 = FUNC_2(&VAR_11);
    VAR_13 = FUNC_2(&VAR_11);
    FUNC_8(&VAR_11, 4);
    VAR_15 = FUNC_2(&VAR_11);

    if (VAR_15 == 24)
        VAR_6->pix_fmt = VAR_4;
    else if (VAR_15 == 8)
        VAR_6->pix_fmt = VAR_5;
    else {
        FUNC_1(VAR_6, VAR_2, "Invalid pixel format.\n");
        return VAR_1;
    }

    VAR_14 = FUNC_10(VAR_6, VAR_12, VAR_13);
    if (VAR_14 < 0)
        return VAR_14;

    if (FUNC_5(&VAR_11) < VAR_12*VAR_13 / 255)
        return VAR_1;

    VAR_14 = FUNC_9(VAR_6, VAR_10, 0);
    if (VAR_14 < 0)
        return VAR_14;

    VAR_10->pict_type = VAR_3;
    VAR_10->key_frame = 1;

    VAR_19 = 0;
    VAR_20 = 1;
    VAR_17 = VAR_10->data[0];
    while (FUNC_5(&VAR_11) > 0) {
        int VAR_21;


        if (VAR_19 == VAR_6->width) {
            VAR_19 = 0;
            VAR_17 = VAR_10->data[0] + VAR_10->linesize[0] * VAR_20++;
            if (VAR_20 > VAR_6->height) {
                FUNC_1(VAR_6, VAR_2,
                       "Ended frame decoding with %d bytes left.\n",
                       FUNC_5(&VAR_11));
                return VAR_1;
            }
        }


        VAR_18 = FUNC_6(&VAR_11);
        if (!VAR_18 || VAR_19 + VAR_18 > VAR_6->width) {
            FUNC_1(VAR_6, VAR_2, "Invalid run length %d.\n", VAR_18);
            return VAR_1;
        }

        if (VAR_6->pix_fmt == VAR_4) {
            VAR_16 = FUNC_3(&VAR_11);
            for (VAR_21 = 0; VAR_21 < VAR_18; VAR_21++) {
                FUNC_0(VAR_17, VAR_16);
                VAR_17 += 3;
            }
        } else {
            VAR_16 = FUNC_4(&VAR_11);
            for (VAR_21 = 0; VAR_21 < VAR_18; VAR_21++)
                *VAR_17++ = VAR_16;
        }

        VAR_19 += VAR_21;
    }

    if (VAR_19 != VAR_12 || VAR_20 != VAR_13) {
        FUNC_1(VAR_6, VAR_2, "Picture stopped at %d,%d.\n", VAR_19, VAR_20);
        return VAR_1;
    }

    *VAR_8 = 1;
    return VAR_9->size;
}
