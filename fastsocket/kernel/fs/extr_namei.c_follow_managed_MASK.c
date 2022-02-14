
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vfsmount {int mnt_root; } ;
struct path {struct vfsmount* mnt; TYPE_2__* dentry; } ;
struct TYPE_7__ {TYPE_1__* d_op; int d_flags; } ;
struct TYPE_6__ {int (* d_manage ) (TYPE_2__*,int) ;} ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct path*,unsigned int,int*) ;
 struct vfsmount* FUNC_5 (struct path*) ;
 unsigned int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct vfsmount*) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct path *VAR_5, unsigned VAR_6)
{
 struct vfsmount *VAR_7 = VAR_5->mnt;
 unsigned VAR_8;
 bool VAR_9 = 0;
 int VAR_10 = 0;




 while (VAR_8 = FUNC_0(VAR_5->dentry->d_flags)|
  FUNC_6(VAR_5->dentry),
        VAR_8 &= VAR_0,
        FUNC_9(VAR_8 != 0)) {


  if (VAR_8 & VAR_1) {
   FUNC_1(!VAR_5->dentry->d_op);
   FUNC_1(!VAR_5->dentry->d_op->d_manage);
   VAR_10 = VAR_5->dentry->d_op->d_manage(VAR_5->dentry, 0);
   if (VAR_10 < 0)
    break;
  }


  if (VAR_8 & VAR_2) {
   struct vfsmount *VAR_11 = FUNC_5(VAR_5);
   if (VAR_11) {
    FUNC_3(VAR_5->dentry);
    if (VAR_9)
     FUNC_7(VAR_5->mnt);
    VAR_5->mnt = VAR_11;
    VAR_5->dentry = FUNC_2(VAR_11->mnt_root);
    VAR_9 = 1;
    continue;
   }





  }


  if (VAR_8 & VAR_3) {
   VAR_10 = FUNC_4(VAR_5, VAR_6, &VAR_9);
   if (VAR_10 < 0)
    break;
   continue;
  }


  break;
 }

 if (VAR_9 && VAR_5->mnt == VAR_7)
  FUNC_7(VAR_5->mnt);
 if (VAR_10 == -VAR_4)
  VAR_10 = 0;
 return VAR_10;
}
