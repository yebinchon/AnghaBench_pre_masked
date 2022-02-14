
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext2_block_alloc_info {int dummy; } ;
struct TYPE_2__ {struct ext2_block_alloc_info* i_block_alloc_info; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ext2_block_alloc_info*) ;
 scalar_t__ FUNC_3 (struct ext2_block_alloc_info*) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_0)
{
 struct ext2_block_alloc_info *VAR_1 = FUNC_0(VAR_0)->i_block_alloc_info;
 FUNC_1(VAR_0);
 FUNC_0(VAR_0)->i_block_alloc_info = ((void*)0);
 if (FUNC_3(VAR_1))
  FUNC_2(VAR_1);
}
