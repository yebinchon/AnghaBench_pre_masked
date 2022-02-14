
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {scalar_t__ mnt_root; } ;
struct path {scalar_t__ dentry; struct vfsmount* mnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vfsmount*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vfsmount*,int) ;
 int VAR_5 ;
 struct vfsmount* FUNC_4 (struct vfsmount*,struct vfsmount*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(struct path *VAR_7, int VAR_8)
{
 struct vfsmount *VAR_9, *VAR_10 = VAR_7->mnt;
 int VAR_11 = VAR_8 & VAR_3;
 int VAR_12 = VAR_8 & ~VAR_3;
 int VAR_13 = 0;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 if (VAR_7->dentry != VAR_7->mnt->mnt_root)
  return -VAR_1;

 FUNC_2(&VAR_5);
 if (VAR_12 == VAR_4) {
  VAR_13 = FUNC_3(VAR_10, VAR_11);
  if (VAR_13)
   goto out_unlock;
 }

 FUNC_5(&VAR_6);
 for (VAR_9 = VAR_10; VAR_9; VAR_9 = (VAR_11 ? FUNC_4(VAR_9, VAR_10) : ((void*)0)))
  FUNC_1(VAR_9, VAR_12);
 FUNC_6(&VAR_6);

 out_unlock:
 FUNC_7(&VAR_5);
 return VAR_13;
}
