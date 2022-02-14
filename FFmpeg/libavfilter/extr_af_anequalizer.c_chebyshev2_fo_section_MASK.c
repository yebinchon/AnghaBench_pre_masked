
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double b0; int b1; double b2; int b3; double b4; int a0; int a1; double a2; int a3; double a4; } ;
typedef TYPE_1__ FoSection ;



__attribute__((used)) static void FUNC_0(FoSection *VAR_0, double VAR_1,
                                  double VAR_2, double VAR_3,
                                  double VAR_4, double VAR_5, double VAR_6,
                                  double VAR_7, double VAR_8)
{
    if (VAR_8 == 1 || VAR_8 == -1) {
        VAR_0->b0 = (VAR_4*VAR_4*VAR_3*VAR_3 + 2*VAR_3*VAR_4*VAR_6*VAR_5 + VAR_6*VAR_6 + VAR_4*VAR_4*VAR_2*VAR_2)/VAR_7;
        VAR_0->b1 = 2*VAR_8*(VAR_4*VAR_4*VAR_3*VAR_3 - VAR_6*VAR_6 - VAR_4*VAR_4*VAR_2*VAR_2)/VAR_7;
        VAR_0->b2 = (VAR_4*VAR_4*VAR_3*VAR_3 - 2*VAR_3*VAR_4*VAR_6*VAR_5 + VAR_6*VAR_6 + VAR_4*VAR_4*VAR_2*VAR_2)/VAR_7;
        VAR_0->b3 = 0;
        VAR_0->b4 = 0;

        VAR_0->a0 = 1;
        VAR_0->a1 = 2*VAR_8*(VAR_3*VAR_3 - VAR_1*VAR_1 - VAR_2*VAR_2)/VAR_7;
        VAR_0->a2 = (VAR_3*VAR_3 - 2*VAR_3*VAR_1*VAR_5 + VAR_1*VAR_1 + VAR_2*VAR_2)/VAR_7;
        VAR_0->a3 = 0;
        VAR_0->a4 = 0;
    } else {
        VAR_0->b0 = (VAR_4*VAR_4*VAR_3*VAR_3 + 2*VAR_4*VAR_6*VAR_5*VAR_3 + VAR_6*VAR_6 + VAR_4*VAR_4*VAR_2*VAR_2)/VAR_7;
        VAR_0->b1 = -4*VAR_8*(VAR_6*VAR_6 + VAR_4*VAR_4*VAR_2*VAR_2 + VAR_4*VAR_6*VAR_5*VAR_3)/VAR_7;
        VAR_0->b2 = 2*((VAR_6*VAR_6 + VAR_4*VAR_4*VAR_2*VAR_2)*(1 + 2*VAR_8*VAR_8) - VAR_4*VAR_4*VAR_3*VAR_3)/VAR_7;
        VAR_0->b3 = -4*VAR_8*(VAR_6*VAR_6 + VAR_4*VAR_4*VAR_2*VAR_2 - VAR_4*VAR_6*VAR_5*VAR_3)/VAR_7;
        VAR_0->b4 = (VAR_4*VAR_4*VAR_3*VAR_3 - 2*VAR_4*VAR_6*VAR_5*VAR_3 + VAR_6*VAR_6 + VAR_4*VAR_4*VAR_2*VAR_2)/VAR_7;

        VAR_0->a0 = 1;
        VAR_0->a1 = -4*VAR_8*(VAR_1*VAR_1 + VAR_2*VAR_2 + VAR_1*VAR_5*VAR_3)/VAR_7;
        VAR_0->a2 = 2*((VAR_1*VAR_1 + VAR_2*VAR_2)*(1 + 2*VAR_8*VAR_8) - VAR_3*VAR_3)/VAR_7;
        VAR_0->a3 = -4*VAR_8*(VAR_1*VAR_1 + VAR_2*VAR_2 - VAR_1*VAR_5*VAR_3)/VAR_7;
        VAR_0->a4 = (VAR_3*VAR_3 - 2*VAR_1*VAR_5*VAR_3 + VAR_1*VAR_1 + VAR_2*VAR_2)/VAR_7;
    }
}
