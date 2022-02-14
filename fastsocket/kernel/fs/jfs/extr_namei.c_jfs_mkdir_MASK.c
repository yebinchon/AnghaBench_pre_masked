
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_5__ {int ixpxd; } ;
struct tblock {TYPE_2__ u; int ino; int xflag; } ;
struct inode {scalar_t__ i_nlink; int i_mtime; int i_ctime; int * i_fop; int * i_op; int i_ino; int i_sb; } ;
struct TYPE_4__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct component_name {int dummy; } ;
struct btstack {int dummy; } ;
typedef int ino_t ;
struct TYPE_6__ {int commit_mutex; int ixpxd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_6 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct inode*) ;
 int VAR_8 ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (int ,struct inode*,int ) ;
 int FUNC_5 (int ,struct inode*,struct component_name*,int *,struct btstack*) ;
 int FUNC_6 (struct inode*,struct component_name*,int *,struct btstack*,int ) ;
 int FUNC_7 (struct component_name*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct component_name*,struct dentry*) ;
 struct inode* FUNC_10 (struct inode*,int) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (int ,struct inode*,struct inode*) ;
 int FUNC_16 (int ,struct inode*,struct inode*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *) ;
 struct tblock* FUNC_20 (int ) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int,struct inode**,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (struct inode*) ;

__attribute__((used)) static int FUNC_26(struct inode *VAR_11, struct dentry *VAR_12, int VAR_13)
{
 int VAR_14 = 0;
 tid_t VAR_15;
 struct inode *VAR_16 = ((void*)0);
 ino_t VAR_17;
 struct component_name VAR_18;
 struct btstack VAR_19;
 struct inode *VAR_20[2];
 struct tblock *VAR_21;

 FUNC_14("jfs_mkdir: dip:0x%p name:%s", VAR_11, VAR_12->d_name.name);


 if (VAR_11->i_nlink == VAR_7) {
  VAR_14 = -VAR_5;
  goto out1;
 }





 if ((VAR_14 = FUNC_9(&VAR_18, VAR_12)))
  goto out1;






 VAR_16 = FUNC_10(VAR_11, VAR_8 | VAR_13);
 if (FUNC_0(VAR_16)) {
  VAR_14 = FUNC_2(VAR_16);
  goto out2;
 }

 VAR_15 = FUNC_22(VAR_11->i_sb, 0);

 FUNC_18(&FUNC_1(VAR_11)->commit_mutex, VAR_2);
 FUNC_18(&FUNC_1(VAR_16)->commit_mutex, VAR_1);

 VAR_14 = FUNC_15(VAR_15, VAR_16, VAR_11);
 if (VAR_14)
  goto out3;

 VAR_14 = FUNC_16(VAR_15, VAR_16, VAR_11);
 if (VAR_14) {
  FUNC_21(VAR_15, 0);
  goto out3;
 }

 if ((VAR_14 = FUNC_6(VAR_11, &VAR_18, &VAR_17, &VAR_19, VAR_6))) {
  FUNC_13("jfs_mkdir: dtSearch returned %d", VAR_14);
  FUNC_21(VAR_15, 0);
  goto out3;
 }

 VAR_21 = FUNC_20(VAR_15);
 VAR_21->xflag |= VAR_0;
 VAR_21->ino = VAR_16->i_ino;
 VAR_21->u.ixpxd = FUNC_1(VAR_16)->ixpxd;

 VAR_20[0] = VAR_11;
 VAR_20[1] = VAR_16;




 FUNC_4(VAR_15, VAR_16, VAR_11->i_ino);





 VAR_17 = VAR_16->i_ino;
 if ((VAR_14 = FUNC_5(VAR_15, VAR_11, &VAR_18, &VAR_17, &VAR_19))) {
  if (VAR_14 == -VAR_4) {
   FUNC_13("jfs_mkdir: dtInsert returned -EIO");
   FUNC_21(VAR_15, 1);
  } else
   FUNC_21(VAR_15, 0);
  goto out3;
 }

 VAR_16->i_nlink = 2;
 VAR_16->i_op = &VAR_9;
 VAR_16->i_fop = &VAR_10;

 FUNC_17(VAR_16);


 FUNC_11(VAR_11);
 VAR_11->i_ctime = VAR_11->i_mtime = VAR_3;
 FUNC_17(VAR_11);

 VAR_14 = FUNC_23(VAR_15, 2, &VAR_20[0], 0);

      out3:
 FUNC_24(VAR_15);
 FUNC_19(&FUNC_1(VAR_16)->commit_mutex);
 FUNC_19(&FUNC_1(VAR_11)->commit_mutex);
 if (VAR_14) {
  FUNC_8(VAR_16);
  VAR_16->i_nlink = 0;
  FUNC_25(VAR_16);
  FUNC_12(VAR_16);
 } else {
  FUNC_3(VAR_12, VAR_16);
  FUNC_25(VAR_16);
 }

      out2:
 FUNC_7(&VAR_18);


      out1:

 FUNC_14("jfs_mkdir: rc:%d", VAR_14);
 return VAR_14;
}
