
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_4__ {struct dentry* dentry; } ;
struct file {int f_mode; struct cifsFileInfo* private_data; int f_flags; TYPE_1__ f_path; } ;
struct dentry {struct inode* d_inode; } ;
struct cifsInodeInfo {int openFileList; } ;
struct cifsFileInfo {int count; int invalidHandle; int flist; int tlist; int oplock_break; int llist; int lock_mutex; int fh_mutex; int tlink; int f_flags; int dentry; int uid; int pid; int netfid; } ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_6__ {int tgid; } ;
struct TYPE_5__ {int openFileList; } ;


 struct cifsInodeInfo* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct tcon_link*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cifsInodeInfo*,int ) ;
 TYPE_3__* VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (struct dentry*) ;
 struct cifsFileInfo* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_2__* FUNC_13 (struct tcon_link*) ;
 int FUNC_14 (int *,int *) ;

struct cifsFileInfo *
FUNC_15(__u16 VAR_5, struct file *VAR_6,
    struct tcon_link *VAR_7, __u32 VAR_8)
{
 struct dentry *VAR_9 = VAR_6->f_path.dentry;
 struct inode *VAR_10 = VAR_9->d_inode;
 struct cifsInodeInfo *VAR_11 = FUNC_0(VAR_10);
 struct cifsFileInfo *VAR_12;

 VAR_12 = FUNC_7(sizeof(struct cifsFileInfo), VAR_1);
 if (VAR_12 == ((void*)0))
  return VAR_12;

 VAR_12->count = 1;
 VAR_12->netfid = VAR_5;
 VAR_12->pid = VAR_4->tgid;
 VAR_12->uid = FUNC_5();
 VAR_12->dentry = FUNC_6(VAR_9);
 VAR_12->f_flags = VAR_6->f_flags;
 VAR_12->invalidHandle = 0;
 VAR_12->tlink = FUNC_2(VAR_7);
 FUNC_10(&VAR_12->fh_mutex);
 FUNC_10(&VAR_12->lock_mutex);
 FUNC_1(&VAR_12->llist);
 FUNC_14(&VAR_12->oplock_break, &VAR_3);

 FUNC_3(VAR_10->i_sb);

 FUNC_11(&VAR_2);
 FUNC_8(&VAR_12->tlist, &(FUNC_13(VAR_7)->openFileList));

 if (VAR_6->f_mode & VAR_0)
  FUNC_8(&VAR_12->flist, &VAR_11->openFileList);
 else
  FUNC_9(&VAR_12->flist, &VAR_11->openFileList);
 FUNC_12(&VAR_2);

 FUNC_4(VAR_11, VAR_8);

 VAR_6->private_data = VAR_12;
 return VAR_12;
}
