
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int** lpc_coef; int * lpc_refl_rms; int avctx; } ;
typedef TYPE_1__ RA144Context ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*,int*,int ) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int*) ;

int FUNC_4(RA144Context *VAR_2, int16_t *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7[VAR_0];
    int VAR_8 = VAR_1 - VAR_4;
    int VAR_9;



    for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
        VAR_3[VAR_9] = (VAR_4 * VAR_2->lpc_coef[0][VAR_9] + VAR_8 * VAR_2->lpc_coef[1][VAR_9])>> 2;

    if (FUNC_0(VAR_7, VAR_3, VAR_2->avctx)) {


        FUNC_1(VAR_3, VAR_2->lpc_coef[VAR_5]);
        return FUNC_2(VAR_2->lpc_refl_rms[VAR_5], VAR_6);
    } else {
        return FUNC_2(FUNC_3(VAR_7), VAR_6);
    }
}
