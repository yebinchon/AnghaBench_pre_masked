
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct TYPE_2__ {struct vfsmount* mnt; struct dentry* dentry; } ;
struct nameidata {TYPE_1__ path; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct dentry*) ;
 struct vfsmount* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*,struct dentry*,int,struct nameidata*) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_0,
    struct dentry *VAR_1, int VAR_2,
    struct nameidata *VAR_3)
{
 struct dentry *VAR_4 = FUNC_0(VAR_1);
 struct vfsmount *VAR_5 = FUNC_1(VAR_1);
 struct dentry *VAR_6;
 struct vfsmount *VAR_7;
 int VAR_8;

 VAR_6 = VAR_3->path.dentry;
 VAR_7 = VAR_3->path.mnt;
 VAR_3->path.dentry = VAR_4;
 VAR_3->path.mnt = VAR_5;
 VAR_8 = FUNC_2(VAR_0, VAR_4, VAR_2, VAR_3);
 VAR_3->path.dentry = VAR_6;
 VAR_3->path.mnt = VAR_7;
 return VAR_8;
}
