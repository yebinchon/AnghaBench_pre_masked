
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pmap_paddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int) ;

pmap_paddr_t
FUNC_2(
 vm_offset_t VAR_3)
{
 pmap_paddr_t VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4) return VAR_4;
 VAR_4 = ((pmap_paddr_t)FUNC_1(VAR_2, VAR_3)) << VAR_1;
 if (VAR_4)
  VAR_4 |= (VAR_3 & VAR_0);

 return ((pmap_paddr_t)VAR_4);
}
