
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct path {scalar_t__ mnt; struct file* dentry; } ;
struct TYPE_10__ {size_t len; scalar_t__* name; } ;
struct TYPE_14__ {scalar_t__ mnt; struct file* dentry; } ;
struct TYPE_11__ {int flags; int create_mode; struct file* file; } ;
struct TYPE_12__ {TYPE_3__ open; } ;
struct nameidata {scalar_t__ last_type; int flags; TYPE_2__ last; TYPE_6__ path; TYPE_6__ root; TYPE_4__ intent; } ;
struct filename {char* name; } ;
struct file {int f_flags; TYPE_5__* d_inode; } ;
struct dentry {int f_flags; TYPE_5__* d_inode; } ;
struct TYPE_13__ {int i_mutex; int i_mode; TYPE_1__* i_op; } ;
struct TYPE_9__ {scalar_t__ follow_link; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct file* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct file*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct file*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct path*,struct nameidata*) ;
 int FUNC_6 (struct nameidata*,struct path*,int,int) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct filename*,struct file*,int) ;
 int FUNC_10 (int,struct filename*,int,struct nameidata*) ;
 int FUNC_11 (struct path*,int) ;
 int FUNC_12 (struct file*) ;
 struct file* FUNC_13 () ;
 int FUNC_14 (struct file*) ;
 int FUNC_15 (struct file*,int) ;
 int FUNC_16 (int) ;
 void* FUNC_17 (struct nameidata*) ;
 int FUNC_18 (TYPE_6__*,int,int) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 struct file* FUNC_23 (struct nameidata*) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int,TYPE_5__*) ;
 int FUNC_26 (int,char const*,int,struct nameidata*) ;
 int FUNC_27 (TYPE_6__*) ;
 int FUNC_28 (struct path*,struct nameidata*) ;
 int FUNC_29 (struct path*,struct nameidata*) ;
 int FUNC_30 (struct filename*,struct nameidata*) ;
 int FUNC_31 (struct nameidata*) ;
 int FUNC_32 (struct file*,struct nameidata*) ;
 scalar_t__ FUNC_33 (int) ;
 int FUNC_34 (TYPE_5__*) ;

