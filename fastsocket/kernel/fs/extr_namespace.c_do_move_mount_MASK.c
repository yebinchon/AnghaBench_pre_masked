
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int mnt_expire; struct vfsmount* mnt_parent; TYPE_1__* mnt_root; } ;
struct path {TYPE_1__* dentry; struct vfsmount* mnt; } ;
struct TYPE_4__ {int i_mutex; int i_mode; } ;
struct TYPE_3__ {TYPE_2__* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct vfsmount*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct path*,int) ;
 int FUNC_4 (struct vfsmount*,struct path*,struct path*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct vfsmount*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ,struct path*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_6 ;
 int FUNC_13 (struct path*) ;
 scalar_t__ FUNC_14 (struct vfsmount*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct path *VAR_7, char *VAR_8)
{
 struct path VAR_9, VAR_10;
 struct vfsmount *VAR_11;
 int VAR_12 = 0;
 if (!FUNC_5(VAR_0))
  return -VAR_4;
 if (!VAR_8 || !*VAR_8)
  return -VAR_1;
 VAR_12 = FUNC_9(VAR_8, VAR_5, &VAR_9);
 if (VAR_12)
  return VAR_12;

 FUNC_8(&VAR_6);
 VAR_12 = FUNC_3(VAR_7, 1);
 if (VAR_12 < 0)
  goto out;

 VAR_12 = -VAR_1;
 if (!FUNC_6(VAR_7->mnt) || !FUNC_6(VAR_9.mnt))
  goto out;

 VAR_12 = -VAR_3;
 FUNC_11(&VAR_7->dentry->d_inode->i_mutex);
 if (FUNC_0(VAR_7->dentry->d_inode))
  goto out1;

 if (FUNC_7(VAR_7->dentry))
  goto out1;

 VAR_12 = -VAR_1;
 if (VAR_9.dentry != VAR_9.mnt->mnt_root)
  goto out1;

 if (VAR_9.mnt == VAR_9.mnt->mnt_parent)
  goto out1;

 if (FUNC_2(VAR_7->dentry->d_inode->i_mode) !=
       FUNC_2(VAR_9.dentry->d_inode->i_mode))
  goto out1;



 if (VAR_9.mnt->mnt_parent &&
     FUNC_1(VAR_9.mnt->mnt_parent))
  goto out1;




 if (FUNC_1(VAR_7->mnt) &&
     FUNC_14(VAR_9.mnt))
  goto out1;
 VAR_12 = -VAR_2;
 for (VAR_11 = VAR_7->mnt; VAR_11->mnt_parent != VAR_11; VAR_11 = VAR_11->mnt_parent)
  if (VAR_11 == VAR_9.mnt)
   goto out1;

 VAR_12 = FUNC_4(VAR_9.mnt, VAR_7, &VAR_10);
 if (VAR_12)
  goto out1;



 FUNC_10(&VAR_9.mnt->mnt_expire);
out1:
 FUNC_12(&VAR_7->dentry->d_inode->i_mutex);
out:
 FUNC_15(&VAR_6);
 if (!VAR_12)
  FUNC_13(&VAR_10);
 FUNC_13(&VAR_9);
 return VAR_12;
}
