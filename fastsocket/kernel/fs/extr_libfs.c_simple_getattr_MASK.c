
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct kstat {int blocks; } ;
struct inode {TYPE_1__* i_mapping; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int nrpages; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct kstat*) ;

int FUNC_1(struct vfsmount *VAR_1, struct dentry *VAR_2,
     struct kstat *VAR_3)
{
 struct inode *VAR_4 = VAR_2->d_inode;
 FUNC_0(VAR_4, VAR_3);
 VAR_3->blocks = VAR_4->i_mapping->nrpages << (VAR_0 - 9);
 return 0;
}
