
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double a2; double a0; double a1; int b1; int b2; } ;
typedef TYPE_1__ BiquadContext ;


 double VAR_0 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(BiquadContext *VAR_1, float VAR_2, float VAR_3, float VAR_4)
{
    double VAR_5 = (2.0 * VAR_0 * VAR_2 / VAR_4);
    double VAR_6 = FUNC_1(VAR_5);
    double VAR_7 = FUNC_0(VAR_5);
    double VAR_8 = (VAR_6 / (2 * VAR_3));
    double VAR_9 = (1.0 / (1.0 + VAR_8));

    VAR_1->a2 = VAR_1->a0 = (VAR_9 * (1.0 - VAR_7) * 0.5);
    VAR_1->a1 = VAR_1->a0 + VAR_1->a0;
    VAR_1->b1 = -2. * VAR_7 * VAR_9;
    VAR_1->b2 = (1. - VAR_8) * VAR_9;
}