struct file *FUNC_35(int VAR_20, struct filename *VAR_21,
  int VAR_22, int VAR_23, int VAR_24)
{
 struct file *VAR_25;
 struct nameidata VAR_26;
 int VAR_27;
 struct path VAR_28;
 struct dentry *VAR_29;
 int VAR_30 = 0;
 int VAR_31;
 int VAR_32 = FUNC_24(VAR_22);
 int VAR_33 = 0;
 const char *VAR_34 = VAR_21->name;

 if (!VAR_24)
  VAR_24 = VAR_13 | FUNC_0(VAR_32);


 if (VAR_32 & VAR_19)
  VAR_24 |= VAR_14;



 if (VAR_32 & VAR_15)
  VAR_24 |= VAR_12;




 if (!(VAR_32 & VAR_16)) {
  VAR_25 = FUNC_13();

  if (VAR_25 == ((void*)0))
   return FUNC_1(-VAR_3);
  VAR_26.intent.open.file = VAR_25;
  VAR_25->f_flags = VAR_22;
  VAR_26.intent.open.flags = VAR_32;
  VAR_26.intent.open.create_mode = 0;
  VAR_27 = FUNC_10(VAR_20, VAR_21,
     FUNC_16(VAR_32)|VAR_10, &VAR_26);
  if (FUNC_2(VAR_26.intent.open.file)) {
   if (VAR_27 == 0) {
    VAR_27 = FUNC_3(VAR_26.intent.open.file);
    FUNC_27(&VAR_26.path);
   }
  } else if (VAR_27)
   FUNC_31(&VAR_26);
  if (VAR_27)
   return FUNC_1(VAR_27);
  goto ok;
 }




 VAR_27 = FUNC_26(VAR_20, VAR_34, VAR_11, &VAR_26);
 if (VAR_27)
  return FUNC_1(VAR_27);
 VAR_27 = FUNC_30(VAR_21, &VAR_26);
 if (VAR_27) {
  if (VAR_26.root.mnt)
   FUNC_27(&VAR_26.root);
  return FUNC_1(VAR_27);
 }
 if (FUNC_33(!FUNC_8()))
  FUNC_9(VAR_21, VAR_26.path.dentry, VAR_11);






 VAR_27 = -VAR_1;
 if (VAR_26.last_type != VAR_7 || VAR_26.last.name[VAR_26.last.len])
  goto exit_parent;

 VAR_27 = -VAR_3;
 VAR_25 = FUNC_13();
 if (VAR_25 == ((void*)0))
  goto exit_parent;
 VAR_26.intent.open.file = VAR_25;
 VAR_25->f_flags = VAR_22;
 VAR_26.intent.open.flags = VAR_32;
 VAR_26.intent.open.create_mode = VAR_23;
 VAR_29 = VAR_26.path.dentry;
 VAR_26.flags &= ~VAR_11;
 VAR_26.flags |= VAR_8 | VAR_10;
 if (VAR_32 & VAR_17)
  VAR_26.flags |= VAR_9;
 VAR_27 = FUNC_20(VAR_26.path.mnt);
 if (!VAR_27)
  VAR_33 = 1;

 FUNC_21(&VAR_29->d_inode->i_mutex);
 VAR_28.dentry = FUNC_17(&VAR_26);
 VAR_28.mnt = VAR_26.path.mnt;

do_last:
 VAR_27 = FUNC_3(VAR_28.dentry);
 if (FUNC_2(VAR_28.dentry)) {
  FUNC_22(&VAR_29->d_inode->i_mutex);
  if (VAR_33)
   FUNC_19(VAR_26.path.mnt);
  goto exit;
 }

 if (FUNC_2(VAR_26.intent.open.file)) {
  VAR_27 = FUNC_3(VAR_26.intent.open.file);
  goto exit_mutex_unlock;
 }


 if (!VAR_28.dentry->d_inode) {
  if (!VAR_33) {
   VAR_27 = -VAR_5;
   goto exit_mutex_unlock;
  }
  VAR_27 = FUNC_6(&VAR_26, &VAR_28, VAR_22, VAR_23);
  if (VAR_27) {
   FUNC_19(VAR_26.path.mnt);
   goto exit;
  }
  VAR_25 = FUNC_23(&VAR_26);
  FUNC_19(VAR_26.path.mnt);
  if (VAR_26.root.mnt)
   FUNC_27(&VAR_26.root);
  if (!FUNC_2(VAR_25)) {
   VAR_27 = FUNC_15(VAR_25, VAR_24);
   if (VAR_27) {
    FUNC_12(VAR_25);
    VAR_25 = FUNC_1(VAR_27);
   }
  }
  return VAR_25;
 }




 FUNC_22(&VAR_29->d_inode->i_mutex);
 if (VAR_33) {
  FUNC_19(VAR_26.path.mnt);
  VAR_33 = 0;
 }
 FUNC_9(VAR_21, VAR_28.dentry, 0);

 VAR_27 = -VAR_0;
 if (VAR_32 & VAR_17)
  goto exit_dput;

 VAR_27 = FUNC_11(&VAR_28, VAR_26.flags);
 if (VAR_27 < 0)
  goto exit_dput;


 VAR_27 = -VAR_4;
 if (!VAR_28.dentry->d_inode)
  goto exit_dput;
 if (VAR_28.dentry->d_inode->i_op->follow_link)
  goto do_link;

 FUNC_29(&VAR_28, &VAR_26);
 VAR_27 = -VAR_1;
 if (VAR_28.dentry->d_inode && FUNC_4(VAR_28.dentry->d_inode->i_mode))
  goto exit;
ok:
 VAR_31 = FUNC_25(VAR_32, VAR_26.path.dentry->d_inode);
 if (VAR_31) {
  VAR_27 = FUNC_20(VAR_26.path.mnt);
  if (VAR_27)
   goto exit;
 }
 VAR_27 = FUNC_18(&VAR_26.path, VAR_24, VAR_22);
 if (VAR_27) {
  if (VAR_31)
   FUNC_19(VAR_26.path.mnt);
  goto exit;
 }
 VAR_25 = FUNC_23(&VAR_26);
 if (!FUNC_2(VAR_25)) {
  VAR_27 = FUNC_15(VAR_25, VAR_24);
  if (VAR_27) {
   FUNC_12(VAR_25);
   VAR_25 = FUNC_1(VAR_27);
  }
 }
 if (!FUNC_2(VAR_25)) {
  if (VAR_24 & VAR_14)
   FUNC_34(VAR_26.path.dentry->d_inode);

  if (VAR_31) {
   VAR_27 = FUNC_14(VAR_25);
   if (VAR_27) {
    FUNC_12(VAR_25);
    VAR_25 = FUNC_1(VAR_27);
   }
  }
 }





 if (VAR_31)
  FUNC_19(VAR_26.path.mnt);
 if (VAR_26.root.mnt)
  FUNC_27(&VAR_26.root);
 return VAR_25;

exit_mutex_unlock:
 FUNC_22(&VAR_29->d_inode->i_mutex);
 if (VAR_33)
  FUNC_19(VAR_26.path.mnt);
exit_dput:
 FUNC_28(&VAR_28, &VAR_26);
exit:
 if (!FUNC_2(VAR_26.intent.open.file))
  FUNC_31(&VAR_26);
exit_parent:
 if (VAR_26.root.mnt)
  FUNC_27(&VAR_26.root);
 FUNC_27(&VAR_26.path);
 return FUNC_1(VAR_27);

do_link:
 VAR_27 = -VAR_2;
 if (VAR_32 & VAR_18)
  goto exit_dput;
 VAR_26.flags |= VAR_11;
 VAR_27 = FUNC_32(VAR_28.dentry, &VAR_26);
 if (VAR_27)
  goto exit_dput;
 VAR_27 = FUNC_5(&VAR_28, &VAR_26);
 if (VAR_27) {




  FUNC_31(&VAR_26);
  if (VAR_26.root.mnt)
   FUNC_27(&VAR_26.root);
  return FUNC_1(VAR_27);
 }
 VAR_26.flags &= ~VAR_11;
 if (VAR_26.last_type == VAR_6)
  goto ok;
 VAR_27 = -VAR_1;
 if (VAR_26.last_type != VAR_7)
  goto exit;
 if (VAR_26.last.name[VAR_26.last.len]) {
  FUNC_7(VAR_26.last.name);
  goto exit;
 }
 VAR_27 = -VAR_2;
 if (VAR_30++==32) {
  FUNC_7(VAR_26.last.name);
  goto exit;
 }
 VAR_29 = VAR_26.path.dentry;
 VAR_27 = FUNC_20(VAR_26.path.mnt);
 if (!VAR_27)
  VAR_33 = 1;
 FUNC_21(&VAR_29->d_inode->i_mutex);
 VAR_28.dentry = FUNC_17(&VAR_26);
 VAR_28.mnt = VAR_26.path.mnt;
 FUNC_7(VAR_26.last.name);
 goto do_last;
}
