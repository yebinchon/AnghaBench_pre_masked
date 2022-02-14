
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vfsmount {TYPE_3__* mnt_root; TYPE_1__* mnt_sb; } ;
struct path {TYPE_4__* dentry; } ;
struct TYPE_10__ {int i_mutex; int i_mode; } ;
struct TYPE_9__ {TYPE_5__* d_inode; } ;
struct TYPE_8__ {TYPE_2__* d_inode; } ;
struct TYPE_7__ {int i_mode; } ;
struct TYPE_6__ {int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct vfsmount*,struct path*,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vfsmount*,struct path*) ;
 int FUNC_7 (struct vfsmount*,struct path*) ;

__attribute__((used)) static int FUNC_8(struct vfsmount *VAR_4, struct path *VAR_5)
{
 int VAR_6;
 if (VAR_4->mnt_sb->s_flags & VAR_3)
  return -VAR_0;

 if (FUNC_1(VAR_5->dentry->d_inode->i_mode) !=
       FUNC_1(VAR_4->mnt_root->d_inode->i_mode))
  return -VAR_2;

 VAR_6 = -VAR_1;
 FUNC_4(&VAR_5->dentry->d_inode->i_mutex);
 if (FUNC_0(VAR_5->dentry->d_inode))
  goto out_unlock;

 VAR_6 = FUNC_6(VAR_4, VAR_5);
 if (VAR_6)
  goto out_unlock;

 VAR_6 = -VAR_1;
 if (!FUNC_3(VAR_5->dentry))
  VAR_6 = FUNC_2(VAR_4, VAR_5, ((void*)0));
out_unlock:
 FUNC_5(&VAR_5->dentry->d_inode->i_mutex);
 if (!VAR_6)
  FUNC_7(VAR_4, VAR_5);
 return VAR_6;
}
