
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct TYPE_3__ {struct vfsmount* mnt; struct dentry* dentry; } ;
struct nameidata {unsigned int flags; TYPE_1__ root; TYPE_1__ path; scalar_t__ depth; int last_type; } ;
struct filename {char const* name; } ;
struct dentry {scalar_t__ d_inode; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct filename*,struct dentry*,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct filename*,struct nameidata*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct dentry *VAR_2, struct vfsmount *VAR_3,
      const char *VAR_4, unsigned int VAR_5,
      struct nameidata *VAR_6)
{
 int VAR_7;
 struct filename VAR_8 = { .name = VAR_4 };


 VAR_6->last_type = VAR_0;
 VAR_6->flags = VAR_5;
 VAR_6->depth = 0;

 VAR_6->path.dentry = VAR_2;
 VAR_6->path.mnt = VAR_3;
 FUNC_2(&VAR_6->path);
 VAR_6->root = VAR_6->path;
 FUNC_2(&VAR_6->root);

 VAR_7 = FUNC_4(&VAR_8, VAR_6);
 if (FUNC_5(!VAR_7 && !FUNC_0() && VAR_6->path.dentry &&
    VAR_6->path.dentry->d_inode))
  FUNC_1(&VAR_8, VAR_6->path.dentry, VAR_5 & VAR_1);

 FUNC_3(&VAR_6->root);
 VAR_6->root.mnt = ((void*)0);

 return VAR_7;
}
