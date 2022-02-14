
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_mountpoint; int mnt_parent; } ;
struct dentry {int d_mounted; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct vfsmount*) ;

void FUNC_2(struct vfsmount *VAR_0, struct dentry *VAR_1,
   struct vfsmount *VAR_2)
{
 VAR_2->mnt_parent = FUNC_1(VAR_0);
 VAR_2->mnt_mountpoint = FUNC_0(VAR_1);
 VAR_1->d_mounted++;
}
