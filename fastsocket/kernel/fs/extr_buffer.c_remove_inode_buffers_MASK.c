
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int next; } ;
struct address_space {int private_lock; struct address_space* assoc_mapping; struct list_head private_list; } ;
struct inode {struct address_space i_data; } ;
struct buffer_head {int dummy; } ;


 struct buffer_head* FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct list_head*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct inode *VAR_0)
{
 int VAR_1 = 1;

 if (FUNC_3(VAR_0)) {
  struct address_space *VAR_2 = &VAR_0->i_data;
  struct list_head *VAR_3 = &VAR_2->private_list;
  struct address_space *VAR_4 = VAR_2->assoc_mapping;

  FUNC_5(&VAR_4->private_lock);
  while (!FUNC_4(VAR_3)) {
   struct buffer_head *VAR_5 = FUNC_0(VAR_3->next);
   if (FUNC_2(VAR_5)) {
    VAR_1 = 0;
    break;
   }
   FUNC_1(VAR_5);
  }
  FUNC_6(&VAR_4->private_lock);
 }
 return VAR_1;
}
