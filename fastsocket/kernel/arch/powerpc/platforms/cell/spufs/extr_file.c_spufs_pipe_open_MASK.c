
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spufs_inode_info {int i_ctx; } ;
struct inode {int dummy; } ;
struct file {int private_data; } ;


 struct spufs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct spufs_inode_info *VAR_2 = FUNC_0(VAR_0);
 VAR_1->private_data = VAR_2->i_ctx;

 return FUNC_1(VAR_0, VAR_1);
}
