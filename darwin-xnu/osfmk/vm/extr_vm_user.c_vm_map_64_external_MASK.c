
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_tag_t ;
typedef int vm_size_t ;
typedef int vm_prot_t ;
typedef int vm_offset_t ;
typedef int vm_object_offset_t ;
typedef int vm_map_t ;
typedef int vm_inherit_t ;
typedef int kern_return_t ;
typedef int ipc_port_t ;
typedef int boolean_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ,int ,int,int ,int ,int ,int ,int ,int ,int ,int ) ;

kern_return_t
FUNC_2(
 vm_map_t VAR_1,
 vm_offset_t *VAR_2,
 vm_size_t VAR_3,
 vm_offset_t VAR_4,
 int VAR_5,
 ipc_port_t VAR_6,
 vm_object_offset_t VAR_7,
 boolean_t VAR_8,
 vm_prot_t VAR_9,
 vm_prot_t VAR_10,
 vm_inherit_t VAR_11)
{
 vm_tag_t VAR_12;

 FUNC_0(VAR_5, VAR_12);
 return (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_0,
     VAR_12, VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_10,
     VAR_11));
}
