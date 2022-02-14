
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int mnt_hash; int mnt_child; TYPE_1__* mnt_root; TYPE_1__* mnt_mountpoint; struct vfsmount* mnt_parent; } ;
struct path {TYPE_1__* dentry; struct vfsmount* mnt; } ;
struct TYPE_2__ {int d_mounted; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vfsmount *VAR_0, struct path *VAR_1)
{
 VAR_1->dentry = VAR_0->mnt_mountpoint;
 VAR_1->mnt = VAR_0->mnt_parent;
 VAR_0->mnt_parent = VAR_0;
 VAR_0->mnt_mountpoint = VAR_0->mnt_root;
 FUNC_0(&VAR_0->mnt_child);
 FUNC_0(&VAR_0->mnt_hash);
 VAR_1->dentry->d_mounted--;
}
