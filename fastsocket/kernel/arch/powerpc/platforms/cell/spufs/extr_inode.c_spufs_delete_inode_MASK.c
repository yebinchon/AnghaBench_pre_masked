
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spufs_inode_info {scalar_t__ i_gang; scalar_t__ i_ctx; } ;
struct inode {int dummy; } ;


 struct spufs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct inode *VAR_0)
{
 struct spufs_inode_info *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->i_ctx)
  FUNC_2(VAR_1->i_ctx);
 if (VAR_1->i_gang)
  FUNC_3(VAR_1->i_gang);
 FUNC_1(VAR_0);
}
