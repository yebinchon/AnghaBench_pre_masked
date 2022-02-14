
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {void* shadow; } ;
typedef int pte_t ;


 int VAR_0 ;
 int * FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 struct page* FUNC_2 (unsigned long) ;

void *FUNC_3(unsigned long VAR_1)
{
 pte_t *VAR_2;
 struct page *VAR_3;

 if (!FUNC_1(VAR_1))
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3->shadow)
  return ((void*)0);
 return VAR_3->shadow + (VAR_1 & (VAR_0 - 1));
}
