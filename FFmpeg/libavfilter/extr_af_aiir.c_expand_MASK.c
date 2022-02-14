
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ,char*,double,int) ;
 scalar_t__ FUNC_2 (double) ;
 int FUNC_3 (double,double,int,double*) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_3, double *VAR_4, int VAR_5, double *VAR_6)
{
    int VAR_7;

    VAR_6[0] = 1.0;
    VAR_6[1] = 0.0;

    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        VAR_6[2 * (VAR_7 + 1) ] = 0.0;
        VAR_6[2 * (VAR_7 + 1) + 1] = 0.0;
    }

    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
        FUNC_3(VAR_4[2 * VAR_7], VAR_4[2 * VAR_7 + 1], VAR_5, VAR_6);

    for (VAR_7 = 0; VAR_7 < VAR_5 + 1; VAR_7++) {
        if (FUNC_2(VAR_6[2 * VAR_7 + 1]) > VAR_2) {
            FUNC_1(VAR_3, VAR_0, "coeff: %f of z^%d is not real; poles/zeros are not complex conjugates.\n",
                   VAR_6[2 * VAR_7 + 1], VAR_7);
            return FUNC_0(VAR_1);
        }
    }

    return 0;
}
