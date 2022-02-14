
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_tag_t ;
typedef int vm_prot_t ;
typedef int vm_object_offset_t ;
typedef TYPE_1__* vm_map_t ;
typedef int vm_map_size_t ;
typedef int vm_map_offset_t ;
typedef int vm_map_kernel_flags_t ;
typedef int vm_inherit_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_port_t ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ pmap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ,int ,int,int ,int ,int ,int ,int ,int ,int ,int ,int *,int ) ;

kern_return_t
FUNC_2(
 vm_map_t VAR_2,
 vm_map_offset_t *VAR_3,
 vm_map_size_t VAR_4,
 vm_map_offset_t VAR_5,
 int VAR_6,
 vm_map_kernel_flags_t VAR_7,
 vm_tag_t VAR_8,
 ipc_port_t VAR_9,
 vm_object_offset_t VAR_10,
 boolean_t VAR_11,
 vm_prot_t VAR_12,
 vm_prot_t VAR_13,
 vm_inherit_t VAR_14)
{
 kern_return_t VAR_15;

 VAR_15 = FUNC_1(VAR_2,
          VAR_3,
          VAR_4,
          VAR_5,
          VAR_6,
          VAR_7,
          VAR_8,
          VAR_9,
          VAR_10,
          VAR_11,
          VAR_12,
          VAR_13,
          VAR_14,
          ((void*)0),
          0);







 return VAR_15;
}
