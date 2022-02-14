
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_4__ {scalar_t__ fiqstack_top; scalar_t__ intstack_top; int cpu_processor; } ;
typedef TYPE_1__ cpu_data_t ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (void*,scalar_t__) ;
 int FUNC_2 (int ,int ,int) ;

void
FUNC_3(cpu_data_t *VAR_4)
{
        if (VAR_4 == &VAR_0)
                return;

 FUNC_0( VAR_4->cpu_processor);
 FUNC_1( (void *)(VAR_4->intstack_top - VAR_2), VAR_2);
 FUNC_1( (void *)(VAR_4->fiqstack_top - VAR_1), VAR_1);
 FUNC_2(VAR_3, (vm_offset_t)VAR_4, sizeof(cpu_data_t));
}
