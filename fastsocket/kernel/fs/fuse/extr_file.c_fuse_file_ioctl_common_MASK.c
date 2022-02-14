
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_conn {int dummy; } ;
struct file {TYPE_1__* f_dentry; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (struct fuse_conn*) ;
 long FUNC_1 (struct file*,unsigned int,unsigned long,unsigned int) ;
 struct fuse_conn* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;

__attribute__((used)) static long FUNC_4(struct file *VAR_2, unsigned int VAR_3,
       unsigned long VAR_4, unsigned int VAR_5)
{
 struct inode *VAR_6 = VAR_2->f_dentry->d_inode;
 struct fuse_conn *VAR_7 = FUNC_2(VAR_6);

 if (!FUNC_0(VAR_7))
  return -VAR_0;

 if (FUNC_3(VAR_6))
  return -VAR_1;

 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
