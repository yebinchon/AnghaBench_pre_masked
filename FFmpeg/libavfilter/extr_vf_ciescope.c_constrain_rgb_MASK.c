
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(double * const VAR_0,
              double * const VAR_1,
              double * const VAR_2)
{






    double VAR_3;


    VAR_3 = (0 < *VAR_0) ? 0 : *VAR_0;
    VAR_3 = (VAR_3 < *VAR_1) ? VAR_3 : *VAR_1;
    VAR_3 = (VAR_3 < *VAR_2) ? VAR_3 : *VAR_2;
    VAR_3 = - VAR_3;


    if (VAR_3 > 0) {
        *VAR_0 += VAR_3; *VAR_1 += VAR_3; *VAR_2 += VAR_3;

        return 1;
    }

    return 0;
}
