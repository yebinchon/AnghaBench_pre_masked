
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double* var_values; } ;
typedef TYPE_1__ RotContext ;


 double FUNC_0 (int ,double) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 float FUNC_1 (double) ;
 float FUNC_2 (double) ;

__attribute__((used)) static double FUNC_3(void *VAR_2, double VAR_3)
{
    RotContext *VAR_4 = VAR_2;
    double VAR_5 = VAR_4->var_values[VAR_1];
    double VAR_6 = VAR_4->var_values[VAR_0];
    float VAR_7 = FUNC_2(VAR_3);
    float VAR_8 = FUNC_1(VAR_3);

    return FUNC_0(0, -VAR_6 * VAR_8) + FUNC_0(0, -VAR_5 * VAR_7) +
           FUNC_0(0, VAR_6 * VAR_8) + FUNC_0(0, VAR_5 * VAR_7);
}
