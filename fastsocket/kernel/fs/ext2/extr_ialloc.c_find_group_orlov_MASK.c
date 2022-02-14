
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {TYPE_1__* s_root; } ;
struct inode {int dummy; } ;
struct ext2_super_block {int s_blocks_count; } ;
struct ext2_sb_info {int s_groups_count; int* s_debts; int s_dirs_counter; int s_freeblocks_counter; int s_freeinodes_counter; struct ext2_super_block* s_es; } ;
struct ext2_group_desc {int bg_free_inodes_count; int bg_free_blocks_count; int bg_used_dirs_count; } ;
typedef int group ;
struct TYPE_4__ {int i_block_group; int i_flags; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct super_block*) ;
 struct ext2_sb_info* FUNC_3 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ext2_group_desc* FUNC_4 (struct super_block*,int,int *) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_3, struct inode *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_4)->i_block_group;
 struct ext2_sb_info *VAR_6 = FUNC_3(VAR_3);
 struct ext2_super_block *VAR_7 = VAR_6->s_es;
 int VAR_8 = VAR_6->s_groups_count;
 int VAR_9 = FUNC_2(VAR_3);
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20 = -1, VAR_21;
 struct ext2_group_desc *VAR_22;

 VAR_10 = FUNC_9(&VAR_6->s_freeinodes_counter);
 VAR_11 = VAR_10 / VAR_8;
 VAR_12 = FUNC_9(&VAR_6->s_freeblocks_counter);
 VAR_13 = VAR_12 / VAR_8;
 VAR_15 = FUNC_9(&VAR_6->s_dirs_counter);

 if ((VAR_4 == VAR_3->s_root->d_inode) ||
     (FUNC_1(VAR_4)->i_flags & VAR_1)) {
  struct ext2_group_desc *VAR_23 = ((void*)0);
  int VAR_24 = VAR_9;
  int VAR_25 = -1;

  FUNC_5(&VAR_20, sizeof(VAR_20));
  VAR_5 = (unsigned)VAR_20 % VAR_8;
  for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++) {
   VAR_20 = (VAR_5 + VAR_21) % VAR_8;
   VAR_22 = FUNC_4 (VAR_3, VAR_20, ((void*)0));
   if (!VAR_22 || !VAR_22->bg_free_inodes_count)
    continue;
   if (FUNC_6(VAR_22->bg_used_dirs_count) >= VAR_24)
    continue;
   if (FUNC_6(VAR_22->bg_free_inodes_count) < VAR_11)
    continue;
   if (FUNC_6(VAR_22->bg_free_blocks_count) < VAR_13)
    continue;
   VAR_25 = VAR_20;
   VAR_24 = FUNC_6(VAR_22->bg_used_dirs_count);
   VAR_23 = VAR_22;
  }
  if (VAR_25 >= 0) {
   VAR_22 = VAR_23;
   VAR_20 = VAR_25;
   goto found;
  }
  goto fallback;
 }

 if (VAR_15 == 0)
  VAR_15 = 1;

 VAR_14 = (FUNC_7(VAR_7->s_blocks_count)-VAR_12) / VAR_15;

 VAR_17 = VAR_15 / VAR_8 + VAR_9 / 16;
 VAR_19 = VAR_11 - VAR_9 / 4;
 VAR_18 = VAR_13 - FUNC_0(VAR_3) / 4;

 VAR_16 = FUNC_0(VAR_3) / FUNC_8(VAR_14, VAR_0);
 if (VAR_16 * VAR_2 > VAR_9)
  VAR_16 = VAR_9 / VAR_2;
 if (VAR_16 > 255)
  VAR_16 = 255;
 if (VAR_16 == 0)
  VAR_16 = 1;

 for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++) {
  VAR_20 = (VAR_5 + VAR_21) % VAR_8;
  VAR_22 = FUNC_4 (VAR_3, VAR_20, ((void*)0));
  if (!VAR_22 || !VAR_22->bg_free_inodes_count)
   continue;
  if (VAR_6->s_debts[VAR_20] >= VAR_16)
   continue;
  if (FUNC_6(VAR_22->bg_used_dirs_count) >= VAR_17)
   continue;
  if (FUNC_6(VAR_22->bg_free_inodes_count) < VAR_19)
   continue;
  if (FUNC_6(VAR_22->bg_free_blocks_count) < VAR_18)
   continue;
  goto found;
 }

fallback:
 for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++) {
  VAR_20 = (VAR_5 + VAR_21) % VAR_8;
  VAR_22 = FUNC_4 (VAR_3, VAR_20, ((void*)0));
  if (!VAR_22 || !VAR_22->bg_free_inodes_count)
   continue;
  if (FUNC_6(VAR_22->bg_free_inodes_count) >= VAR_11)
   goto found;
 }

 if (VAR_11) {




  VAR_11 = 0;
  goto fallback;
 }

 return -1;

found:
 return VAR_20;
}
