
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double a0; int a1; double a2; int b1; double b2; } ;
typedef TYPE_1__ BiquadD2 ;


 double VAR_0 ;
 double FUNC_0 (double) ;
 int FUNC_1 (double) ;
 int FUNC_2 (double) ;

__attribute__((used)) static inline void FUNC_3(BiquadD2 *VAR_1, double VAR_2, double VAR_3, double VAR_4, double VAR_5)
{
    double VAR_6 = FUNC_2(VAR_4);
    double VAR_7 = VAR_2 * 2 * VAR_0 / VAR_5;
    double VAR_8 = FUNC_1(VAR_7) / (2 * VAR_3);
    double VAR_9 = FUNC_0(VAR_7);
    double VAR_10 = 2 * FUNC_2(VAR_6) * VAR_8;
    double VAR_11 = 0, VAR_12 = 0;

    VAR_1->a0 = VAR_6*( (VAR_6+1) + (VAR_6-1)*VAR_9 + VAR_10);
    VAR_1->a1 = -2*VAR_6*( (VAR_6-1) + (VAR_6+1)*VAR_9);
    VAR_1->a2 = VAR_6*( (VAR_6+1) + (VAR_6-1)*VAR_9 - VAR_10);
        VAR_11 = (VAR_6+1) - (VAR_6-1)*VAR_9 + VAR_10;
    VAR_1->b1 = 2*( (VAR_6-1) - (VAR_6+1)*VAR_9);
    VAR_1->b2 = (VAR_6+1) - (VAR_6-1)*VAR_9 - VAR_10;

    VAR_12 = 1 / VAR_11;
    VAR_1->b1 *= VAR_12;
    VAR_1->b2 *= VAR_12;
    VAR_1->a0 *= VAR_12;
    VAR_1->a1 *= VAR_12;
    VAR_1->a2 *= VAR_12;
}
