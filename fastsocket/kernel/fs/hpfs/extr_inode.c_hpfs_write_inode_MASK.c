
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; int i_state; int i_sb; int i_nlink; int i_count; } ;
struct hpfs_inode_info {int i_parent_mutex; int i_mutex; scalar_t__ i_dirty; int i_parent_dir; scalar_t__* i_rddir_off; } ;
struct TYPE_2__ {scalar_t__ sb_root; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct hpfs_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (scalar_t__*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct inode*) ;

void FUNC_14(struct inode *VAR_1)
{
 struct hpfs_inode_info *VAR_2 = FUNC_1(VAR_1);
 struct inode *VAR_3;
 if (VAR_1->i_ino == FUNC_4(VAR_1->i_sb)->sb_root) return;
 if (VAR_2->i_rddir_off && !FUNC_0(&VAR_1->i_count)) {
  if (*VAR_2->i_rddir_off) FUNC_12("HPFS: write_inode: some position still there\n");
  FUNC_8(VAR_2->i_rddir_off);
  VAR_2->i_rddir_off = ((void*)0);
 }
 FUNC_10(&VAR_2->i_parent_mutex);
 if (!VAR_1->i_nlink) {
  FUNC_11(&VAR_2->i_parent_mutex);
  return;
 }
 VAR_3 = FUNC_6(VAR_1->i_sb, VAR_2->i_parent_dir);
 if (VAR_3) {
  VAR_2->i_dirty = 0;
  if (VAR_3->i_state & VAR_0) {
   FUNC_2(VAR_3);
   FUNC_3(VAR_3);
   FUNC_13(VAR_3);
  }
  FUNC_10(&VAR_2->i_mutex);
  FUNC_5(VAR_1);
  FUNC_11(&VAR_2->i_mutex);
  FUNC_7(VAR_3);
 } else {
  FUNC_9(VAR_1);
 }
 FUNC_11(&VAR_2->i_parent_mutex);
}
