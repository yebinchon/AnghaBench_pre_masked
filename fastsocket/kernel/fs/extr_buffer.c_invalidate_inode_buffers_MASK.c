
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int next; } ;
struct address_space {int private_lock; struct address_space* assoc_mapping; struct list_head private_list; } ;
struct inode {struct address_space i_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct list_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct inode *VAR_0)
{
 if (FUNC_2(VAR_0)) {
  struct address_space *VAR_1 = &VAR_0->i_data;
  struct list_head *VAR_2 = &VAR_1->private_list;
  struct address_space *VAR_3 = VAR_1->assoc_mapping;

  FUNC_4(&VAR_3->private_lock);
  while (!FUNC_3(VAR_2))
   FUNC_1(FUNC_0(VAR_2->next));
  FUNC_5(&VAR_3->private_lock);
 }
}
