
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 scalar_t__ FUNC_0 (struct inode*) ;

__attribute__((used)) static int
FUNC_1(struct dentry * VAR_0)
{
 struct inode *VAR_1 = VAR_0->d_inode;

 if (VAR_1) {
  if (FUNC_0(VAR_1))
   return 1;
 } else
 {

 }
 return 0;
}
