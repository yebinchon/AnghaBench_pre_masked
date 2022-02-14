
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double const,double const,double) ;

int FUNC_1(const double *VAR_0, const double *VAR_1, double VAR_2,
                              unsigned VAR_3)
{
    unsigned VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        if (!FUNC_0(VAR_0[VAR_4], VAR_1[VAR_4], VAR_2))
            return 0;
    }
    return 1;
}
