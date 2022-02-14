
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
typedef int pgd_t ;


 int FUNC_0 (int *) ;
 struct page* FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(pgd_t *VAR_0)
{
 struct page *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->lru);
}
