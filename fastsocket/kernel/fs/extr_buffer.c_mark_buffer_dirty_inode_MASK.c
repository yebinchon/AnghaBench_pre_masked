
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {struct address_space* i_mapping; } ;
struct buffer_head {struct address_space* b_assoc_map; int b_assoc_buffers; TYPE_1__* b_page; } ;
struct address_space {int private_lock; int private_list; struct address_space* assoc_mapping; } ;
struct TYPE_2__ {struct address_space* mapping; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct buffer_head *VAR_0, struct inode *VAR_1)
{
 struct address_space *VAR_2 = VAR_1->i_mapping;
 struct address_space *VAR_3 = VAR_0->b_page->mapping;

 FUNC_2(VAR_0);
 if (!VAR_2->assoc_mapping) {
  VAR_2->assoc_mapping = VAR_3;
 } else {
  FUNC_0(VAR_2->assoc_mapping != VAR_3);
 }
 if (!VAR_0->b_assoc_map) {
  FUNC_3(&VAR_3->private_lock);
  FUNC_1(&VAR_0->b_assoc_buffers,
    &VAR_2->private_list);
  VAR_0->b_assoc_map = VAR_2;
  FUNC_4(&VAR_3->private_lock);
 }
}
