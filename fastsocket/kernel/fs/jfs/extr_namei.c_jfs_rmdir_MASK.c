
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_6__ {struct inode* ip; } ;
struct tblock {TYPE_2__ u; int xflag; } ;
struct inode {int i_size; int i_mtime; int i_ctime; int i_ino; int i_sb; } ;
struct TYPE_5__ {int name; } ;
struct dentry {TYPE_1__ d_name; struct inode* d_inode; } ;
struct component_name {int dummy; } ;
typedef int ino_t ;
struct TYPE_7__ {int flag; } ;
struct TYPE_8__ {int commit_mutex; TYPE_3__ acl; TYPE_3__ ea; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_8 ;
 int FUNC_1 (int ,struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,struct inode*,struct component_name*,int *,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct component_name*) ;
 int FUNC_6 (struct component_name*,struct dentry*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ,struct inode*) ;
 struct tblock* FUNC_15 (int ) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int,struct inode**,int ) ;
 int FUNC_19 (int ,struct inode*,TYPE_3__*,int *) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct inode*) ;

__attribute__((used)) static int FUNC_22(struct inode *VAR_9, struct dentry *VAR_10)
{
 int VAR_11;
 tid_t VAR_12;
 struct inode *VAR_13 = VAR_10->d_inode;
 ino_t VAR_14;
 struct component_name VAR_15;
 struct inode *VAR_16[2];
 struct tblock *VAR_17;

 FUNC_9("jfs_rmdir: dip:0x%p name:%s", VAR_9, VAR_10->d_name.name);


 FUNC_21(VAR_13);


 if (!FUNC_4(VAR_13)) {
  VAR_11 = -VAR_7;
  goto out;
 }

 if ((VAR_11 = FUNC_6(&VAR_15, VAR_10))) {
  goto out;
 }

 VAR_12 = FUNC_17(VAR_9->i_sb, 0);

 FUNC_12(&FUNC_0(VAR_9)->commit_mutex, VAR_2);
 FUNC_12(&FUNC_0(VAR_13)->commit_mutex, VAR_1);

 VAR_16[0] = VAR_9;
 VAR_16[1] = VAR_13;

 VAR_17 = FUNC_15(VAR_12);
 VAR_17->xflag |= VAR_0;
 VAR_17->u.ip = VAR_13;




 VAR_14 = VAR_13->i_ino;
 if ((VAR_11 = FUNC_3(VAR_12, VAR_9, &VAR_15, &VAR_14, VAR_8))) {
  FUNC_8("jfs_rmdir: dtDelete returned %d", VAR_11);
  if (VAR_11 == -VAR_6)
   FUNC_16(VAR_12, 1);
  FUNC_20(VAR_12);
  FUNC_13(&FUNC_0(VAR_13)->commit_mutex);
  FUNC_13(&FUNC_0(VAR_9)->commit_mutex);

  goto out2;
 }




 VAR_9->i_ctime = VAR_9->i_mtime = VAR_4;
 FUNC_7(VAR_9);





 if (FUNC_0(VAR_13)->ea.flag & VAR_5) {

  FUNC_19(VAR_12, VAR_13, &FUNC_0(VAR_13)->ea, ((void*)0));
 }
 FUNC_0(VAR_13)->ea.flag = 0;


 if (FUNC_0(VAR_13)->acl.flag & VAR_5) {

  FUNC_19(VAR_12, VAR_13, &FUNC_0(VAR_13)->acl, ((void*)0));
 }
 FUNC_0(VAR_13)->acl.flag = 0;


 FUNC_2(VAR_13);
 FUNC_11(VAR_13);

 VAR_11 = FUNC_18(VAR_12, 2, &VAR_16[0], 0);

 FUNC_20(VAR_12);

 FUNC_13(&FUNC_0(VAR_13)->commit_mutex);
 FUNC_13(&FUNC_0(VAR_9)->commit_mutex);





 if (FUNC_14(VAR_3, VAR_9)) {
  if (VAR_9->i_size > 1)
   FUNC_10(VAR_9, 0);

  FUNC_1(VAR_3, VAR_9);
 }

      out2:
 FUNC_5(&VAR_15);

      out:
 FUNC_9("jfs_rmdir: rc:%d", VAR_11);
 return VAR_11;
}
