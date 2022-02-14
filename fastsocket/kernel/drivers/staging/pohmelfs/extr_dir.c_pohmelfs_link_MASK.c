
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qstr {int len; int name; int hash; } ;
struct pohmelfs_inode {int ino; } ;
struct inode {int i_mode; TYPE_2__* i_sb; } ;
struct dentry {struct qstr d_name; struct inode* d_inode; } ;
struct TYPE_4__ {TYPE_1__* s_op; } ;
struct TYPE_3__ {int (* write_inode ) (struct inode*,int ) ;} ;


 struct pohmelfs_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct inode*,struct dentry*,int ,int ) ;
 int FUNC_3 (struct pohmelfs_inode*,struct qstr*,struct pohmelfs_inode*,int *) ;
 int FUNC_4 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_0, struct inode *VAR_1,
 struct dentry *VAR_2)
{
 struct inode *VAR_3 = VAR_0->d_inode;
 struct pohmelfs_inode *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;
 struct qstr VAR_6 = VAR_2->d_name;

 VAR_6.hash = FUNC_1(VAR_2->d_name.name, VAR_2->d_name.len, 0);

 VAR_5 = VAR_3->i_sb->s_op->write_inode(VAR_3, 0);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(FUNC_0(VAR_1), &VAR_6, VAR_4, ((void*)0));
 if (VAR_5)
  return VAR_5;

 return FUNC_2(VAR_1, VAR_2, VAR_4->ino, VAR_3->i_mode);
}
