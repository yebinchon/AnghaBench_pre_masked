
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct path {struct dentry* dentry; } ;
struct TYPE_3__ {int name; int len; } ;
struct dentry {TYPE_2__* d_inode; TYPE_1__ d_name; int d_sb; } ;
struct autofs_sb_info {int version; int fs_lock; } ;
struct autofs_info {int flags; } ;
struct TYPE_4__ {int i_mode; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct dentry*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct vfsmount* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct autofs_info* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct path*) ;
 scalar_t__ FUNC_6 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_7 (int ) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct dentry*) ;
 scalar_t__ FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static struct vfsmount *FUNC_14(struct path *VAR_3)
{
 struct dentry *VAR_4 = VAR_3->dentry;
 struct autofs_sb_info *VAR_5 = FUNC_7(VAR_4->d_sb);
 struct autofs_info *VAR_6 = FUNC_3(VAR_4);
 int VAR_7;

 FUNC_0("dentry=%p %.*s",
  VAR_4, VAR_4->d_name.len, VAR_4->d_name.name);


 if (FUNC_6(VAR_5))
  return ((void*)0);
 VAR_7 = FUNC_9(VAR_4);
 if (VAR_7 && VAR_7 != -VAR_1)
  return ((void*)0);


 FUNC_12(&VAR_5->fs_lock);
 if (VAR_6->flags & VAR_0) {
  FUNC_13(&VAR_5->fs_lock);
  VAR_7 = FUNC_4(VAR_4);
  if (VAR_7)
   return FUNC_1(VAR_7);
  goto done;
 }






 if (VAR_4->d_inode && FUNC_2(VAR_4->d_inode->i_mode)) {
  FUNC_13(&VAR_5->fs_lock);
  goto done;
 }

 if (!FUNC_8(VAR_4)) {
  if (VAR_5->version > 4) {
   if (FUNC_10(VAR_4)) {
    FUNC_13(&VAR_5->fs_lock);
    goto done;
   }
  } else {
   if (!FUNC_11(VAR_4)) {
    FUNC_13(&VAR_5->fs_lock);
    goto done;
   }
  }
  VAR_6->flags |= VAR_0;
  FUNC_13(&VAR_5->fs_lock);
  VAR_7 = FUNC_4(VAR_4);
  FUNC_12(&VAR_5->fs_lock);
  VAR_6->flags &= ~VAR_0;
  if (VAR_7) {
   FUNC_13(&VAR_5->fs_lock);
   return FUNC_1(VAR_7);
  }
 }
 FUNC_13(&VAR_5->fs_lock);
done:

 VAR_4 = FUNC_5(VAR_3);
 if (!VAR_4)
  return FUNC_1(-VAR_2);

 return ((void*)0);
}
