
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_dirt; } ;
struct ext2_sb_info {int dummy; } ;
struct ext2_group_desc {int bg_free_blocks_count; } ;
struct buffer_head {int dummy; } ;


 struct ext2_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct ext2_sb_info*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_0, int VAR_1,
 struct ext2_group_desc *VAR_2, struct buffer_head *VAR_3, int VAR_4)
{
 if (VAR_4) {
  struct ext2_sb_info *VAR_5 = FUNC_0(VAR_0);
  unsigned VAR_6;

  FUNC_5(FUNC_4(VAR_5, VAR_1));
  VAR_6 = FUNC_2(VAR_2->bg_free_blocks_count);
  VAR_2->bg_free_blocks_count = FUNC_1(VAR_6 + VAR_4);
  FUNC_6(FUNC_4(VAR_5, VAR_1));
  VAR_0->s_dirt = 1;
  FUNC_3(VAR_3);
 }
}
