
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int * d_fsdata; int * d_op; scalar_t__ d_inode; } ;


 int VAR_0 ;

int FUNC_0(struct dentry *VAR_1)
{
 return VAR_1 && VAR_1->d_inode &&
  VAR_1->d_op == &VAR_0 &&
  VAR_1->d_fsdata != ((void*)0);
}
