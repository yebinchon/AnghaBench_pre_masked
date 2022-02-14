
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
struct address_space {int private_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (struct page*,struct buffer_head**) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct page *VAR_1)
{
 struct address_space * const VAR_2 = VAR_1->mapping;
 struct buffer_head *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 FUNC_0(!FUNC_1(VAR_1));
 if (FUNC_2(VAR_1))
  return 0;

 if (VAR_2 == ((void*)0)) {
  VAR_4 = FUNC_4(VAR_1, &VAR_3);
  goto out;
 }

 FUNC_6(&VAR_2->private_lock);
 VAR_4 = FUNC_4(VAR_1, &VAR_3);
 if (VAR_4)
  FUNC_3(VAR_1, VAR_0);
 FUNC_7(&VAR_2->private_lock);
out:
 if (VAR_3) {
  struct buffer_head *VAR_5 = VAR_3;

  do {
   struct buffer_head *VAR_6 = VAR_5->b_this_page;
   FUNC_5(VAR_5);
   VAR_5 = VAR_6;
  } while (VAR_5 != VAR_3);
 }
 return VAR_4;
}
