
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_root; struct mnt_namespace* mnt_ns; } ;
struct path {int dummy; } ;
struct mnt_namespace {int dummy; } ;


 scalar_t__ FUNC_0 (struct vfsmount*,int ,struct path const*) ;
 struct vfsmount* FUNC_1 (struct vfsmount*) ;

__attribute__((used)) static struct vfsmount *FUNC_2(struct vfsmount *VAR_0,
         struct mnt_namespace *VAR_1,
         const struct path *VAR_2)
{
 struct vfsmount *VAR_3 = VAR_0;

 do {

  if (VAR_3->mnt_ns == VAR_1 && FUNC_0(VAR_3, VAR_3->mnt_root, VAR_2))
   return VAR_3;

  VAR_3 = FUNC_1(VAR_3);
 } while (VAR_3 != VAR_0);

 return ((void*)0);
}
