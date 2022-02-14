
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ecryptfs_inode_info {int crypt_stat; TYPE_1__* lower_file; } ;
struct dentry {scalar_t__ d_inode; } ;
struct TYPE_2__ {struct dentry* f_dentry; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 struct ecryptfs_inode_info* FUNC_2 (struct inode*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,struct ecryptfs_inode_info*) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_1)
{
 struct ecryptfs_inode_info *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2->lower_file) {
  struct dentry *VAR_3 =
   VAR_2->lower_file->f_dentry;

  FUNC_0(!VAR_3);
  if (VAR_3->d_inode) {
   FUNC_3(VAR_2->lower_file);
   VAR_2->lower_file = ((void*)0);
  }
 }
 FUNC_1(&VAR_2->crypt_stat);
 FUNC_4(VAR_0, VAR_2);
}
