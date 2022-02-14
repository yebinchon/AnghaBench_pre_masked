
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * mnt; } ;
struct TYPE_4__ {TYPE_3__* dentry; } ;
struct nameidata {TYPE_2__ root; TYPE_1__ path; } ;
struct filename {int name; } ;
struct TYPE_6__ {scalar_t__ d_inode; } ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct filename*,TYPE_3__*,unsigned int) ;
 int FUNC_2 (int,int ,unsigned int,struct nameidata*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct filename*,struct nameidata*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(int VAR_1, struct filename *VAR_2,
    unsigned int VAR_3, struct nameidata *VAR_4)
{
 int VAR_5 = FUNC_2(VAR_1, VAR_2->name, VAR_3, VAR_4);
 if (!VAR_5)
  VAR_5 = FUNC_4(VAR_2, VAR_4);
 if (FUNC_5(!VAR_5 && !FUNC_0() && VAR_4->path.dentry &&
    VAR_4->path.dentry->d_inode))
  FUNC_1(VAR_2, VAR_4->path.dentry, VAR_3 & VAR_0);
 if (VAR_4->root.mnt) {
  FUNC_3(&VAR_4->root);
  VAR_4->root.mnt = ((void*)0);
 }
 return VAR_5;
}
