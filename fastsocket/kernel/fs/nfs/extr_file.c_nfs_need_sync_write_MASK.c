
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int flags; } ;
struct inode {int dummy; } ;
struct file {int f_flags; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nfs_open_context* FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, struct inode *VAR_3)
{
 struct nfs_open_context *VAR_4;

 if (FUNC_0(VAR_3) || (VAR_2->f_flags & VAR_1))
  return 1;
 VAR_4 = FUNC_1(VAR_2);
 if (FUNC_2(VAR_0, &VAR_4->flags))
  return 1;
 return 0;
}
