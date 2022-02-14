
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct ecryptfs_inode_info {struct inode vfs_inode; int * lower_file; int lower_file_mutex; int crypt_stat; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct ecryptfs_inode_info* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct inode *FUNC_4(struct super_block *VAR_2)
{
 struct ecryptfs_inode_info *VAR_3;
 struct inode *VAR_4 = ((void*)0);

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (FUNC_3(!VAR_3))
  goto out;
 FUNC_0(&VAR_3->crypt_stat);
 FUNC_2(&VAR_3->lower_file_mutex);
 VAR_3->lower_file = ((void*)0);
 VAR_4 = &VAR_3->vfs_inode;
out:
 return VAR_4;
}
