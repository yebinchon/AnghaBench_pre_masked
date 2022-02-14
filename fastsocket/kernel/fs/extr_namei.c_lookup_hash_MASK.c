
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* dentry; } ;
struct nameidata {TYPE_1__ path; int last; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {int d_inode; } ;


 struct dentry* FUNC_0 (int) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (int *,TYPE_2__*,struct nameidata*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static struct dentry *FUNC_3(struct nameidata *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->path.dentry->d_inode, VAR_0);
 if (VAR_2)
  return FUNC_0(VAR_2);
 return FUNC_1(&VAR_1->last, VAR_1->path.dentry, VAR_1);
}
