
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct WhitepointCoefficients {double xw; double yw; } ;
struct PrimaryCoefficients {double xr; double yr; double xg; double yg; double xb; double yb; } ;


 int FUNC_0 (double**,double**) ;

void FUNC_1(const struct PrimaryCoefficients *VAR_0,
                           const struct WhitepointCoefficients *VAR_1,
                           double VAR_2[3][3])
{
    double VAR_3[3][3], VAR_4, VAR_5, VAR_6, VAR_7;

    VAR_2[0][0] = VAR_0->xr / VAR_0->yr;
    VAR_2[0][1] = VAR_0->xg / VAR_0->yg;
    VAR_2[0][2] = VAR_0->xb / VAR_0->yb;
    VAR_2[1][0] = VAR_2[1][1] = VAR_2[1][2] = 1.0;
    VAR_2[2][0] = (1.0 - VAR_0->xr - VAR_0->yr) / VAR_0->yr;
    VAR_2[2][1] = (1.0 - VAR_0->xg - VAR_0->yg) / VAR_0->yg;
    VAR_2[2][2] = (1.0 - VAR_0->xb - VAR_0->yb) / VAR_0->yb;
    FUNC_0(VAR_2, VAR_3);
    VAR_7 = 1.0 - VAR_1->xw - VAR_1->yw;
    VAR_4 = VAR_3[0][0] * VAR_1->xw + VAR_3[0][1] * VAR_1->yw + VAR_3[0][2] * VAR_7;
    VAR_5 = VAR_3[1][0] * VAR_1->xw + VAR_3[1][1] * VAR_1->yw + VAR_3[1][2] * VAR_7;
    VAR_6 = VAR_3[2][0] * VAR_1->xw + VAR_3[2][1] * VAR_1->yw + VAR_3[2][2] * VAR_7;
    VAR_2[0][0] *= VAR_4;
    VAR_2[0][1] *= VAR_5;
    VAR_2[0][2] *= VAR_6;
    VAR_2[1][0] *= VAR_4;
    VAR_2[1][1] *= VAR_5;
    VAR_2[1][2] *= VAR_6;
    VAR_2[2][0] *= VAR_4;
    VAR_2[2][1] *= VAR_5;
    VAR_2[2][2] *= VAR_6;
}
