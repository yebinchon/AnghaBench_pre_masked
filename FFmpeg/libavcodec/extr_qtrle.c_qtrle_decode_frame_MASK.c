
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_22__ {int height; int bits_per_coded_sample; scalar_t__ discard_damaged_percentage; TYPE_1__* priv_data; } ;
struct TYPE_21__ {int size; int data; } ;
struct TYPE_20__ {TYPE_13__* frame; int const* pal; TYPE_3__* avctx; int g; } ;
struct TYPE_19__ {int* linesize; int palette_has_changed; int const** data; } ;
typedef TYPE_1__ QtrleContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,TYPE_13__*) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int) ;
 int * FUNC_2 (TYPE_2__*,int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_3__*,TYPE_13__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_13__*,int ) ;
 int FUNC_9 (int const*,int const*,int) ;
 int FUNC_10 (TYPE_1__*,int,int) ;
 int FUNC_11 (TYPE_1__*,int,int) ;
 int FUNC_12 (TYPE_1__*,int,int) ;
 int FUNC_13 (TYPE_1__*,int,int,int) ;
 int FUNC_14 (TYPE_1__*,int,int) ;
 int FUNC_15 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_16(AVCodecContext *VAR_4,
                              void *VAR_5, int *VAR_6,
                              AVPacket *VAR_7)
{
    QtrleContext *VAR_8 = VAR_4->priv_data;
    int VAR_9, VAR_10;
    int VAR_11, VAR_12;
    int VAR_13 = 0;
    int VAR_14 = 0;
    int VAR_15, VAR_16;

    FUNC_5(&VAR_8->g, VAR_7->data, VAR_7->size);


    if (VAR_7->size < 8) {
        VAR_14 = 1;
        goto done;
    }


    VAR_16 = FUNC_4(&VAR_8->g) & 0x3FFFFFFF;
    if (VAR_16 - VAR_7->size > VAR_16 * (int64_t)VAR_4->discard_damaged_percentage / 100)
        return VAR_0;



    VAR_9 = FUNC_3(&VAR_8->g);


    if (VAR_9 & 0x0008) {
        if (VAR_7->size < 14) {
            VAR_14 = 1;
            goto done;
        }
        VAR_10 = FUNC_3(&VAR_8->g);
        FUNC_6(&VAR_8->g, 2);
        VAR_11 = FUNC_3(&VAR_8->g);
        FUNC_6(&VAR_8->g, 2);
        if (VAR_11 > VAR_8->avctx->height - VAR_10) {
            VAR_14 = 1;
            goto done;
        }
    } else {
        VAR_10 = 0;
        VAR_11 = VAR_8->avctx->height;
    }
    if ((VAR_15 = FUNC_8(VAR_4, VAR_8->frame, 0)) < 0)
        return VAR_15;

    VAR_12 = VAR_8->frame->linesize[0] * VAR_10;

    switch (VAR_4->bits_per_coded_sample) {
    case 1:
    case 33:
        FUNC_11(VAR_8, VAR_12, VAR_11);
        VAR_13 = 1;
        break;

    case 2:
    case 34:
        FUNC_13(VAR_8, VAR_12, VAR_11, 2);
        VAR_13 = 1;
        break;

    case 4:
    case 36:
        FUNC_13(VAR_8, VAR_12, VAR_11, 4);
        VAR_13 = 1;
        break;

    case 8:
    case 40:
        FUNC_15(VAR_8, VAR_12, VAR_11);
        VAR_13 = 1;
        break;

    case 16:
        FUNC_10(VAR_8, VAR_12, VAR_11);
        break;

    case 24:
        FUNC_12(VAR_8, VAR_12, VAR_11);
        break;

    case 32:
        FUNC_14(VAR_8, VAR_12, VAR_11);
        break;

    default:
        FUNC_1 (VAR_8->avctx, VAR_2, "Unsupported colorspace: %d bits/sample?\n",
            VAR_4->bits_per_coded_sample);
        break;
    }

    if(VAR_13) {
        int VAR_17;
        const uint8_t *VAR_18 = FUNC_2(VAR_7, VAR_3, &VAR_17);

        if (VAR_18 && VAR_17 == VAR_1) {
            VAR_8->frame->palette_has_changed = 1;
            FUNC_9(VAR_8->pal, VAR_18, VAR_1);
        } else if (VAR_18) {
            FUNC_1(VAR_4, VAR_2, "Palette size %d is wrong\n", VAR_17);
        }


        FUNC_9(VAR_8->frame->data[1], VAR_8->pal, VAR_1);
    }

done:
    if (!VAR_8->frame->data[0])
        return VAR_0;
    if (VAR_14) {


        VAR_15 = FUNC_7(VAR_4, VAR_8->frame);
        if (VAR_15 < 0)
            return VAR_15;
    }

    if ((VAR_15 = FUNC_0(VAR_5, VAR_8->frame)) < 0)
        return VAR_15;
    *VAR_6 = 1;


    return VAR_7->size;
}
