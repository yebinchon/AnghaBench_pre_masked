
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double lg; double mg; double hg; int lf; int hf; } ;
typedef TYPE_1__ EQSTATE ;


 double VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (double) ;

void FUNC_2(EQSTATE * VAR_1, int VAR_2, int VAR_3, int VAR_4)
{


    FUNC_0(VAR_1, 0, sizeof(EQSTATE));



    VAR_1->lg = 1.0;
    VAR_1->mg = 1.0;
    VAR_1->hg = 1.0;



    VAR_1->lf = 2 * FUNC_1(VAR_0 * ((double) VAR_2 / (double) VAR_4));
    VAR_1->hf = 2 * FUNC_1(VAR_0 * ((double) VAR_3 / (double) VAR_4));
}
