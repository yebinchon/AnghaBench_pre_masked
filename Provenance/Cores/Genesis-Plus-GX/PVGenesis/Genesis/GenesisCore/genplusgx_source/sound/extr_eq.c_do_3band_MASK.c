
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double f1p0; double lf; int f1p1; int f1p2; int f1p3; double f2p0; double hf; int f2p1; int f2p2; int f2p3; double sdm3; double lg; double mg; double hg; int sdm2; int sdm1; } ;
typedef TYPE_1__ EQSTATE ;


 scalar_t__ VAR_0 ;

double FUNC_0(EQSTATE * VAR_1, int VAR_2)
{


    double VAR_3, VAR_4, VAR_5;



    VAR_1->f1p0 += (VAR_1->lf * ((double) VAR_2 - VAR_1->f1p0)) + VAR_0;
    VAR_1->f1p1 += (VAR_1->lf * (VAR_1->f1p0 - VAR_1->f1p1));
    VAR_1->f1p2 += (VAR_1->lf * (VAR_1->f1p1 - VAR_1->f1p2));
    VAR_1->f1p3 += (VAR_1->lf * (VAR_1->f1p2 - VAR_1->f1p3));

    VAR_3 = VAR_1->f1p3;



    VAR_1->f2p0 += (VAR_1->hf * ((double) VAR_2 - VAR_1->f2p0)) + VAR_0;
    VAR_1->f2p1 += (VAR_1->hf * (VAR_1->f2p0 - VAR_1->f2p1));
    VAR_1->f2p2 += (VAR_1->hf * (VAR_1->f2p1 - VAR_1->f2p2));
    VAR_1->f2p3 += (VAR_1->hf * (VAR_1->f2p2 - VAR_1->f2p3));

    VAR_5 = VAR_1->sdm3 - VAR_1->f2p3;





    VAR_4 = VAR_2 - (VAR_5 + VAR_3);



    VAR_3 *= VAR_1->lg;
    VAR_4 *= VAR_1->mg;
    VAR_5 *= VAR_1->hg;



    VAR_1->sdm3 = VAR_1->sdm2;
    VAR_1->sdm2 = VAR_1->sdm1;
    VAR_1->sdm1 = VAR_2;



    return (int) (VAR_3 + VAR_4 + VAR_5);
}
