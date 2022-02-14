
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct super_block {int s_root; } ;
struct dentry {int dummy; } ;
struct autofs_sb_info {unsigned long exp_timeout; int fs_lock; } ;
struct autofs_info {int flags; int expire_complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct autofs_info* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct vfsmount*,struct dentry*,unsigned long,int) ;
 struct dentry* FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct dentry *FUNC_7(struct super_block *VAR_5,
         struct vfsmount *VAR_6,
         struct autofs_sb_info *VAR_7,
         int VAR_8)
{
 unsigned long VAR_9;
 struct dentry *VAR_10 = FUNC_2(VAR_5->s_root);
 int VAR_11 = VAR_8 & VAR_0;
 struct autofs_info *VAR_12;

 if (!VAR_10)
  return ((void*)0);

 VAR_4 = VAR_3;
 VAR_9 = VAR_7->exp_timeout;

 FUNC_5(&VAR_7->fs_lock);
 VAR_12 = FUNC_0(VAR_10);

 if (VAR_12->flags & VAR_2)
  goto out;
 if (!FUNC_1(VAR_6, VAR_10, VAR_9, VAR_11)) {
  struct autofs_info *VAR_13 = FUNC_0(VAR_10);
  VAR_13->flags |= VAR_1;
  FUNC_4(&VAR_13->expire_complete);
  FUNC_6(&VAR_7->fs_lock);
  return VAR_10;
 }
out:
 FUNC_6(&VAR_7->fs_lock);
 FUNC_3(VAR_10);

 return ((void*)0);
}
