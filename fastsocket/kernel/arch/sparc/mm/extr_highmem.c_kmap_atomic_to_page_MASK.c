
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (unsigned long) ;
 int * VAR_6 ;
 struct page* FUNC_2 (int) ;
 struct page* FUNC_3 (int ) ;
 unsigned long FUNC_4 (unsigned long) ;
 struct page* FUNC_5 (void*) ;

struct page *FUNC_6(void *VAR_7)
{
 unsigned long VAR_8, VAR_9 = (unsigned long)VAR_7;
 pte_t *VAR_10;

 if (VAR_9 < VAR_5)
  return FUNC_5(VAR_7);
 if (VAR_9 < VAR_4)
  return FUNC_2(FUNC_1(VAR_9) >> VAR_3);
 FUNC_0(VAR_9 < VAR_0);
 FUNC_0(VAR_9 > VAR_1);

 VAR_8 = FUNC_4(VAR_9);
 VAR_10 = VAR_6 - (VAR_8 - VAR_2);
 return FUNC_3(*VAR_10);
}
