
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int test_size; int * freq_list; } ;
typedef TYPE_1__ spitest_param_set_t ;


 int * VAR_0 ;

void FUNC_0(void* VAR_1)
{
    spitest_param_set_t *VAR_2=(spitest_param_set_t*)VAR_1;
    VAR_2->test_size = 8;
    if (VAR_2->freq_list==((void*)0)) VAR_2->freq_list = VAR_0;
}
