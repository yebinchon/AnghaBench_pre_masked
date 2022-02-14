
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct hppfs_private {int proc_file; } ;
struct file {struct hppfs_private* private_data; int f_mode; struct cred* f_cred; } ;
struct dentry {int dummy; } ;
struct cred {int dummy; } ;
struct TYPE_4__ {struct dentry* proc_dentry; } ;
struct TYPE_3__ {struct vfsmount* s_fs_info; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,struct cred const*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int ) ;
 struct hppfs_private* FUNC_6 () ;
 int FUNC_7 (struct hppfs_private*) ;
 int FUNC_8 (struct vfsmount*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_1, struct file *VAR_2)
{
 const struct cred *VAR_3 = VAR_2->f_cred;
 struct hppfs_private *VAR_4;
 struct vfsmount *VAR_5;
 struct dentry *VAR_6;
 int VAR_7;

 VAR_7 = -VAR_0;
 VAR_4 = FUNC_6();
 if (VAR_4 == ((void*)0))
  goto out;

 VAR_6 = FUNC_0(VAR_1)->proc_dentry;
 VAR_5 = VAR_1->i_sb->s_fs_info;
 VAR_4->proc_file = FUNC_3(FUNC_4(VAR_6), FUNC_8(VAR_5),
          FUNC_5(VAR_2->f_mode), VAR_3);
 VAR_7 = FUNC_2(VAR_4->proc_file);
 if (FUNC_1(VAR_4->proc_file))
  goto out_free;

 VAR_2->private_data = VAR_4;
 return 0;

 out_free:
 FUNC_7(VAR_4);
 out:
 return VAR_7;
}
