
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vfsmount {int mnt_root; } ;
struct path {TYPE_2__* dentry; struct vfsmount* mnt; } ;
struct TYPE_7__ {TYPE_1__* d_op; int d_flags; } ;
struct TYPE_6__ {int (* d_manage ) (TYPE_2__*,int) ;} ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 struct vfsmount* FUNC_4 (struct path*) ;
 unsigned int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct vfsmount*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (unsigned int) ;

int FUNC_9(struct path *VAR_4, bool VAR_5)
{
 unsigned VAR_6;
 int VAR_7;

 while (VAR_6 = FUNC_0(VAR_4->dentry->d_flags)|
  FUNC_5(VAR_4->dentry),
        FUNC_8(VAR_6 & VAR_0)) {
  if (VAR_6 & VAR_1) {
   FUNC_1(!VAR_4->dentry->d_op);
   FUNC_1(!VAR_4->dentry->d_op->d_manage);
   VAR_7 = VAR_4->dentry->d_op->d_manage(VAR_4->dentry, VAR_5);
   if (VAR_7 < 0)
    return VAR_7 == -VAR_3 ? 0 : VAR_7;
  }


  if (VAR_6 & VAR_2) {
   struct vfsmount *VAR_8 = FUNC_4(VAR_4);
   if (!VAR_8)
    break;
   FUNC_3(VAR_4->dentry);
   FUNC_6(VAR_4->mnt);
   VAR_4->mnt = VAR_8;
   VAR_4->dentry = FUNC_2(VAR_8->mnt_root);
   continue;
  }


  break;
 }
 return 0;
}
