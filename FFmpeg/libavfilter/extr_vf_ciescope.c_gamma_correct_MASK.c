
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ColorSystem {double gamma; } ;


 double FUNC_0 (double,int) ;

__attribute__((used)) static void
FUNC_1(const struct ColorSystem * const VAR_0,
              double * const VAR_1)
{
    double VAR_2;
    double VAR_3;

    VAR_2 = VAR_0->gamma;

    if (VAR_2 == 0.) {

        VAR_3 = 0.018;
        if (*VAR_1 < VAR_3) {
            *VAR_1 *= (1.099 * FUNC_0(VAR_3, 0.45) - 0.099) / VAR_3;
        } else {
            *VAR_1 = 1.099 * FUNC_0(*VAR_1, 0.45) - 0.099;
        }
    } else {

        *VAR_1 = FUNC_0(*VAR_1, 1./VAR_2);
    }
}
