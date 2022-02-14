
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fuse_conn {int ctl_ndents; struct dentry** ctl_dentry; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_6__ {TYPE_2__* s_root; } ;
struct TYPE_5__ {int d_inode; } ;
struct TYPE_4__ {int * i_private; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ) ;
 TYPE_3__* VAR_0 ;

void FUNC_3(struct fuse_conn *VAR_1)
{
 int VAR_2;

 if (!VAR_0)
  return;

 for (VAR_2 = VAR_1->ctl_ndents - 1; VAR_2 >= 0; VAR_2--) {
  struct dentry *VAR_3 = VAR_1->ctl_dentry[VAR_2];
  VAR_3->d_inode->i_private = ((void*)0);
  FUNC_0(VAR_3);
  FUNC_1(VAR_3);
 }
 FUNC_2(VAR_0->s_root->d_inode);
}
