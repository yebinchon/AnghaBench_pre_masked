
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int blheight; int * obmc_weight; } ;
typedef int Plane ;
typedef TYPE_1__ DiracContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(DiracContext *VAR_1, Plane *VAR_2, int VAR_3)
{
    int VAR_4 = !VAR_3;
    int VAR_5 = VAR_3 == VAR_1->blheight-1;


    if (VAR_4 || VAR_5 || VAR_3 == 1) {
        FUNC_0(VAR_2, VAR_1->obmc_weight[0], VAR_0, 1, 0, VAR_4, VAR_5);
        FUNC_0(VAR_2, VAR_1->obmc_weight[1], VAR_0, 0, 0, VAR_4, VAR_5);
        FUNC_0(VAR_2, VAR_1->obmc_weight[2], VAR_0, 0, 1, VAR_4, VAR_5);
    }
}
