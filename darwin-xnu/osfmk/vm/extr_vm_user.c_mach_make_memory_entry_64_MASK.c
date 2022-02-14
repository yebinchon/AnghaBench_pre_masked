
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int vm_map_t ;
typedef int memory_object_size_t ;
typedef int memory_object_offset_t ;
typedef int kern_return_t ;
typedef int ipc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,int,int *,int ) ;

kern_return_t
FUNC_1(
 vm_map_t VAR_3,
 memory_object_size_t *VAR_4,
 memory_object_offset_t VAR_5,
 vm_prot_t VAR_6,
 ipc_port_t *VAR_7,
 ipc_port_t VAR_8)
{
 if ((VAR_6 & VAR_1) & ~VAR_2) {



  return VAR_0;
 }

 return FUNC_0(VAR_3,
            VAR_4,
            VAR_5,
            VAR_6,
            VAR_7,
            VAR_8);
}
