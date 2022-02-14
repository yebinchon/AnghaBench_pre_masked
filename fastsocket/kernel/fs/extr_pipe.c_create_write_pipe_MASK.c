
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qstr {char* name; } ;
struct path {TYPE_3__* dentry; int mnt; } ;
struct inode {int i_mapping; } ;
struct file {int f_flags; scalar_t__ f_version; int f_mapping; } ;
struct TYPE_6__ {int d_flags; int * d_op; } ;
struct TYPE_5__ {int mnt_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct file* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct file* FUNC_1 (struct path*,int ,int *) ;
 TYPE_3__* FUNC_2 (int ,struct qstr*) ;
 int FUNC_3 (TYPE_3__*,struct inode*) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 () ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct path*) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

struct file *FUNC_9(int VAR_9)
{
 int VAR_10;
 struct inode *VAR_11;
 struct file *VAR_12;
 struct path VAR_13;
 struct qstr VAR_14 = { .name = "" };

 VAR_10 = -VAR_1;
 VAR_11 = FUNC_5();
 if (!VAR_11)
  goto err;

 VAR_10 = -VAR_2;
 VAR_13.dentry = FUNC_2(VAR_6->mnt_sb, &VAR_14);
 if (!VAR_13.dentry)
  goto err_inode;
 VAR_13.mnt = FUNC_7(VAR_6);

 VAR_13.dentry->d_op = &VAR_7;





 VAR_13.dentry->d_flags &= ~VAR_0;
 FUNC_3(VAR_13.dentry, VAR_11);

 VAR_10 = -VAR_1;
 VAR_12 = FUNC_1(&VAR_13, VAR_3, &VAR_8);
 if (!VAR_12)
  goto err_dentry;
 VAR_12->f_mapping = VAR_11->i_mapping;

 VAR_12->f_flags = VAR_5 | (VAR_9 & VAR_4);
 VAR_12->f_version = 0;

 return VAR_12;

 err_dentry:
 FUNC_4(VAR_11);
 FUNC_8(&VAR_13);
 return FUNC_0(VAR_10);

 err_inode:
 FUNC_4(VAR_11);
 FUNC_6(VAR_11);
 err:
 return FUNC_0(VAR_10);
}
