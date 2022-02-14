
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int blocksize; int* bs_code; scalar_t__ verbatim_only; TYPE_3__* subframes; } ;
struct TYPE_11__ {int channels; TYPE_1__* avctx; TYPE_4__ frame; } ;
struct TYPE_8__ {int coding_mode; } ;
struct TYPE_9__ {int obits; TYPE_2__ rc; scalar_t__ wasted; } ;
struct TYPE_7__ {int bits_per_raw_sample; } ;
typedef TYPE_3__ FlacSubframe ;
typedef TYPE_4__ FlacFrame ;
typedef TYPE_5__ FlacEncodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_0(FlacEncodeContext *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    FlacFrame *VAR_7;

    VAR_7 = &VAR_3->frame;

    for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
        if (VAR_4 == VAR_2[VAR_5]) {
            VAR_7->blocksize = VAR_2[VAR_5];
            VAR_7->bs_code[0] = VAR_5;
            VAR_7->bs_code[1] = 0;
            break;
        }
    }
    if (VAR_5 == 16) {
        VAR_7->blocksize = VAR_4;
        if (VAR_7->blocksize <= 256) {
            VAR_7->bs_code[0] = 6;
            VAR_7->bs_code[1] = VAR_7->blocksize-1;
        } else {
            VAR_7->bs_code[0] = 7;
            VAR_7->bs_code[1] = VAR_7->blocksize-1;
        }
    }

    for (VAR_6 = 0; VAR_6 < VAR_3->channels; VAR_6++) {
        FlacSubframe *VAR_8 = &VAR_7->subframes[VAR_6];

        VAR_8->wasted = 0;
        VAR_8->obits = VAR_3->avctx->bits_per_raw_sample;

        if (VAR_8->obits > 16)
            VAR_8->rc.coding_mode = VAR_1;
        else
            VAR_8->rc.coding_mode = VAR_0;
    }

    VAR_7->verbatim_only = 0;
}
