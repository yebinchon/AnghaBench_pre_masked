
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct inode {int i_ino; int i_fop; int i_mode; } ;
struct getdents_callback {char* name; int sequence; scalar_t__ found; int ino; } ;
struct file {TYPE_1__* f_op; } ;
struct dentry {struct inode* d_inode; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {int readdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_3 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int ) ;
 struct cred* FUNC_3 () ;
 struct file* FUNC_4 (int ,int ,int ,struct cred const*) ;
 int FUNC_5 (struct dentry*) ;
 int VAR_4 ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (struct vfsmount*) ;
 int FUNC_8 (struct file*,int ,struct getdents_callback*) ;

__attribute__((used)) static int FUNC_9(struct vfsmount *VAR_5, struct dentry *VAR_6,
  char *VAR_7, struct dentry *VAR_8)
{
 const struct cred *VAR_9 = FUNC_3();
 struct inode *VAR_10 = VAR_6->d_inode;
 int VAR_11;
 struct file *VAR_12;
 struct getdents_callback VAR_13;

 VAR_11 = -VAR_2;
 if (!VAR_10 || !FUNC_2(VAR_10->i_mode))
  goto out;
 VAR_11 = -VAR_0;
 if (!VAR_10->i_fop)
  goto out;



 VAR_12 = FUNC_4(FUNC_5(VAR_6), FUNC_7(VAR_5), VAR_3, VAR_9);
 VAR_11 = FUNC_1(VAR_12);
 if (FUNC_0(VAR_12))
  goto out;

 VAR_11 = -VAR_0;
 if (!VAR_12->f_op->readdir)
  goto out_close;

 VAR_13.name = VAR_7;
 VAR_13.ino = VAR_8->d_inode->i_ino;
 VAR_13.found = 0;
 VAR_13.sequence = 0;
 while (1) {
  int VAR_14 = VAR_13.sequence;

  VAR_11 = FUNC_8(VAR_12, VAR_4, &VAR_13);
  if (VAR_13.found) {
   VAR_11 = 0;
   break;
  }

  if (VAR_11 < 0)
   break;

  VAR_11 = -VAR_1;
  if (VAR_14 == VAR_13.sequence)
   break;
 }

out_close:
 FUNC_6(VAR_12);
out:
 return VAR_11;
}
