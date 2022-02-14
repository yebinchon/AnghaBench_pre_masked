
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct config_item {struct dentry* ci_dentry; TYPE_1__* ci_parent; } ;
struct TYPE_6__ {TYPE_2__* mnt_sb; } ;
struct TYPE_5__ {struct dentry* s_root; } ;
struct TYPE_4__ {struct dentry* ci_dentry; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (struct config_item*,struct dentry*,struct dentry*) ;

__attribute__((used)) static int FUNC_2(struct config_item * VAR_2, struct dentry *VAR_3)
{
 struct dentry * VAR_4;
 int VAR_5 = 0;

 FUNC_0(!VAR_2);

 if (VAR_2->ci_parent)
  VAR_4 = VAR_2->ci_parent->ci_dentry;
 else if (VAR_1 && VAR_1->mnt_sb)
  VAR_4 = VAR_1->mnt_sb->s_root;
 else
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_2,VAR_4,VAR_3);
 if (!VAR_5)
  VAR_2->ci_dentry = VAR_3;
 return VAR_5;
}
