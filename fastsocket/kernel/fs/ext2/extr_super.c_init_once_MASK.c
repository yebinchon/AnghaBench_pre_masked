
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_inode_info {int vfs_inode; int truncate_mutex; int xattr_sem; int i_meta_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct ext2_inode_info *VAR_1 = (struct ext2_inode_info *) VAR_0;

 FUNC_3(&VAR_1->i_meta_lock);



 FUNC_2(&VAR_1->truncate_mutex);
 FUNC_1(&VAR_1->vfs_inode);
}
