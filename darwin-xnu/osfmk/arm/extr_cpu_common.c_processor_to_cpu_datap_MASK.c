
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* processor_t ;
struct TYPE_7__ {TYPE_1__* cpu_processor; } ;
typedef TYPE_2__ cpu_data_t ;
struct TYPE_8__ {int * cpu_data_vaddr; } ;
struct TYPE_6__ {size_t cpu_id; } ;


 TYPE_5__* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;

cpu_data_t *
FUNC_1(processor_t VAR_2)
{
 cpu_data_t *VAR_3;

 FUNC_0(VAR_2->cpu_id < VAR_1);
 FUNC_0(VAR_0[VAR_2->cpu_id].cpu_data_vaddr != ((void*)0));

 VAR_3 = (cpu_data_t*)VAR_0[VAR_2->cpu_id].cpu_data_vaddr;
 FUNC_0(VAR_3->cpu_processor == VAR_2);

 return VAR_3;
}
