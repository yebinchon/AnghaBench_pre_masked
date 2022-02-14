
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ index; } ;
typedef int pte_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long*,int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct page *VAR_4)
{
 pte_t *VAR_5;

 if (VAR_0)
  return;

 VAR_5 = (pte_t *) VAR_4[1].index;
 if (!VAR_5)
  return;
 FUNC_0((unsigned long *) VAR_5, VAR_2,
      VAR_1 * sizeof(pte_t));
 FUNC_1(&VAR_3, VAR_5);
 VAR_4[1].index = 0;
}
