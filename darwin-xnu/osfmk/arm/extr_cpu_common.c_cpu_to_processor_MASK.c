
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * processor_t ;
struct TYPE_3__ {int * cpu_processor; } ;
typedef TYPE_1__ cpu_data_t ;


 TYPE_1__* FUNC_0 (int) ;

processor_t
FUNC_1(int VAR_0)
{
 cpu_data_t *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 != ((void*)0))
  return VAR_1->cpu_processor;
 else
  return ((void*)0);
}
