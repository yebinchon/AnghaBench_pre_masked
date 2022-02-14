
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_tag_t ;
typedef int vm_prot_t ;
typedef int vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef scalar_t__ ppnum_t ;
typedef int pmap_t ;
typedef scalar_t__ kern_return_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,scalar_t__*) ;

kern_return_t
FUNC_2(
 vm_map_t VAR_1,
 vm_map_offset_t VAR_2,
 vm_prot_t VAR_3,
 vm_tag_t VAR_4,
 boolean_t VAR_5,
 ppnum_t *VAR_6)
{
 kern_return_t VAR_7;

 VAR_7 = FUNC_1(VAR_1,
      VAR_2,
      VAR_2+FUNC_0(VAR_1),
      VAR_3,
      VAR_4,
      VAR_5,
      (pmap_t)((void*)0),
      0,
      VAR_6);
 if (VAR_7 != VAR_0 &&
     VAR_6 != ((void*)0)) {
  *VAR_6 = 0;
 }
 return VAR_7;
}
