
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int *,unsigned long,int *,int ) ;

__attribute__((used)) static int FUNC_2(pte_t *VAR_2, struct page *VAR_3,
        unsigned long VAR_4, void *VAR_5)
{
 unsigned long **VAR_6 = (unsigned long **)VAR_5;

 FUNC_1(&VAR_1, VAR_4, VAR_2, FUNC_0((*VAR_6)[0], VAR_0));
 (*VAR_6)++;
 return 0;
}
