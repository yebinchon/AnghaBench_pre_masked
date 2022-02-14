
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ ppnum_t ;
typedef int pmap_t ;
typedef int pmap_paddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;

pmap_paddr_t
FUNC_1(
 pmap_t VAR_2,
 vm_offset_t VAR_3)
{
 pmap_paddr_t VAR_4;
 ppnum_t VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if(!VAR_5) return 0;

 VAR_4 = ((pmap_paddr_t)VAR_5 << VAR_1) | (VAR_3 & VAR_0);

 return(VAR_4);
}
