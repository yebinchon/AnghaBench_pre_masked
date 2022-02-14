
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float tilt_coef; int pitch_lag_int; } ;
typedef TYPE_1__ AMRWBContext ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(AMRWBContext *VAR_1, float *VAR_2)
{
    int VAR_3;


    for (VAR_3 = VAR_0 - 1; VAR_3 != 0; VAR_3--)
        VAR_2[VAR_3] -= VAR_2[VAR_3 - 1] * VAR_1->tilt_coef;


    for (VAR_3 = VAR_1->pitch_lag_int; VAR_3 < VAR_0; VAR_3++)
        VAR_2[VAR_3] += VAR_2[VAR_3 - VAR_1->pitch_lag_int] * 0.85;
}
