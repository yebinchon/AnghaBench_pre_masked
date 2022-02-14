
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct super_block {int dummy; } ;
struct dentry {int dummy; } ;
struct autofs_sb_info {int fs_lock; int type; } ;
struct autofs_info {int expire_complete; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct autofs_info* FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (struct super_block*,struct vfsmount*,struct autofs_sb_info*,int) ;
 struct dentry* FUNC_2 (struct super_block*,struct vfsmount*,struct autofs_sb_info*,int) ;
 int FUNC_3 (struct autofs_sb_info*,struct dentry*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct super_block *VAR_3, struct vfsmount *VAR_4,
       struct autofs_sb_info *VAR_5, int VAR_6)
{
 struct dentry *VAR_7;
 int VAR_8 = -VAR_1;

 if (FUNC_4(VAR_5->type))
  VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 else
  VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_7) {
  struct autofs_info *VAR_9 = FUNC_0(VAR_7);



  VAR_8 = FUNC_3(VAR_5, VAR_7, VAR_2);

  FUNC_7(&VAR_5->fs_lock);
  VAR_9->flags &= ~VAR_0;
  FUNC_5(&VAR_9->expire_complete);
  FUNC_8(&VAR_5->fs_lock);
  FUNC_6(VAR_7);
 }

 return VAR_8;
}
