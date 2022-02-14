
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int flags; int properties; } ;
struct TYPE_7__ {int nreslevels; scalar_t__ nreslevels2decode; int log2_cblk_width; int log2_cblk_height; int cblk_style; int transform; int csty; int* log2_prec_widths; int* log2_prec_heights; } ;
struct TYPE_6__ {scalar_t__ reduction_factor; TYPE_5__* avctx; int g; } ;
typedef TYPE_1__ Jpeg2000DecoderContext ;
typedef TYPE_2__ Jpeg2000CodingStyle ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (TYPE_5__*,int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int*,int,int) ;

__attribute__((used)) static int FUNC_6(Jpeg2000DecoderContext *VAR_12, Jpeg2000CodingStyle *VAR_13)
{
    uint8_t VAR_14;

    if (FUNC_3(&VAR_12->g) < 5) {
        FUNC_1(VAR_12->avctx, VAR_2, "Insufficient space for COX\n");
        return VAR_0;
    }



    VAR_13->nreslevels = FUNC_4(&VAR_12->g) + 1;
    if (VAR_13->nreslevels >= VAR_11) {
        FUNC_1(VAR_12->avctx, VAR_2, "nreslevels %d is invalid\n", VAR_13->nreslevels);
        return VAR_0;
    }

    if (VAR_13->nreslevels <= VAR_12->reduction_factor) {




        FUNC_1(VAR_12->avctx, VAR_2, "reduction_factor too large for this bitstream, max is %d\n", VAR_13->nreslevels - 1);
        VAR_12->reduction_factor = VAR_13->nreslevels - 1;
        return FUNC_0(VAR_4);
    }


    VAR_13->nreslevels2decode = VAR_13->nreslevels - VAR_12->reduction_factor;

    VAR_13->log2_cblk_width = (FUNC_4(&VAR_12->g) & 15) + 2;
    VAR_13->log2_cblk_height = (FUNC_4(&VAR_12->g) & 15) + 2;

    if (VAR_13->log2_cblk_width > 10 || VAR_13->log2_cblk_height > 10 ||
        VAR_13->log2_cblk_width + VAR_13->log2_cblk_height > 12) {
        FUNC_1(VAR_12->avctx, VAR_2, "cblk size invalid\n");
        return VAR_0;
    }

    VAR_13->cblk_style = FUNC_4(&VAR_12->g);
    if (VAR_13->cblk_style != 0) {
        FUNC_1(VAR_12->avctx, VAR_3, "extra cblk styles %X\n", VAR_13->cblk_style);
        if (VAR_13->cblk_style & VAR_9)
            FUNC_1(VAR_12->avctx, VAR_3, "Selective arithmetic coding bypass\n");
    }
    VAR_13->transform = FUNC_4(&VAR_12->g);

    if ((VAR_12->avctx->flags & VAR_1) && (VAR_13->transform == VAR_7))
        VAR_13->transform = VAR_8;
    else if (VAR_13->transform == VAR_6) {
        VAR_12->avctx->properties |= VAR_5;
    }

    if (VAR_13->csty & VAR_10) {
        int VAR_15;
        for (VAR_15 = 0; VAR_15 < VAR_13->nreslevels; VAR_15++) {
            VAR_14 = FUNC_2(&VAR_12->g);
            VAR_13->log2_prec_widths[VAR_15] = VAR_14 & 0x0F;
            VAR_13->log2_prec_heights[VAR_15] = (VAR_14 >> 4) & 0x0F;
            if (VAR_15)
                if (VAR_13->log2_prec_widths[VAR_15] == 0 || VAR_13->log2_prec_heights[VAR_15] == 0) {
                    FUNC_1(VAR_12->avctx, VAR_2, "PPx %d PPy %d invalid\n",
                           VAR_13->log2_prec_widths[VAR_15], VAR_13->log2_prec_heights[VAR_15]);
                    VAR_13->log2_prec_widths[VAR_15] = VAR_13->log2_prec_heights[VAR_15] = 1;
                    return VAR_0;
                }
        }
    } else {
        FUNC_5(VAR_13->log2_prec_widths , 15, sizeof(VAR_13->log2_prec_widths ));
        FUNC_5(VAR_13->log2_prec_heights, 15, sizeof(VAR_13->log2_prec_heights));
    }
    return 0;
}
