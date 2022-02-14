
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int a0; double a1; double a2; double b1; double b2; } ;
typedef TYPE_1__ BiquadCoeffs ;


 double VAR_0 ;
 double FUNC_0 (double) ;
 double FUNC_1 (int,double) ;
 double FUNC_2 (double) ;

__attribute__((used)) static double FUNC_3(BiquadCoeffs *VAR_1, double VAR_2, double VAR_3)
{
    double VAR_4, VAR_5;

    VAR_2 *= 2.0 * VAR_0 / VAR_3;
    VAR_4 = FUNC_0(VAR_2);
    VAR_5 = -FUNC_2(VAR_2);


    return FUNC_1(VAR_1->a0 + VAR_1->a1*VAR_4 + VAR_1->a2*(VAR_4*VAR_4-VAR_5*VAR_5), VAR_1->a1*VAR_5 + 2*VAR_1->a2*VAR_4*VAR_5) /
           FUNC_1(1 + VAR_1->b1*VAR_4 + VAR_1->b2*(VAR_4*VAR_4-VAR_5*VAR_5), VAR_1->b1*VAR_5 + 2*VAR_1->b2*VAR_4*VAR_5);
}
