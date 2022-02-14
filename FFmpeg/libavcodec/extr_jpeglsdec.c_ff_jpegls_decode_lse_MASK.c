
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int debug; int bits_per_raw_sample; int pix_fmt; } ;
struct TYPE_8__ {int maxval; int t1; int t2; int t3; int reset; int palette_index; TYPE_4__* avctx; int gb; TYPE_1__* picture_ptr; } ;
struct TYPE_7__ {int format; scalar_t__* data; } ;
typedef TYPE_2__ MJpegDecodeContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_4__*,int ,char*,int,...) ;
 int FUNC_3 (TYPE_4__*,char*,...) ;
 int FUNC_4 (TYPE_4__*,char*,int,int,int,int) ;
 int FUNC_5 (int *,int) ;

int FUNC_6(MJpegDecodeContext *VAR_9)
{
    int VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

    int VAR_16 = FUNC_5(&VAR_9->gb, 16);
    VAR_10 = FUNC_5(&VAR_9->gb, 8);

    switch (VAR_10) {
    case 1:
        if (VAR_16 < 13)
            return VAR_0;

        VAR_9->maxval = FUNC_5(&VAR_9->gb, 16);
        VAR_9->t1 = FUNC_5(&VAR_9->gb, 16);
        VAR_9->t2 = FUNC_5(&VAR_9->gb, 16);
        VAR_9->t3 = FUNC_5(&VAR_9->gb, 16);
        VAR_9->reset = FUNC_5(&VAR_9->gb, 16);

        if(VAR_9->avctx->debug & VAR_7) {
            FUNC_2(VAR_9->avctx, VAR_2, "Coding parameters maxval:%d T1:%d T2:%d T3:%d reset:%d\n",
                   VAR_9->maxval, VAR_9->t1, VAR_9->t2, VAR_9->t3, VAR_9->reset);
        }



        break;
    case 2:
        VAR_9->palette_index = 0;
    case 3:
        VAR_11= FUNC_5(&VAR_9->gb, 8);
        VAR_12 = FUNC_5(&VAR_9->gb, 8);

        if (VAR_16 < 5)
            return VAR_0;

        if (VAR_12 < 1 || VAR_12 > VAR_8) {
            FUNC_3(VAR_9->avctx, "wt %d", VAR_12);
            return VAR_1;
        }

        if (!VAR_9->maxval)
            VAR_13 = 255;
        else if ((5 + VAR_12*(VAR_9->maxval+1)) < 65535)
            VAR_13 = VAR_9->maxval;
        else
            VAR_13 = 65530/VAR_12 - 1;

        if(VAR_9->avctx->debug & VAR_7) {
            FUNC_2(VAR_9->avctx, VAR_2, "LSE palette %d tid:%d wt:%d maxtab:%d\n", VAR_10, VAR_11, VAR_12, VAR_13);
        }
        if (VAR_13 >= 256) {
            FUNC_3(VAR_9->avctx, ">8bit palette");
            return VAR_1;
        }
        VAR_13 = FUNC_1(VAR_13, (VAR_16 - 5) / VAR_12 + VAR_9->palette_index);

        if (VAR_9->palette_index > VAR_13)
            return VAR_0;

        if ((VAR_9->avctx->pix_fmt == VAR_4 || VAR_9->avctx->pix_fmt == VAR_5) &&
            (VAR_9->picture_ptr->format == VAR_4 || VAR_9->picture_ptr->format == VAR_5)) {
            uint32_t *VAR_17 = (uint32_t *)VAR_9->picture_ptr->data[1];
            int VAR_18 = 0;

            if (VAR_9->avctx->bits_per_raw_sample > 0 && VAR_9->avctx->bits_per_raw_sample < 8) {
                VAR_13 = FUNC_1(VAR_13, (1<<VAR_9->avctx->bits_per_raw_sample)-1);
                VAR_18 = 8 - VAR_9->avctx->bits_per_raw_sample;
            }

            VAR_9->picture_ptr->format =
            VAR_9->avctx->pix_fmt = VAR_5;
            for (VAR_14=VAR_9->palette_index; VAR_14<=VAR_13; VAR_14++) {
                uint8_t VAR_19 = VAR_14 << VAR_18;
                VAR_17[VAR_19] = 0;
                for (VAR_15=0; VAR_15<VAR_12; VAR_15++) {
                    VAR_17[VAR_19] |= FUNC_5(&VAR_9->gb, 8) << (8*(VAR_12-VAR_15-1));
                }
            }
            VAR_9->palette_index = VAR_14;
        }
        break;
    case 4:
        FUNC_3(VAR_9->avctx, "oversize image");
        return FUNC_0(VAR_6);
    default:
        FUNC_2(VAR_9->avctx, VAR_3, "invalid id %d\n", VAR_10);
        return VAR_0;
    }
    FUNC_4(VAR_9->avctx, "ID=%i, T=%i,%i,%i\n", VAR_10, VAR_9->t1, VAR_9->t2, VAR_9->t3);

    return 0;
}
