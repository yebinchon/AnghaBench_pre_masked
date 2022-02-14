
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_4__ {int ixpxd; } ;
struct tblock {TYPE_2__ u; int ino; int xflag; } ;
struct jfs_inode_info {int commit_mutex; int dev; int ixpxd; } ;
struct inode {scalar_t__ i_nlink; int i_mtime; int i_ctime; int i_mode; int * i_op; int i_ino; int i_sb; } ;
struct TYPE_3__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct component_name {int dummy; } ;
struct btstack {int dummy; } ;
typedef int ino_t ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_5 ;
 struct jfs_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (int ,struct inode*,struct component_name*,int *,struct btstack*) ;
 int FUNC_5 (struct inode*,struct component_name*,int *,struct btstack*,int ) ;
 int FUNC_6 (struct component_name*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct component_name*,struct dentry*) ;
 struct inode* FUNC_9 (struct inode*,int) ;
 int FUNC_10 (struct inode*,int ,int ) ;
 int FUNC_11 (struct inode*) ;
 int VAR_6 ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int ,struct inode*,struct inode*) ;
 int FUNC_14 (int ,struct inode*,struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 struct tblock* FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int,struct inode**,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (struct inode*) ;

__attribute__((used)) static int FUNC_26(struct inode *VAR_7, struct dentry *VAR_8,
  int VAR_9, dev_t VAR_10)
{
 struct jfs_inode_info *VAR_11;
 struct btstack VAR_12;
 struct component_name VAR_13;
 ino_t VAR_14;
 struct inode *VAR_15;
 struct inode *VAR_16[2];
 int VAR_17;
 tid_t VAR_18;
 struct tblock *VAR_19;

 if (!FUNC_19(VAR_10))
  return -VAR_4;

 FUNC_12("jfs_mknod: %s", VAR_8->d_name.name);

 if ((VAR_17 = FUNC_8(&VAR_13, VAR_8)))
  goto out;

 VAR_15 = FUNC_9(VAR_7, VAR_9);
 if (FUNC_0(VAR_15)) {
  VAR_17 = FUNC_2(VAR_15);
  goto out1;
 }
 VAR_11 = FUNC_1(VAR_15);

 VAR_18 = FUNC_22(VAR_7->i_sb, 0);

 FUNC_16(&FUNC_1(VAR_7)->commit_mutex, VAR_2);
 FUNC_16(&FUNC_1(VAR_15)->commit_mutex, VAR_1);

 VAR_17 = FUNC_13(VAR_18, VAR_15, VAR_7);
 if (VAR_17)
  goto out3;

 VAR_17 = FUNC_14(VAR_18, VAR_15, VAR_7);
 if (VAR_17) {
  FUNC_21(VAR_18, 0);
  goto out3;
 }

 if ((VAR_17 = FUNC_5(VAR_7, &VAR_13, &VAR_14, &VAR_12, VAR_5))) {
  FUNC_21(VAR_18, 0);
  goto out3;
 }

 VAR_19 = FUNC_20(VAR_18);
 VAR_19->xflag |= VAR_0;
 VAR_19->ino = VAR_15->i_ino;
 VAR_19->u.ixpxd = FUNC_1(VAR_15)->ixpxd;

 VAR_14 = VAR_15->i_ino;
 if ((VAR_17 = FUNC_4(VAR_18, VAR_7, &VAR_13, &VAR_14, &VAR_12))) {
  FUNC_21(VAR_18, 0);
  goto out3;
 }

 VAR_15->i_op = &VAR_6;
 VAR_11->dev = FUNC_18(VAR_10);
 FUNC_10(VAR_15, VAR_15->i_mode, VAR_10);

 FUNC_15(VAR_15);

 VAR_7->i_ctime = VAR_7->i_mtime = VAR_3;

 FUNC_15(VAR_7);

 VAR_16[0] = VAR_7;
 VAR_16[1] = VAR_15;
 VAR_17 = FUNC_23(VAR_18, 2, VAR_16, 0);

      out3:
 FUNC_24(VAR_18);
 FUNC_17(&FUNC_1(VAR_15)->commit_mutex);
 FUNC_17(&FUNC_1(VAR_7)->commit_mutex);
 if (VAR_17) {
  FUNC_7(VAR_15);
  VAR_15->i_nlink = 0;
  FUNC_25(VAR_15);
  FUNC_11(VAR_15);
 } else {
  FUNC_3(VAR_8, VAR_15);
  FUNC_25(VAR_15);
 }

      out1:
 FUNC_6(&VAR_13);

      out:
 FUNC_12("jfs_mknod: returning %d", VAR_17);
 return VAR_17;
}
