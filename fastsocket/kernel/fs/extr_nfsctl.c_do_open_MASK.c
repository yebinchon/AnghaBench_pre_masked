
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int mnt_root; } ;
struct TYPE_3__ {int mnt; int dentry; } ;
struct nameidata {TYPE_1__ path; } ;
struct file {int dummy; } ;


 struct file* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct vfsmount*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 struct file* FUNC_3 (int ,int ,int,int ) ;
 struct vfsmount* FUNC_4 (char*,int ,char*,int *) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (struct vfsmount*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,struct vfsmount*,char*,int ,struct nameidata*) ;

__attribute__((used)) static struct file *FUNC_9(char *VAR_3, int VAR_4)
{
 struct nameidata VAR_5;
 struct vfsmount *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4("nfsd", 0, "nfsd", ((void*)0));
 if (FUNC_1(VAR_6))
  return (struct file *)VAR_6;

 VAR_7 = FUNC_8(VAR_6->mnt_root, VAR_6, VAR_3, 0, &VAR_5);
 FUNC_6(VAR_6);
 if (VAR_7)
  return FUNC_0(VAR_7);

 if (VAR_4 == VAR_2)
  VAR_7 = FUNC_5(&VAR_5.path, VAR_0|VAR_1, VAR_4);
 else
  VAR_7 = FUNC_5(&VAR_5.path, VAR_1, VAR_4);

 if (!VAR_7)
  return FUNC_3(VAR_5.path.dentry, VAR_5.path.mnt, VAR_4,
       FUNC_2());

 FUNC_7(&VAR_5.path);
 return FUNC_0(VAR_7);
}
