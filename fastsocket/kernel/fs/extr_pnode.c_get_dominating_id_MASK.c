
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_group_id; int mnt_ns; struct vfsmount* mnt_master; } ;
struct path {int dummy; } ;


 struct vfsmount* FUNC_0 (struct vfsmount*,int ,struct path const*) ;

int FUNC_1(struct vfsmount *VAR_0, const struct path *VAR_1)
{
 struct vfsmount *VAR_2;

 for (VAR_2 = VAR_0->mnt_master; VAR_2 != ((void*)0); VAR_2 = VAR_2->mnt_master) {
  struct vfsmount *VAR_3 = FUNC_0(VAR_2, VAR_0->mnt_ns, VAR_1);
  if (VAR_3)
   return VAR_3->mnt_group_id;
 }

 return 0;
}
