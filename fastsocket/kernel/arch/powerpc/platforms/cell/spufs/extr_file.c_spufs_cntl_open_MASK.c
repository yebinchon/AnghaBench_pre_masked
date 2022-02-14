
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spufs_inode_info {int i_openers; struct spu_context* i_ctx; } ;
struct spu_context {int mapping_lock; int cntl; } ;
struct inode {int i_mapping; } ;
struct file {struct spu_context* private_data; } ;


 struct spufs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*,struct file*,int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 struct spufs_inode_info *VAR_4 = FUNC_0(VAR_2);
 struct spu_context *VAR_5 = VAR_4->i_ctx;

 FUNC_1(&VAR_5->mapping_lock);
 VAR_3->private_data = VAR_5;
 if (!VAR_4->i_openers++)
  VAR_5->cntl = VAR_2->i_mapping;
 FUNC_2(&VAR_5->mapping_lock);
 return FUNC_3(VAR_2, VAR_3, VAR_0,
     VAR_1, "0x%08lx");
}
