
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pmap_paddr_t ;
typedef int addr64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;

addr64_t
FUNC_1(
 vm_offset_t VAR_3)
{
 pmap_paddr_t VAR_4;

 VAR_4 = ((pmap_paddr_t)FUNC_0(VAR_2, VAR_3)) << VAR_1;
 if (VAR_4)
  VAR_4 |= (VAR_3 & VAR_0);

 return ((addr64_t)VAR_4);
}
