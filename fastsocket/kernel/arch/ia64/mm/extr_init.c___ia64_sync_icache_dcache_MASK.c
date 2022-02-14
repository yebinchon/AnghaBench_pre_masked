
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct page*) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void
FUNC_6 (pte_t VAR_2)
{
 unsigned long VAR_3;
 struct page *VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 VAR_3 = (unsigned long) FUNC_2(VAR_4);

 if (FUNC_5(VAR_1, &VAR_4->flags))
  return;

 FUNC_1(VAR_3, VAR_3 + (VAR_0 << FUNC_0(VAR_4)));
 FUNC_4(VAR_1, &VAR_4->flags);
}
