
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_map_t ;
typedef int vm_map_offset_t ;
typedef int pmap_t ;
typedef int kern_return_t ;
typedef int boolean_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

kern_return_t
FUNC_1(
 vm_map_t VAR_0,
 vm_map_offset_t VAR_1,
 vm_map_offset_t VAR_2,
 boolean_t VAR_3)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2,
        VAR_3, (pmap_t)((void*)0), 0);
}
