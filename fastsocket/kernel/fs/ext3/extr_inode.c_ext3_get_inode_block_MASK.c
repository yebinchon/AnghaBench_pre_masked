
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext3_iloc {unsigned long block_group; unsigned long offset; } ;
struct ext3_group_desc {int bg_inode_table; } ;
typedef scalar_t__ ext3_fsblk_t ;


 int FUNC_0 (struct super_block*) ;
 unsigned long FUNC_1 (struct super_block*) ;
 unsigned long FUNC_2 (struct super_block*) ;
 unsigned long FUNC_3 (struct super_block*) ;
 struct ext3_group_desc* FUNC_4 (struct super_block*,unsigned long,int *) ;
 int FUNC_5 (struct super_block*,unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static ext3_fsblk_t FUNC_7(struct super_block *VAR_0,
  unsigned long VAR_1, struct ext3_iloc *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;
 ext3_fsblk_t VAR_5;
 struct ext3_group_desc *VAR_6;

 if (!FUNC_5(VAR_0, VAR_1)) {





  return 0;
 }

 VAR_3 = (VAR_1 - 1) / FUNC_2(VAR_0);
 VAR_6 = FUNC_4(VAR_0, VAR_3, ((void*)0));
 if (!VAR_6)
  return 0;



 VAR_4 = ((VAR_1 - 1) % FUNC_2(VAR_0)) *
  FUNC_3(VAR_0);
 VAR_5 = FUNC_6(VAR_6->bg_inode_table) +
  (VAR_4 >> FUNC_1(VAR_0));

 VAR_2->block_group = VAR_3;
 VAR_2->offset = VAR_4 & (FUNC_0(VAR_0) - 1);
 return VAR_5;
}
