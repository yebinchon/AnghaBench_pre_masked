
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jfs_inode_info {int active_ag; int vfs_inode; int ag_lock; int xattr_sem; int commit_mutex; int rdwrlock; int anon_inode_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct jfs_inode_info*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
 struct jfs_inode_info *VAR_1 = (struct jfs_inode_info *) VAR_0;

 FUNC_3(VAR_1, 0, sizeof(struct jfs_inode_info));
 FUNC_0(&VAR_1->anon_inode_list);
 FUNC_1(&VAR_1->rdwrlock);
 FUNC_4(&VAR_1->commit_mutex);
 FUNC_1(&VAR_1->xattr_sem);
 FUNC_5(&VAR_1->ag_lock);
 VAR_1->active_ag = -1;
 FUNC_2(&VAR_1->vfs_inode);
}
