
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_map_t ;
typedef int vm_map_offset_t ;
typedef int pmap_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;

vm_map_t
FUNC_1(
 pmap_t VAR_1,
 vm_map_offset_t VAR_2,
 vm_map_offset_t VAR_3,
 boolean_t VAR_4)
{
 int VAR_5;

 VAR_5 = 0;
 if (VAR_4) {
  VAR_5 |= VAR_0;
 }
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5);
}
