
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nfs_renamedata {int cred; TYPE_1__* new_dir; TYPE_1__* old_dir; TYPE_2__* new_dentry; TYPE_2__* old_dentry; } ;
struct TYPE_4__ {scalar_t__ d_inode; } ;
struct TYPE_3__ {struct super_block* i_sb; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct nfs_renamedata*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
 struct nfs_renamedata *VAR_1 = VAR_0;
 struct super_block *VAR_2 = VAR_1->old_dir->i_sb;

 if (VAR_1->old_dentry->d_inode)
  FUNC_3(VAR_1->old_dentry->d_inode);

 FUNC_0(VAR_1->old_dentry);
 FUNC_0(VAR_1->new_dentry);
 FUNC_1(VAR_1->old_dir);
 FUNC_1(VAR_1->new_dir);
 FUNC_4(VAR_2);
 FUNC_5(VAR_1->cred);
 FUNC_2(VAR_1);
}
