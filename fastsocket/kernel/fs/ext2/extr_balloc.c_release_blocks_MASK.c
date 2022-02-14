
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_dirt; } ;
struct ext2_sb_info {int s_freeblocks_counter; } ;


 struct ext2_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct super_block *VAR_0, int VAR_1)
{
 if (VAR_1) {
  struct ext2_sb_info *VAR_2 = FUNC_0(VAR_0);

  FUNC_1(&VAR_2->s_freeblocks_counter, VAR_1);
  VAR_0->s_dirt = 1;
 }
}
