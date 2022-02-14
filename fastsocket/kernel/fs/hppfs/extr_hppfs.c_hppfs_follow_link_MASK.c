
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct dentry {TYPE_3__* d_inode; } ;
struct TYPE_6__ {TYPE_1__* i_op; } ;
struct TYPE_5__ {struct dentry* proc_dentry; } ;
struct TYPE_4__ {void* (* follow_link ) (struct dentry*,struct nameidata*) ;} ;


 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 void* FUNC_1 (struct dentry*,struct nameidata*) ;

__attribute__((used)) static void *FUNC_2(struct dentry *VAR_0, struct nameidata *VAR_1)
{
 struct dentry *VAR_2;

 VAR_2 = FUNC_0(VAR_0->d_inode)->proc_dentry;

 return VAR_2->d_inode->i_op->follow_link(VAR_2, VAR_1);
}
