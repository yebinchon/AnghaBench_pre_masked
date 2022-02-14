
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct address_space*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 struct address_space* FUNC_5 (struct page*) ;

void FUNC_6(struct page *VAR_0)
{
 struct address_space *VAR_1 = FUNC_5(VAR_0);
 unsigned long VAR_2;

 if (FUNC_0(VAR_0))
  return;
 if (VAR_1 && !FUNC_3(VAR_1)) {
  FUNC_1(VAR_0);
  return;
 }






 VAR_2 = (unsigned long) FUNC_4(VAR_0);
 FUNC_2(VAR_2);
}
