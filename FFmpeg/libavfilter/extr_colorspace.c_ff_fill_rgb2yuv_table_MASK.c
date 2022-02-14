
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LumaCoefficients {double cr; double cg; double cb; } ;


 int VAR_0 ;
 int FUNC_0 (double**,int ,int) ;
 int VAR_1 ;

void FUNC_1(const struct LumaCoefficients *VAR_2,
                           double VAR_3[3][3])
{
    double VAR_4, VAR_5;


    if (VAR_2->cr == 0.25 && VAR_2->cg == 0.5 && VAR_2->cb == 0.25) {
        FUNC_0(VAR_3, VAR_1, sizeof(double) * 9);
        return;
    } else if (VAR_2->cr == 1 && VAR_2->cg == 1 && VAR_2->cb == 1) {
        FUNC_0(VAR_3, VAR_0, sizeof(double) * 9);
        return;
    }

    VAR_3[0][0] = VAR_2->cr;
    VAR_3[0][1] = VAR_2->cg;
    VAR_3[0][2] = VAR_2->cb;
    VAR_4 = 0.5 / (VAR_2->cb - 1.0);
    VAR_5 = 0.5 / (VAR_2->cr - 1.0);
    VAR_3[1][0] = VAR_4 * VAR_2->cr;
    VAR_3[1][1] = VAR_4 * VAR_2->cg;
    VAR_3[1][2] = 0.5;
    VAR_3[2][0] = 0.5;
    VAR_3[2][1] = VAR_5 * VAR_2->cg;
    VAR_3[2][2] = VAR_5 * VAR_2->cb;
}
