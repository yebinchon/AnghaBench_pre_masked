
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double a2; double a0; double a1; double b1; double b2; } ;
typedef TYPE_1__ BiquadD2 ;


 double VAR_0 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static inline void FUNC_2(BiquadD2 *VAR_1, double VAR_2, double VAR_3, double VAR_4, double VAR_5)
{
    double VAR_6 = 2.0 * VAR_0 * VAR_2 / VAR_4;
    double VAR_7 = FUNC_1(VAR_6);
    double VAR_8 = FUNC_0(VAR_6);
    double VAR_9 = VAR_7/(2 * VAR_3);
    double VAR_10 = 1.0/(1.0 + VAR_9);

    VAR_1->a2 = VAR_1->a0 = VAR_5 * VAR_10 * (1.0 - VAR_8) * 0.5;
    VAR_1->a1 = VAR_1->a0 + VAR_1->a0;
    VAR_1->b1 = (-2.0 * VAR_8 * VAR_10);
    VAR_1->b2 = ((1.0 - VAR_9) * VAR_10);
}
