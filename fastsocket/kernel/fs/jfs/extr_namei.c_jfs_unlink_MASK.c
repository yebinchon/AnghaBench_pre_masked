
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_5__ {struct inode* ip; } ;
struct tblock {TYPE_2__ u; int xflag; } ;
struct inode {scalar_t__ i_nlink; int i_size; int i_sb; int i_mtime; int i_ctime; int i_ino; } ;
struct TYPE_4__ {int name; } ;
struct dentry {TYPE_1__ d_name; struct inode* d_inode; } ;
struct component_name {int dummy; } ;
typedef int s64 ;
typedef int ino_t ;
struct TYPE_6__ {int commit_mutex; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*) ;
 TYPE_3__* FUNC_3 (struct inode*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,struct inode*) ;
 int FUNC_6 (int ,struct inode*) ;
 int FUNC_7 (int ,struct inode*,struct component_name*,int *,int ) ;
 int FUNC_8 (struct component_name*) ;
 int FUNC_9 (struct component_name*,struct dentry*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,struct inode*) ;
 scalar_t__ FUNC_19 (int ,struct inode*) ;
 struct tblock* FUNC_20 (int ) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int,struct inode**,int) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (struct inode*) ;
 int FUNC_26 (int ,struct inode*,int) ;

__attribute__((used)) static int FUNC_27(struct inode *VAR_10, struct dentry *VAR_11)
{
 int VAR_12;
 tid_t VAR_13;
 struct inode *VAR_14 = VAR_11->d_inode;
 ino_t VAR_15;
 struct component_name VAR_16;
 struct inode *VAR_17[2];
 struct tblock *VAR_18;
 s64 VAR_19 = 0;
 int VAR_20;

 FUNC_12("jfs_unlink: dip:0x%p name:%s", VAR_10, VAR_11->d_name.name);


 FUNC_25(VAR_14);

 if ((VAR_12 = FUNC_9(&VAR_16, VAR_11)))
  goto out;

 FUNC_1(VAR_14, VAR_9);

 VAR_13 = FUNC_22(VAR_10->i_sb, 0);

 FUNC_16(&FUNC_3(VAR_10)->commit_mutex, VAR_2);
 FUNC_16(&FUNC_3(VAR_14)->commit_mutex, VAR_1);

 VAR_17[0] = VAR_10;
 VAR_17[1] = VAR_14;




 VAR_15 = VAR_14->i_ino;
 if ((VAR_12 = FUNC_7(VAR_13, VAR_10, &VAR_16, &VAR_15, VAR_8))) {
  FUNC_11("jfs_unlink: dtDelete returned %d", VAR_12);
  if (VAR_12 == -VAR_7)
   FUNC_21(VAR_13, 1);
  FUNC_24(VAR_13);
  FUNC_17(&FUNC_3(VAR_14)->commit_mutex);
  FUNC_17(&FUNC_3(VAR_10)->commit_mutex);
  FUNC_2(VAR_14);
  goto out1;
 }

 FUNC_0(VAR_14->i_nlink);

 VAR_14->i_ctime = VAR_10->i_ctime = VAR_10->i_mtime = VAR_6;
 FUNC_14(VAR_10);


 FUNC_10(VAR_14);




 if (VAR_14->i_nlink == 0) {
  FUNC_4(!FUNC_19(VAR_3, VAR_14));

  if ((VAR_19 = FUNC_6(VAR_13, VAR_14)) < 0) {
   FUNC_21(VAR_13, 1);
   FUNC_24(VAR_13);
   FUNC_17(&FUNC_3(VAR_14)->commit_mutex);
   FUNC_17(&FUNC_3(VAR_10)->commit_mutex);
   FUNC_2(VAR_14);
   VAR_12 = VAR_19;
   goto out1;
  }
  VAR_18 = FUNC_20(VAR_13);
  VAR_18->xflag |= VAR_0;
  VAR_18->u.ip = VAR_14;
 }






 if (VAR_19)
  VAR_20 = VAR_4;
 else
  VAR_20 = 0;





 VAR_12 = FUNC_23(VAR_13, 2, &VAR_17[0], VAR_20);

 FUNC_24(VAR_13);

 FUNC_17(&FUNC_3(VAR_14)->commit_mutex);
 FUNC_17(&FUNC_3(VAR_10)->commit_mutex);

 while (VAR_19 && (VAR_12 == 0)) {
  VAR_13 = FUNC_22(VAR_10->i_sb, 0);
  FUNC_15(&FUNC_3(VAR_14)->commit_mutex);
  VAR_19 = FUNC_26(VAR_13, VAR_14, VAR_19);
  if (VAR_19 < 0) {
   FUNC_21(VAR_13, 1);
   VAR_12 = VAR_19;
  } else
   VAR_12 = FUNC_23(VAR_13, 2, &VAR_17[0], VAR_4);
  FUNC_24(VAR_13);
  FUNC_17(&FUNC_3(VAR_14)->commit_mutex);
 }

 if (VAR_14->i_nlink == 0)
  FUNC_18(VAR_3, VAR_14);

 FUNC_2(VAR_14);





 if (FUNC_19(VAR_5, VAR_10)) {
  if (VAR_10->i_size > 1)
   FUNC_13(VAR_10, 0);

  FUNC_5(VAR_5, VAR_10);
 }

      out1:
 FUNC_8(&VAR_16);
      out:
 FUNC_12("jfs_unlink: rc:%d", VAR_12);
 return VAR_12;
}
