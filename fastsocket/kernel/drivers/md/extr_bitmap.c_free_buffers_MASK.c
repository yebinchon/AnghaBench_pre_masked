
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct buffer_head*) ;
 struct buffer_head* FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static void FUNC_5(struct page *VAR_0)
{
 struct buffer_head *VAR_1;

 if (!FUNC_0(VAR_0))
  return;

 VAR_1 = FUNC_3(VAR_0);
 while (VAR_1) {
  struct buffer_head *VAR_2 = VAR_1->b_this_page;
  FUNC_2(VAR_1);
  VAR_1 = VAR_2;
 }
 FUNC_1(VAR_0);
 FUNC_4(VAR_0);
}
