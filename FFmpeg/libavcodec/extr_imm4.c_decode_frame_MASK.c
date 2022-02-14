
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_13__ ;


typedef int uint32_t ;
struct TYPE_26__ {int width; int height; int color_range; int pix_fmt; TYPE_2__* priv_data; } ;
struct TYPE_25__ {int key_frame; int pict_type; } ;
struct TYPE_24__ {int size; int* data; } ;
struct TYPE_22__ {int (* bswap_buf ) (int *,int *,int) ;} ;
struct TYPE_23__ {TYPE_13__* prev_frame; void* lo; void* hi; scalar_t__ bitstream; TYPE_1__ bdsp; int bitstream_size; int gb; } ;
struct TYPE_21__ {int * data; } ;
typedef TYPE_2__ IMM4Context ;
typedef int GetBitContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__*,int *,int ) ;
 int FUNC_3 (TYPE_13__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_13__*) ;
 int FUNC_5 (TYPE_5__*,int ,char*) ;
 int FUNC_6 (TYPE_5__*,char*,unsigned int) ;
 int FUNC_7 (TYPE_5__*,int *,TYPE_4__*,TYPE_13__*) ;
 int FUNC_8 (TYPE_5__*,int *,TYPE_4__*) ;
 int FUNC_9 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_5__*,int,int) ;
 void* FUNC_11 (int *,int) ;
 unsigned int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,scalar_t__,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int *,int) ;

__attribute__((used)) static int FUNC_16(AVCodecContext *VAR_9, void *VAR_10,
                        int *VAR_11, AVPacket *VAR_12)
{
    IMM4Context *VAR_13 = VAR_9->priv_data;
    GetBitContext *VAR_14 = &VAR_13->gb;
    AVFrame *VAR_15 = VAR_10;
    int VAR_16, VAR_17;
    unsigned VAR_18;
    int VAR_19, VAR_20;

    if (VAR_12->size <= 32)
        return VAR_1;

    FUNC_2(&VAR_13->bitstream, &VAR_13->bitstream_size,
                          FUNC_1(VAR_12->size, 4));
    if (!VAR_13->bitstream)
        return FUNC_0(VAR_8);

    VAR_13->bdsp.bswap_buf((uint32_t *)VAR_13->bitstream,
                      (uint32_t *)VAR_12->data,
                      (VAR_12->size + 3) >> 2);

    if ((VAR_19 = FUNC_13(VAR_14, VAR_13->bitstream, FUNC_1(VAR_12->size, 4))) < 0)
        return VAR_19;

    VAR_9->pix_fmt = VAR_7;
    VAR_9->color_range = VAR_0;

    VAR_16 = VAR_9->width;
    VAR_17 = VAR_9->height;

    VAR_20 = VAR_12->data[8];
    if (VAR_20 < 2) {
        int VAR_21 = VAR_12->data[10];

        switch (VAR_21) {
        case 1:
            VAR_16 = 352;
            VAR_17 = 240;
            break;
        case 2:
            VAR_16 = 704;
            VAR_17 = 240;
            break;
        case 4:
            VAR_16 = 480;
            VAR_17 = 704;
            break;
        case 17:
            VAR_16 = 352;
            VAR_17 = 288;
            break;
        case 18:
            VAR_16 = 704;
            VAR_17 = 288;
            break;
        default:
            VAR_16 = 704;
            VAR_17 = 576;
            break;
        }
    }

    FUNC_14(VAR_14, 24 * 8);
    VAR_18 = FUNC_12(VAR_14, 32);
    VAR_13->hi = FUNC_11(VAR_14, 16);
    VAR_13->lo = FUNC_11(VAR_14, 16);

    switch (VAR_18) {
    case 0x19781977:
        VAR_15->key_frame = 1;
        VAR_15->pict_type = VAR_5;
        break;
    case 0x12250926:
        VAR_15->key_frame = 0;
        VAR_15->pict_type = VAR_6;
        break;
    default:
        FUNC_6(VAR_9, "type %X", VAR_18);
        return VAR_2;
    }

    if (VAR_9->width != VAR_16 ||
        VAR_9->height != VAR_17) {
        if (!VAR_15->key_frame) {
            FUNC_5(VAR_9, VAR_4, "Frame size change is unsupported.\n");
            return VAR_1;
        }
        FUNC_4(VAR_13->prev_frame);
    }

    VAR_19 = FUNC_10(VAR_9, VAR_16, VAR_17);
    if (VAR_19 < 0)
        return VAR_19;

    if ((VAR_19 = FUNC_9(VAR_9, VAR_15, VAR_15->key_frame ? VAR_3 : 0)) < 0)
        return VAR_19;

    if (VAR_15->key_frame) {
        VAR_19 = FUNC_8(VAR_9, VAR_14, VAR_15);
        if (VAR_19 < 0)
            return VAR_19;

        FUNC_4(VAR_13->prev_frame);
        if ((VAR_19 = FUNC_3(VAR_13->prev_frame, VAR_15)) < 0)
            return VAR_19;
    } else {
        if (!VAR_13->prev_frame->data[0]) {
            FUNC_5(VAR_9, VAR_4, "Missing reference frame.\n");
            return VAR_1;
        }

        VAR_19 = FUNC_7(VAR_9, VAR_14, VAR_15, VAR_13->prev_frame);
        if (VAR_19 < 0)
            return VAR_19;
    }

    *VAR_11 = 1;

    return VAR_12->size;
}
