
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vfsmount {int mnt_flags; } ;
struct timespec {int dummy; } ;
struct inode {int i_flags; TYPE_1__* i_sb; struct timespec i_atime; int i_mode; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_4__ {int s_flags; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct vfsmount*) ;
 scalar_t__ FUNC_3 (struct vfsmount*) ;
 struct timespec FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct vfsmount*,struct inode*,struct timespec) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (struct timespec*,struct timespec*) ;

void FUNC_10(struct vfsmount *VAR_4, struct dentry *VAR_5)
{
 struct inode *VAR_6 = VAR_5->d_inode;
 struct timespec VAR_7;

 if (VAR_6->i_flags & VAR_3)
  return;
 if (FUNC_0(VAR_6))
  return;
 if ((VAR_6->i_sb->s_flags & VAR_2) && FUNC_1(VAR_6->i_mode))
  return;

 if (VAR_4->mnt_flags & VAR_0)
  return;
 if ((VAR_4->mnt_flags & VAR_1) && FUNC_1(VAR_6->i_mode))
  return;

 VAR_7 = FUNC_4(VAR_6->i_sb);

 if (!FUNC_6(VAR_4, VAR_6, VAR_7))
  return;

 if (FUNC_9(&VAR_6->i_atime, &VAR_7))
  return;

 if (!FUNC_8(VAR_6->i_sb))
  return;

 if (FUNC_3(VAR_4))
  goto skip_update;

 VAR_6->i_atime = VAR_7;
 FUNC_5(VAR_6);
 FUNC_2(VAR_4);
skip_update:
 FUNC_7(VAR_6->i_sb);
}
