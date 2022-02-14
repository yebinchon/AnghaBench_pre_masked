
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
struct TYPE_2__ {int private_lock; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct page *VAR_0, struct buffer_head *VAR_1)
{
 struct buffer_head *VAR_2;

 FUNC_0(!FUNC_2(VAR_0));

 FUNC_5(&VAR_0->mapping->private_lock);
 VAR_2 = VAR_1;
 do {
  if (FUNC_1(VAR_0))
   FUNC_4(VAR_2);
  if (!VAR_2->b_this_page)
   VAR_2->b_this_page = VAR_1;
  VAR_2 = VAR_2->b_this_page;
 } while (VAR_2 != VAR_1);
 FUNC_3(VAR_0, VAR_1);
 FUNC_6(&VAR_0->mapping->private_lock);
}
