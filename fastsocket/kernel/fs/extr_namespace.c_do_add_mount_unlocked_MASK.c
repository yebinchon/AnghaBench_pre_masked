
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfsmount {scalar_t__ mnt_sb; int mnt_flags; TYPE_2__* mnt_root; } ;
struct path {scalar_t__ dentry; TYPE_3__* mnt; } ;
struct TYPE_6__ {scalar_t__ mnt_sb; scalar_t__ mnt_root; int mnt_ns; } ;
struct TYPE_5__ {TYPE_1__* d_inode; } ;
struct TYPE_4__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct path*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct vfsmount*,struct path*) ;

__attribute__((used)) static int FUNC_4(struct vfsmount *VAR_3, struct path *VAR_4, int VAR_5)
{
 int VAR_6;


 VAR_6 = FUNC_1(VAR_4, 1);
 if (VAR_6 < 0)
  goto unlock;

 VAR_6 = -VAR_1;
 if (!(VAR_5 & VAR_2) && !FUNC_2(VAR_4->mnt))
  goto unlock;


        if (!VAR_4->mnt->mnt_ns)
                goto unlock;


 VAR_6 = -VAR_0;
 if (VAR_4->mnt->mnt_sb == VAR_3->mnt_sb &&
     VAR_4->mnt->mnt_root == VAR_4->dentry)
  goto unlock;

 VAR_6 = -VAR_1;
 if (FUNC_0(VAR_3->mnt_root->d_inode->i_mode))
  goto unlock;

 VAR_3->mnt_flags = VAR_5;
 VAR_6 = FUNC_3(VAR_3, VAR_4);

unlock:
 return VAR_6;
}
