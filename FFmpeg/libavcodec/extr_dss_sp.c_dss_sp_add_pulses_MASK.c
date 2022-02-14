
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct DssSpSubframe {size_t* pulse_pos; size_t gain; size_t* pulse_val; } ;
typedef int int32_t ;


 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0(int32_t *VAR_2,
                              const struct DssSpSubframe *VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < 7; VAR_4++)
        VAR_2[VAR_3->pulse_pos[VAR_4]] += (VAR_0[VAR_3->gain] *
                                         VAR_1[VAR_3->pulse_val[VAR_4]] +
                                         0x4000) >> 15;
}
