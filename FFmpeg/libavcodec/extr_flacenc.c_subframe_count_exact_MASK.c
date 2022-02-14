
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_10__ {int blocksize; } ;
struct TYPE_8__ {int lpc_coeff_precision; } ;
struct TYPE_12__ {TYPE_3__ frame; TYPE_1__ options; } ;
struct TYPE_9__ {int porder; int* params; scalar_t__ coding_mode; } ;
struct TYPE_11__ {scalar_t__ type; int obits; int * residual; TYPE_2__ rc; scalar_t__ wasted; } ;
typedef TYPE_4__ FlacSubframe ;
typedef TYPE_5__ FlacEncodeContext ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *,int,int) ;

__attribute__((used)) static uint64_t FUNC_2(FlacEncodeContext *VAR_3, FlacSubframe *VAR_4,
                                     int VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    int VAR_9, VAR_10;
    uint64_t VAR_11 = 0;


    VAR_11 += 8;

    if (VAR_4->wasted)
        VAR_11 += VAR_4->wasted;


    if (VAR_4->type == VAR_0) {
        VAR_11 += VAR_4->obits;
    } else if (VAR_4->type == VAR_2) {
        VAR_11 += VAR_3->frame.blocksize * VAR_4->obits;
    } else {

        VAR_11 += VAR_5 * VAR_4->obits;


        if (VAR_4->type == VAR_1)
            VAR_11 += 4 + 5 + VAR_5 * VAR_3->options.lpc_coeff_precision;


        VAR_11 += 2;


        VAR_7 = VAR_4->rc.porder;
        VAR_8 = VAR_3->frame.blocksize >> VAR_7;
        VAR_11 += 4;


        VAR_9 = VAR_5;
        VAR_10 = VAR_8;
        for (VAR_6 = 0; VAR_6 < 1 << VAR_7; VAR_6++) {
            int VAR_12 = VAR_4->rc.params[VAR_6];
            VAR_11 += VAR_4->rc.coding_mode;
            VAR_11 += FUNC_1(&VAR_4->residual[VAR_9], VAR_10 - VAR_9, VAR_12);
            VAR_9 = VAR_10;
            VAR_10 = FUNC_0(VAR_3->frame.blocksize, VAR_10 + VAR_8);
        }
    }

    return VAR_11;
}
