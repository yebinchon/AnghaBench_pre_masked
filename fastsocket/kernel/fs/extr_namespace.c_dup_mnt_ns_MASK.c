
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {struct mnt_namespace* mnt_ns; int mnt_list; int mnt_root; } ;
struct mnt_namespace {struct vfsmount* root; int list; } ;
struct TYPE_4__ {struct vfsmount* mnt; } ;
struct TYPE_3__ {struct vfsmount* mnt; } ;
struct fs_struct {TYPE_2__ pwd; TYPE_1__ root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mnt_namespace* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mnt_namespace*) ;
 struct mnt_namespace* FUNC_2 () ;
 struct vfsmount* FUNC_3 (struct vfsmount*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mnt_namespace*) ;
 int FUNC_6 (int *,int *) ;
 void* FUNC_7 (struct vfsmount*) ;
 int FUNC_8 (struct vfsmount*) ;
 int VAR_3 ;
 struct vfsmount* FUNC_9 (struct vfsmount*,struct vfsmount*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_4 ;

__attribute__((used)) static struct mnt_namespace *FUNC_13(struct mnt_namespace *VAR_5,
  struct fs_struct *VAR_6)
{
 struct mnt_namespace *VAR_7;
 struct vfsmount *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 struct vfsmount *VAR_10, *VAR_11;

 VAR_7 = FUNC_2();
 if (FUNC_1(VAR_7))
  return VAR_7;

 FUNC_4(&VAR_3);

 VAR_7->root = FUNC_3(VAR_5->root, VAR_5->root->mnt_root,
     VAR_0 | VAR_1);
 if (!VAR_7->root) {
  FUNC_12(&VAR_3);
  FUNC_5(VAR_5);
  return FUNC_0(-VAR_2);
 }
 FUNC_10(&VAR_4);
 FUNC_6(&VAR_7->list, &VAR_7->root->mnt_list);
 FUNC_11(&VAR_4);






 VAR_10 = VAR_5->root;
 VAR_11 = VAR_7->root;
 while (VAR_10) {
  VAR_11->mnt_ns = VAR_7;
  if (VAR_6) {
   if (VAR_10 == VAR_6->root.mnt) {
    VAR_8 = VAR_10;
    VAR_6->root.mnt = FUNC_7(VAR_11);
   }
   if (VAR_10 == VAR_6->pwd.mnt) {
    VAR_9 = VAR_10;
    VAR_6->pwd.mnt = FUNC_7(VAR_11);
   }
  }
  VAR_10 = FUNC_9(VAR_10, VAR_5->root);
  VAR_11 = FUNC_9(VAR_11, VAR_7->root);
 }
 FUNC_12(&VAR_3);

 if (VAR_8)
  FUNC_8(VAR_8);
 if (VAR_9)
  FUNC_8(VAR_9);

 return VAR_7;
}
