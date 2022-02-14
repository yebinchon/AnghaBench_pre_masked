
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spufs_inode_info {struct spu_context* i_ctx; } ;
struct spu_context {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct spu_context* private_data; } ;


 struct spufs_inode_info* FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct spufs_inode_info *VAR_2 = FUNC_0(VAR_0);
 struct spu_context *VAR_3 = VAR_2->i_ctx;
 VAR_1->private_data = VAR_3;
 return 0;
}
