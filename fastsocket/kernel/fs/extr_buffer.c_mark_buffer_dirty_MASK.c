
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {struct page* b_page; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct page*,struct address_space*,int ) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 struct address_space* FUNC_5 (struct page*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct buffer_head*) ;

void FUNC_8(struct buffer_head *VAR_0)
{
 FUNC_1(!FUNC_4(VAR_0));







 if (FUNC_3(VAR_0)) {
  FUNC_6();
  if (FUNC_3(VAR_0))
   return;
 }

 if (!FUNC_7(VAR_0)) {
  struct page *VAR_1 = VAR_0->b_page;
  if (!FUNC_0(VAR_1)) {
   struct address_space *VAR_2 = FUNC_5(VAR_1);
   if (VAR_2)
    FUNC_2(VAR_1, VAR_2, 0);
  }
 }
}
