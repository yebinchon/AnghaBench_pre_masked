
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ asc_c; double asc_coeff; double asc; scalar_t__ auto_release; } ;
typedef TYPE_1__ AudioLimiterContext ;


 double FUNC_0 (double,double) ;

__attribute__((used)) static double FUNC_1(AudioLimiterContext *VAR_0, double VAR_1, int VAR_2,
                         double VAR_3, double VAR_4, double VAR_5, int VAR_6)
{
    double VAR_7 = (1.0 - VAR_5) / (VAR_2 * VAR_1);

    if (VAR_6 && VAR_0->auto_release && VAR_0->asc_c > 0) {
        double VAR_8 = VAR_4 / (VAR_0->asc_coeff * VAR_0->asc) * (double)VAR_0->asc_c;

        if (VAR_8 > VAR_5) {
            double VAR_9 = FUNC_0((VAR_8 - VAR_5) / (VAR_2 * VAR_1), VAR_7 / 10);

            if (VAR_9 < VAR_7)
                VAR_7 = VAR_9;
        }
    }

    return VAR_7;
}
