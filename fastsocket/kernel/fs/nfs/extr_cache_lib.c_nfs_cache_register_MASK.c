
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int mnt_root; } ;
struct TYPE_2__ {int dentry; } ;
struct nameidata {TYPE_1__ path; } ;
struct cache_detail {int name; } ;


 scalar_t__ FUNC_0 (struct vfsmount*) ;
 int FUNC_1 (struct vfsmount*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct vfsmount* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int,struct cache_detail*) ;
 int FUNC_6 (int ,struct vfsmount*,char*,int ,struct nameidata*) ;

int FUNC_7(struct cache_detail *VAR_0)
{
 struct nameidata VAR_1;
 struct vfsmount *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3();
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);
 VAR_3 = FUNC_6(VAR_2->mnt_root, VAR_2, "/cache", 0, &VAR_1);
 if (VAR_3)
  goto err;
 VAR_3 = FUNC_5(VAR_1.path.dentry,
   VAR_0->name, 0600, VAR_0);
 FUNC_2(&VAR_1.path);
 if (!VAR_3)
  return VAR_3;
err:
 FUNC_4();
 return VAR_3;
}
