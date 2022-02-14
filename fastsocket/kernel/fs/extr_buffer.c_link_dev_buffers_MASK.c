
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;


 int FUNC_0 (struct page*,struct buffer_head*) ;

__attribute__((used)) static inline void
FUNC_1(struct page *VAR_0, struct buffer_head *VAR_1)
{
 struct buffer_head *VAR_2, *VAR_3;

 VAR_2 = VAR_1;
 do {
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->b_this_page;
 } while (VAR_2);
 VAR_3->b_this_page = VAR_1;
 FUNC_0(VAR_0, VAR_1);
}
