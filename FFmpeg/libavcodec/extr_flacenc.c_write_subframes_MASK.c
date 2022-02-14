
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_8__ {size_t blocksize; TYPE_4__* subframes; } ;
struct TYPE_7__ {int lpc_coeff_precision; } ;
struct TYPE_11__ {int channels; int pb; TYPE_2__ frame; TYPE_1__ options; } ;
struct TYPE_9__ {int coding_mode; int porder; int* params; } ;
struct TYPE_10__ {int type_code; int wasted; scalar_t__ type; int obits; int order; TYPE_3__ rc; int * residual; int * coefs; int shift; } ;
typedef TYPE_4__ FlacSubframe ;
typedef TYPE_5__ FlacEncodeContext ;


 int * FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_4(FlacEncodeContext *VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_4->channels; VAR_5++) {
        FlacSubframe *VAR_6 = &VAR_4->frame.subframes[VAR_5];
        int VAR_7, VAR_8, VAR_9, VAR_10;
        int32_t *VAR_11;
        int32_t *VAR_12 = VAR_6->residual;
        int32_t *VAR_13 = &VAR_6->residual[VAR_4->frame.blocksize];


        FUNC_1(&VAR_4->pb, 1, 0);
        FUNC_1(&VAR_4->pb, 6, VAR_6->type_code);
        FUNC_1(&VAR_4->pb, 1, !!VAR_6->wasted);
        if (VAR_6->wasted)
            FUNC_1(&VAR_4->pb, VAR_6->wasted, 1);


        if (VAR_6->type == VAR_0) {
            FUNC_2(&VAR_4->pb, VAR_6->obits, VAR_12[0]);
        } else if (VAR_6->type == VAR_2) {
            while (VAR_12 < VAR_13)
                FUNC_2(&VAR_4->pb, VAR_6->obits, *VAR_12++);
        } else {

            for (VAR_7 = 0; VAR_7 < VAR_6->order; VAR_7++)
                FUNC_2(&VAR_4->pb, VAR_6->obits, *VAR_12++);


            if (VAR_6->type == VAR_1) {
                int VAR_14 = VAR_4->options.lpc_coeff_precision;
                FUNC_1( &VAR_4->pb, 4, VAR_14-1);
                FUNC_2(&VAR_4->pb, 5, VAR_6->shift);
                for (VAR_7 = 0; VAR_7 < VAR_6->order; VAR_7++)
                    FUNC_2(&VAR_4->pb, VAR_14, VAR_6->coefs[VAR_7]);
            }


            FUNC_1(&VAR_4->pb, 2, VAR_6->rc.coding_mode - 4);


            VAR_9 = VAR_6->rc.porder;
            VAR_10 = VAR_4->frame.blocksize >> VAR_9;
            FUNC_1(&VAR_4->pb, 4, VAR_9);


            VAR_11 = &VAR_6->residual[VAR_10];
            for (VAR_8 = 0; VAR_8 < 1 << VAR_9; VAR_8++) {
                int VAR_15 = VAR_6->rc.params[VAR_8];
                FUNC_1(&VAR_4->pb, VAR_6->rc.coding_mode, VAR_15);
                while (VAR_12 < VAR_11)
                    FUNC_3(&VAR_4->pb, *VAR_12++, VAR_15, VAR_3, 0);
                VAR_11 = FUNC_0(VAR_13, VAR_11 + VAR_10);
            }
        }
    }
}
