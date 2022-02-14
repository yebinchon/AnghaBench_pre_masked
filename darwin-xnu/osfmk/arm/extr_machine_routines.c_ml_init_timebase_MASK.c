
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* vm_offset_t ;
typedef TYPE_1__* tbd_ops_t ;
typedef int cpu_data_t ;
struct TYPE_4__ {void* tbd_fiq_handler; } ;


 int VAR_0 ;
 void* VAR_1 ;
 TYPE_1__ VAR_2 ;
 void* VAR_3 ;

void FUNC_0(
 void *VAR_4,
 tbd_ops_t VAR_5,
 vm_offset_t VAR_6,
 vm_offset_t VAR_7)
{
 cpu_data_t *VAR_8;

 VAR_8 = (cpu_data_t *)VAR_4;

 if ((VAR_8 == &VAR_0)
     && (VAR_2.tbd_fiq_handler == (void *)((void*)0))) {
  VAR_2 = *VAR_5;
  VAR_1 = VAR_6;
  VAR_3 = VAR_7;
 }
}
