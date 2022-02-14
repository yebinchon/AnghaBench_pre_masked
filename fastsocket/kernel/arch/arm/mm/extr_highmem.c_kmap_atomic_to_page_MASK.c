
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 int * FUNC_0 (unsigned long) ;
 struct page* FUNC_1 (int ) ;
 struct page* FUNC_2 (void const*) ;

struct page *FUNC_3(const void *VAR_1)
{
 unsigned long VAR_2 = (unsigned long)VAR_1;
 pte_t *VAR_3;

 if (VAR_2 < VAR_0)
  return FUNC_2(VAR_1);

 VAR_3 = FUNC_0(VAR_2);
 return FUNC_1(*VAR_3);
}
