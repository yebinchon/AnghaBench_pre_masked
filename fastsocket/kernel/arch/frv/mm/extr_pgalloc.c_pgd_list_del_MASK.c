
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ index; } ;
typedef int pgd_t ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*,unsigned long) ;
 struct page* FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(pgd_t *VAR_0)
{
 struct page *VAR_1, **VAR_2, *VAR_3 = FUNC_2(VAR_0);
 VAR_1 = (struct page *) VAR_3->index;
 VAR_2 = (struct page **) FUNC_0(VAR_3);
 *VAR_2 = VAR_1;
 if (VAR_1)
  FUNC_1(VAR_1, (unsigned long) VAR_2);
}
