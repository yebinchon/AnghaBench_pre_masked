
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
typedef int pte_t ;
struct TYPE_3__ {int * pmdv; } ;
typedef TYPE_1__ pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(pmd_t *VAR_4, struct page *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_5) << (VAR_0-4);
 for (VAR_7 = 0; VAR_7 < VAR_1/VAR_3; VAR_7++) {
  FUNC_1((pte_t *)&VAR_4->pmdv[VAR_7], VAR_2 | VAR_6);
  VAR_6 += (VAR_3*sizeof(pte_t) >> 4);
 }
}
