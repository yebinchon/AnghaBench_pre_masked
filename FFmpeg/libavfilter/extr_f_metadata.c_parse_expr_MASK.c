
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* var_values; int expr; } ;
typedef TYPE_1__ MetadataContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,double*,int *) ;
 int FUNC_1 (char const*,char*,double*) ;

__attribute__((used)) static int FUNC_2(MetadataContext *VAR_2, const char *VAR_3, const char *VAR_4)
{
    double VAR_5, VAR_6;

    if (FUNC_1(VAR_3, "%lf", &VAR_5) + FUNC_1(VAR_4, "%lf", &VAR_6) != 2)
        return 0;

    VAR_2->var_values[VAR_0] = VAR_5;
    VAR_2->var_values[VAR_1] = VAR_6;

    return FUNC_0(VAR_2->expr, VAR_2->var_values, ((void*)0));
}
