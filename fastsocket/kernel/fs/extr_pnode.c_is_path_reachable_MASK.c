
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {struct vfsmount* mnt_parent; struct dentry* mnt_mountpoint; } ;
struct path {int dentry; struct vfsmount* mnt; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*,int ) ;

__attribute__((used)) static bool FUNC_1(struct vfsmount *VAR_0, struct dentry *VAR_1,
    const struct path *VAR_2)
{
 while (VAR_0 != VAR_2->mnt && VAR_0->mnt_parent != VAR_0) {
  VAR_1 = VAR_0->mnt_mountpoint;
  VAR_0 = VAR_0->mnt_parent;
 }
 return VAR_0 == VAR_2->mnt && FUNC_0(VAR_1, VAR_2->dentry);
}
