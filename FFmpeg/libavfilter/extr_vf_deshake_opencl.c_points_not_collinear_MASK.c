
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* s; } ;
typedef TYPE_1__ cl_float2 ;


 double FUNC_0 (double) ;

__attribute__((used)) static bool FUNC_1(const cl_float2 **VAR_0)
{
    int VAR_1, VAR_2, VAR_3 = 2;

    for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++) {
        double VAR_4 = VAR_0[VAR_1]->s[0] - VAR_0[VAR_3]->s[0];
        double VAR_5 = VAR_0[VAR_1]->s[1] - VAR_0[VAR_3]->s[1];

        for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
            double VAR_6 = VAR_0[VAR_2]->s[0] - VAR_0[VAR_3]->s[0];
            double VAR_7 = VAR_0[VAR_2]->s[1] - VAR_0[VAR_3]->s[1];




            if (FUNC_0(VAR_6*VAR_5 - VAR_7*VAR_4) <= 1.0) {
                return 0;
            }
        }
    }

    return 1;
}
