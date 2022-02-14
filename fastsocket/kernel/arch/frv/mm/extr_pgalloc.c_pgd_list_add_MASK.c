
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {unsigned long index; } ;
typedef int pgd_t ;


 struct page* VAR_0 ;
 int FUNC_0 (struct page*,unsigned long) ;
 struct page* FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(pgd_t *VAR_1)
{
 struct page *VAR_2 = FUNC_1(VAR_1);
 VAR_2->index = (unsigned long) VAR_0;
 if (VAR_0)
  FUNC_0(VAR_0, (unsigned long) &VAR_2->index);
 VAR_0 = VAR_2;
 FUNC_0(VAR_2, (unsigned long)&VAR_0);
}
