
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int vm_map_t ;
typedef scalar_t__ memory_object_size_t ;
typedef scalar_t__ memory_object_offset_t ;
typedef int kern_return_t ;
typedef int ipc_port_t ;


 int FUNC_0 (int ,scalar_t__*,scalar_t__,int ,int *,int ) ;

kern_return_t
FUNC_1(
 vm_map_t VAR_0,
 memory_object_size_t *VAR_1,
 memory_object_offset_t VAR_2,
 vm_prot_t VAR_3,
 ipc_port_t *VAR_4,
 ipc_port_t VAR_5)
{
 memory_object_size_t VAR_6;
 kern_return_t VAR_7;

 VAR_6 = (memory_object_size_t)*VAR_1;
 VAR_7 = FUNC_0(VAR_0, &VAR_6,
   (memory_object_offset_t)VAR_2, VAR_3, VAR_4,
   VAR_5);
 *VAR_1 = VAR_6;
 return VAR_7;
}
