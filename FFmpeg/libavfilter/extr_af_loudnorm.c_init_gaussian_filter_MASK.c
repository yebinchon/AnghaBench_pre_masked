
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* weights; } ;
typedef TYPE_1__ LoudNormContext ;


 double VAR_0 ;
 double const FUNC_0 (double const) ;
 double const FUNC_1 (int const,double) ;
 double const FUNC_2 (double) ;

__attribute__((used)) static void FUNC_3(LoudNormContext *VAR_1)
{
    double VAR_2 = 0.0;
    const double VAR_3 = 3.5;
    double VAR_4;
    int VAR_5;

    const int VAR_6 = 21 / 2;
    const double VAR_7 = 1.0 / (VAR_3 * FUNC_2(2.0 * VAR_0));
    const double VAR_8 = 2.0 * FUNC_1(VAR_3, 2.0);

    for (VAR_5 = 0; VAR_5 < 21; VAR_5++) {
        const int VAR_9 = VAR_5 - VAR_6;
        VAR_1->weights[VAR_5] = VAR_7 * FUNC_0(-(FUNC_1(VAR_9, 2.0) / VAR_8));
        VAR_2 += VAR_1->weights[VAR_5];
    }

    VAR_4 = 1.0 / VAR_2;
    for (VAR_5 = 0; VAR_5 < 21; VAR_5++)
        VAR_1->weights[VAR_5] *= VAR_4;
}
