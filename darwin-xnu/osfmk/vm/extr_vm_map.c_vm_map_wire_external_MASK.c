
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int vm_map_t ;
typedef int vm_map_offset_t ;
typedef int pmap_t ;
typedef int kern_return_t ;
typedef int boolean_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;

kern_return_t
FUNC_2(
 vm_map_t VAR_0,
 vm_map_offset_t VAR_1,
 vm_map_offset_t VAR_2,
 vm_prot_t VAR_3,
 boolean_t VAR_4)
{
 kern_return_t VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, FUNC_1(),
      VAR_4, (pmap_t)((void*)0), 0, ((void*)0));
 return VAR_5;
}
