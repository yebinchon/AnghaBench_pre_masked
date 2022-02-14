
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_2 () ;

kern_return_t
FUNC_3(
 vm_map_t VAR_1,
 vm_map_offset_t VAR_2,
 vm_prot_t VAR_3,
 boolean_t VAR_4,
 ppnum_t *VAR_5)
{
 kern_return_t VAR_6;

 VAR_6 = FUNC_1(VAR_1,
      VAR_2,
      VAR_2+FUNC_0(VAR_1),
      VAR_3,
      FUNC_2(),
      VAR_4,
      (pmap_t)((void*)0),
      0,
      VAR_5);
 if (VAR_6 != VAR_0 &&
     VAR_5 != ((void*)0)) {
  *VAR_5 = 0;
 }
 return VAR_6;
}
