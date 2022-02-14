
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pte_t ;
struct TYPE_3__ {int * pmdv; } ;
typedef TYPE_1__ pmd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(pmd_t *VAR_3, pte_t *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0((unsigned long) VAR_4) >> 4;
 for (VAR_6 = 0; VAR_6 < VAR_0/VAR_2; VAR_6++) {
  FUNC_1((pte_t *)&VAR_3->pmdv[VAR_6], VAR_1 | VAR_5);
  VAR_5 += (VAR_2*sizeof(pte_t) >> 4);
 }
}
