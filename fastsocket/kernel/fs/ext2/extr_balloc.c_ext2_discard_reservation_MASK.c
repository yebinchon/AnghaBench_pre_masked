
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext2_reserve_window_node {int rsv_window; } ;
struct ext2_inode_info {struct ext2_block_alloc_info* i_block_alloc_info; } ;
struct ext2_block_alloc_info {struct ext2_reserve_window_node rsv_window_node; } ;
typedef int spinlock_t ;
struct TYPE_2__ {int s_rsv_window_lock; } ;


 struct ext2_inode_info* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct ext2_reserve_window_node*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct inode *VAR_0)
{
 struct ext2_inode_info *VAR_1 = FUNC_0(VAR_0);
 struct ext2_block_alloc_info *VAR_2 = VAR_1->i_block_alloc_info;
 struct ext2_reserve_window_node *VAR_3;
 spinlock_t *VAR_4 = &FUNC_1(VAR_0->i_sb)->s_rsv_window_lock;

 if (!VAR_2)
  return;

 VAR_3 = &VAR_2->rsv_window_node;
 if (!FUNC_2(&VAR_3->rsv_window)) {
  FUNC_4(VAR_4);
  if (!FUNC_2(&VAR_3->rsv_window))
   FUNC_3(VAR_0->i_sb, VAR_3);
  FUNC_5(VAR_4);
 }
}
