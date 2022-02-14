
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct path {int dentry; int mnt; } ;


 struct vfsmount* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct vfsmount*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

struct vfsmount *FUNC_4(struct path *VAR_1)
{
 struct vfsmount *VAR_2;
 FUNC_2(&VAR_0);
 if ((VAR_2 = FUNC_0(VAR_1->mnt, VAR_1->dentry, 1)))
  FUNC_1(VAR_2);
 FUNC_3(&VAR_0);
 return VAR_2;
}
