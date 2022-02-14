
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {scalar_t__ mnt_sb; scalar_t__ mnt_root; int mnt_expire; int mnt_count; } ;
struct path {scalar_t__ dentry; TYPE_1__* mnt; } ;
struct TYPE_2__ {scalar_t__ mnt_sb; int mnt_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vfsmount*,struct path*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vfsmount*) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;

int FUNC_10(struct vfsmount *VAR_4, struct path *VAR_5)
{
 int VAR_6;



 FUNC_0(FUNC_2(&VAR_4->mnt_count) < 2);

 if (VAR_4->mnt_sb == VAR_5->mnt->mnt_sb &&
     VAR_4->mnt_root == VAR_5->dentry) {
  VAR_6 = -VAR_0;
  goto fail;
 }

 VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_5->mnt->mnt_flags | VAR_1);
 if (!VAR_6)
  return 0;
fail:

 if (!FUNC_5(&VAR_4->mnt_expire)) {
  FUNC_3(&VAR_2);
  FUNC_7(&VAR_3);
  FUNC_4(&VAR_4->mnt_expire);
  FUNC_8(&VAR_3);
  FUNC_9(&VAR_2);
 }
 FUNC_6(VAR_4);
 FUNC_6(VAR_4);
 return VAR_6;
}
