
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
struct address_space {int private_lock; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*,struct address_space*,int) ;
 struct buffer_head* FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 struct address_space* FUNC_4 (struct page*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct page *VAR_0)
{
 int VAR_1;
 struct address_space *VAR_2 = FUNC_4(VAR_0);

 if (FUNC_8(!VAR_2))
  return !FUNC_0(VAR_0);

 FUNC_6(&VAR_2->private_lock);
 if (FUNC_3(VAR_0)) {
  struct buffer_head *VAR_3 = FUNC_2(VAR_0);
  struct buffer_head *VAR_4 = VAR_3;

  do {
   FUNC_5(VAR_4);
   VAR_4 = VAR_4->b_this_page;
  } while (VAR_4 != VAR_3);
 }
 VAR_1 = !FUNC_0(VAR_0);
 FUNC_7(&VAR_2->private_lock);

 if (VAR_1)
  FUNC_1(VAR_0, VAR_2, 1);
 return VAR_1;
}
