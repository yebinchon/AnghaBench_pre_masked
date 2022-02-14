
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int index; struct inode* driver_data; struct tty_driver* driver; } ;
struct tty_driver {scalar_t__ type; scalar_t__ subtype; scalar_t__ minor_start; int major; } ;
struct super_block {struct dentry* s_root; } ;
struct pts_mount_opts {int mode; int gid; scalar_t__ setgid; int uid; scalar_t__ setuid; } ;
struct pts_fs_info {struct pts_mount_opts mount_opts; } ;
struct inode {int i_ino; struct tty_struct* i_private; int i_ctime; int i_atime; int i_mtime; int i_gid; int i_uid; } ;
struct dentry {TYPE_1__* d_inode; } ;
typedef int dev_t ;
struct TYPE_2__ {int i_mutex; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct pts_fs_info* FUNC_1 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_7 (struct dentry*,char*) ;
 int FUNC_8 (TYPE_1__*,struct dentry*) ;
 int FUNC_9 (struct inode*,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct inode* FUNC_12 (struct super_block*) ;
 struct super_block* FUNC_13 (struct inode*) ;
 int FUNC_14 (char*,char*,int) ;

int FUNC_15(struct inode *VAR_5, struct tty_struct *VAR_6)
{

 int VAR_7 = VAR_6->index;
 struct tty_driver *VAR_8 = VAR_6->driver;
 dev_t VAR_9 = FUNC_3(VAR_8->major, VAR_8->minor_start+VAR_7);
 struct dentry *VAR_10;
 struct super_block *VAR_11 = FUNC_13(VAR_5);
 struct inode *VAR_12 = FUNC_12(VAR_11);
 struct dentry *VAR_13 = VAR_11->s_root;
 struct pts_fs_info *VAR_14 = FUNC_1(VAR_11);
 struct pts_mount_opts *VAR_15 = &VAR_14->mount_opts;
 char VAR_16[12];


 FUNC_0(VAR_8->type != VAR_4);
 FUNC_0(VAR_8->subtype != VAR_2);

 if (!VAR_12)
  return -VAR_1;

 VAR_12->i_ino = VAR_7 + 3;
 VAR_12->i_uid = VAR_15->setuid ? VAR_15->uid : FUNC_5();
 VAR_12->i_gid = VAR_15->setgid ? VAR_15->gid : FUNC_4();
 VAR_12->i_mtime = VAR_12->i_atime = VAR_12->i_ctime = VAR_0;
 FUNC_9(VAR_12, VAR_3|VAR_15->mode, VAR_9);
 VAR_12->i_private = VAR_6;
 VAR_6->driver_data = VAR_12;

 FUNC_14(VAR_16, "%d", VAR_7);

 FUNC_10(&VAR_13->d_inode->i_mutex);

 VAR_10 = FUNC_7(VAR_13, VAR_16);
 if (!FUNC_2(VAR_10)) {
  FUNC_6(VAR_10, VAR_12);
  FUNC_8(VAR_13->d_inode, VAR_10);
 }

 FUNC_11(&VAR_13->d_inode->i_mutex);

 return 0;
}
