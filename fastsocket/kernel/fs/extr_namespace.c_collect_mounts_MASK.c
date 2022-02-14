
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct path {int dentry; int mnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vfsmount* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

struct vfsmount *FUNC_3(struct path *VAR_3)
{
 struct vfsmount *VAR_4;
 FUNC_1(&VAR_2);
 VAR_4 = FUNC_0(VAR_3->mnt, VAR_3->dentry, VAR_0 | VAR_1);
 FUNC_2(&VAR_2);
 return VAR_4;
}
