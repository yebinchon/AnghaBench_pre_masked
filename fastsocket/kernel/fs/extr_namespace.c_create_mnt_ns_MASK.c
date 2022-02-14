
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_list; struct mnt_namespace* mnt_ns; } ;
struct mnt_namespace {struct vfsmount* root; int list; } ;


 int FUNC_0 (struct mnt_namespace*) ;
 struct mnt_namespace* FUNC_1 () ;
 int FUNC_2 (int *,int *) ;

struct mnt_namespace *FUNC_3(struct vfsmount *VAR_0)
{
 struct mnt_namespace *VAR_1;

 VAR_1 = FUNC_1();
 if (!FUNC_0(VAR_1)) {
  VAR_0->mnt_ns = VAR_1;
  VAR_1->root = VAR_0;
  FUNC_2(&VAR_1->list, &VAR_1->root->mnt_list);
 }
 return VAR_1;
}
