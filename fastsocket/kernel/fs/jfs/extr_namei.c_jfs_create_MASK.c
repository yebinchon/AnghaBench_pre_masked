
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_6__ {int ixpxd; } ;
struct tblock {TYPE_2__ u; int ino; int xflag; } ;
struct nameidata {int dummy; } ;
struct inode {scalar_t__ i_nlink; int i_mtime; int i_ctime; TYPE_3__* i_mapping; int * i_fop; int * i_op; int i_ino; int i_sb; } ;
struct TYPE_5__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct component_name {int dummy; } ;
struct btstack {int dummy; } ;
typedef int ino_t ;
struct TYPE_8__ {int commit_mutex; int ixpxd; } ;
struct TYPE_7__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_5 ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (int ,struct inode*,struct component_name*,int *,struct btstack*) ;
 int FUNC_5 (struct inode*,struct component_name*,int *,struct btstack*,int ) ;
 int FUNC_6 (struct component_name*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct component_name*,struct dentry*) ;
 struct inode* FUNC_9 (struct inode*,int) ;
 int FUNC_10 (struct inode*) ;
 int VAR_6 ;
 int FUNC_11 (char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int ,struct inode*,struct inode*) ;
 int FUNC_14 (int ,struct inode*,struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 struct tblock* FUNC_18 (int ) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int,struct inode**,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct inode*) ;
 int FUNC_24 (int ,struct inode*) ;

__attribute__((used)) static int FUNC_25(struct inode *VAR_9, struct dentry *VAR_10, int VAR_11,
  struct nameidata *VAR_12)
{
 int VAR_13 = 0;
 tid_t VAR_14;
 struct inode *VAR_15 = ((void*)0);
 ino_t VAR_16;
 struct component_name VAR_17;
 struct btstack VAR_18;
 struct inode *VAR_19[2];
 struct tblock *VAR_20;

 FUNC_12("jfs_create: dip:0x%p name:%s", VAR_9, VAR_10->d_name.name);





 if ((VAR_13 = FUNC_8(&VAR_17, VAR_10)))
  goto out1;






 VAR_15 = FUNC_9(VAR_9, VAR_11);
 if (FUNC_0(VAR_15)) {
  VAR_13 = FUNC_2(VAR_15);
  goto out2;
 }

 VAR_14 = FUNC_20(VAR_9->i_sb, 0);

 FUNC_16(&FUNC_1(VAR_9)->commit_mutex, VAR_2);
 FUNC_16(&FUNC_1(VAR_15)->commit_mutex, VAR_1);

 VAR_13 = FUNC_13(VAR_14, VAR_15, VAR_9);
 if (VAR_13)
  goto out3;

 VAR_13 = FUNC_14(VAR_14, VAR_15, VAR_9);
 if (VAR_13) {
  FUNC_19(VAR_14, 0);
  goto out3;
 }

 if ((VAR_13 = FUNC_5(VAR_9, &VAR_17, &VAR_16, &VAR_18, VAR_5))) {
  FUNC_11("jfs_create: dtSearch returned %d", VAR_13);
  FUNC_19(VAR_14, 0);
  goto out3;
 }

 VAR_20 = FUNC_18(VAR_14);
 VAR_20->xflag |= VAR_0;
 VAR_20->ino = VAR_15->i_ino;
 VAR_20->u.ixpxd = FUNC_1(VAR_15)->ixpxd;

 VAR_19[0] = VAR_9;
 VAR_19[1] = VAR_15;




 FUNC_24(VAR_14, VAR_15);





 VAR_16 = VAR_15->i_ino;
 if ((VAR_13 = FUNC_4(VAR_14, VAR_9, &VAR_17, &VAR_16, &VAR_18))) {
  if (VAR_13 == -VAR_4) {
   FUNC_11("jfs_create: dtInsert returned -EIO");
   FUNC_19(VAR_14, 1);
  } else
   FUNC_19(VAR_14, 0);
  goto out3;
 }

 VAR_15->i_op = &VAR_7;
 VAR_15->i_fop = &VAR_8;
 VAR_15->i_mapping->a_ops = &VAR_6;

 FUNC_15(VAR_15);

 VAR_9->i_ctime = VAR_9->i_mtime = VAR_3;

 FUNC_15(VAR_9);

 VAR_13 = FUNC_21(VAR_14, 2, &VAR_19[0], 0);

      out3:
 FUNC_22(VAR_14);
 FUNC_17(&FUNC_1(VAR_15)->commit_mutex);
 FUNC_17(&FUNC_1(VAR_9)->commit_mutex);
 if (VAR_13) {
  FUNC_7(VAR_15);
  VAR_15->i_nlink = 0;
  FUNC_23(VAR_15);
  FUNC_10(VAR_15);
 } else {
  FUNC_3(VAR_10, VAR_15);
  FUNC_23(VAR_15);
 }

      out2:
 FUNC_6(&VAR_17);

      out1:

 FUNC_12("jfs_create: rc:%d", VAR_13);
 return VAR_13;
}
