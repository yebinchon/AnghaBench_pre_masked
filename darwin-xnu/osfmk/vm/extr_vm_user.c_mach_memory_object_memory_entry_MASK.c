
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int vm_prot_t ;
typedef int vm_object_offset_t ;
typedef int memory_object_t ;
typedef int kern_return_t ;
typedef int ipc_port_t ;
typedef int host_t ;
typedef int boolean_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int *) ;

kern_return_t
FUNC_1(
 host_t VAR_0,
 boolean_t VAR_1,
 vm_size_t VAR_2,
 vm_prot_t VAR_3,
  memory_object_t VAR_4,
 ipc_port_t *VAR_5)
{
 return FUNC_0( VAR_0, VAR_1,
  (vm_object_offset_t)VAR_2, VAR_3, VAR_4, VAR_5);
}
