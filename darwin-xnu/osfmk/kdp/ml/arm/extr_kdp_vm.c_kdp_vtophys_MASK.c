
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef scalar_t__ ppnum_t ;
typedef TYPE_1__* pmap_t ;
typedef int pmap_paddr_t ;
struct TYPE_5__ {int min; int max; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char*,unsigned int,unsigned long,unsigned int,unsigned int) ;

pmap_paddr_t
FUNC_2(
     pmap_t VAR_3,
     vm_offset_t VAR_4)
{
 pmap_paddr_t VAR_5;
 ppnum_t VAR_6;


 if(!VAR_3 || ((VAR_3 != VAR_2) && ((VAR_4 < VAR_3->min) || (VAR_4 >= VAR_3->max))))
 {






  return 0;
 }

 VAR_6 = FUNC_0(VAR_3, VAR_4);
 if (!VAR_6)
  return 0;

 VAR_5 = ((pmap_paddr_t) VAR_6 << VAR_1) | (VAR_4 & VAR_0);
 return (VAR_5);
}
