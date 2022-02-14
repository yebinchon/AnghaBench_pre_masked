
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double* var_values; } ;
typedef TYPE_1__ LutContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 double FUNC_0 (double,double) ;

__attribute__((used)) static double FUNC_1(void *VAR_3, double VAR_4)
{
    LutContext *VAR_5 = VAR_3;
    double VAR_6 = VAR_5->var_values[VAR_0];
    double VAR_7 = VAR_5->var_values[VAR_2];
    double VAR_8 = VAR_5->var_values[VAR_1];

    return FUNC_0((VAR_6-VAR_7)/(VAR_8-VAR_7), VAR_4) * (VAR_8-VAR_7)+VAR_7;
}
