
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {TYPE_1__* s_root; } ;
struct qstr {int len; int name; } ;
struct orlov_stats {unsigned int free_inodes; int used_dirs; int free_blocks; } ;
struct inode {int dummy; } ;
struct ext4_sb_info {int s_log_groups_per_flex; int s_hash_seed; int s_dirs_counter; int s_freeblocks_counter; int s_freeinodes_counter; } ;
struct ext4_group_desc {int dummy; } ;
struct dx_hash_info {int hash; int seed; int hash_version; } ;
typedef int grp ;
typedef int ext4_grpblk_t ;
typedef int ext4_group_t ;
typedef int ext4_fsblk_t ;
struct TYPE_4__ {int i_block_group; int i_last_alloc_group; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct super_block*) ;
 int VAR_1 ;
 struct ext4_sb_info* FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct ext4_sb_info*) ;
 unsigned int FUNC_7 (struct super_block*,struct ext4_group_desc*) ;
 struct ext4_group_desc* FUNC_8 (struct super_block*,int,int *) ;
 int FUNC_9 (struct super_block*) ;
 scalar_t__ FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (int ,int ,struct dx_hash_info*) ;
 int FUNC_12 (struct super_block*,int,int,struct orlov_stats*) ;
 int FUNC_13 (int*,int) ;
 void* FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct super_block *VAR_2, struct inode *VAR_3,
       ext4_group_t *VAR_4, int VAR_5,
       const struct qstr *VAR_6)
{
 ext4_group_t VAR_7 = FUNC_1(VAR_3)->i_block_group;
 struct ext4_sb_info *VAR_8 = FUNC_3(VAR_2);
 ext4_group_t VAR_9 = FUNC_9(VAR_2);
 int VAR_10 = FUNC_2(VAR_2);
 unsigned int VAR_11, VAR_12;
 ext4_fsblk_t VAR_13, VAR_14;
 unsigned int VAR_15;
 int VAR_16, VAR_17;
 ext4_grpblk_t VAR_18;
 ext4_group_t VAR_19, VAR_20, VAR_21, VAR_22;
 struct ext4_group_desc *VAR_23;
 struct orlov_stats VAR_24;
 int VAR_25 = FUNC_6(VAR_8);
 struct dx_hash_info VAR_26;

 VAR_22 = VAR_9;
 if (VAR_25 > 1) {
  VAR_22 = (VAR_9 + VAR_25 - 1) >>
   VAR_8->s_log_groups_per_flex;
  VAR_7 >>= VAR_8->s_log_groups_per_flex;
 }

 VAR_11 = FUNC_14(&VAR_8->s_freeinodes_counter);
 VAR_12 = VAR_11 / VAR_22;
 VAR_13 = FUNC_14(&VAR_8->s_freeblocks_counter);
 VAR_14 = VAR_13;
 FUNC_5(VAR_14, VAR_22);
 VAR_15 = FUNC_14(&VAR_8->s_dirs_counter);

 if (FUNC_4(VAR_5) &&
     ((VAR_3 == VAR_2->s_root->d_inode) ||
      (FUNC_10(VAR_3, VAR_1)))) {
  int VAR_27 = VAR_10;
  int VAR_28 = -1;

  if (VAR_6) {
   VAR_26.hash_version = VAR_0;
   VAR_26.seed = VAR_8->s_hash_seed;
   FUNC_11(VAR_6->name, VAR_6->len, &VAR_26);
   VAR_20 = VAR_26.hash;
  } else
   FUNC_13(&VAR_20, sizeof(VAR_20));
  VAR_7 = (unsigned)VAR_20 % VAR_22;
  for (VAR_19 = 0; VAR_19 < VAR_22; VAR_19++) {
   VAR_21 = (VAR_7 + VAR_19) % VAR_22;
   FUNC_12(VAR_2, VAR_21, VAR_25, &VAR_24);
   if (!VAR_24.free_inodes)
    continue;
   if (VAR_24.used_dirs >= VAR_27)
    continue;
   if (VAR_24.free_inodes < VAR_12)
    continue;
   if (VAR_24.free_blocks < VAR_14)
    continue;
   VAR_20 = VAR_21;
   VAR_28 = 0;
   VAR_27 = VAR_24.used_dirs;
  }
  if (VAR_28)
   goto fallback;
 found_flex_bg:
  if (VAR_25 == 1) {
   *VAR_4 = VAR_20;
   return 0;
  }
  VAR_20 *= VAR_25;
  for (VAR_19 = 0; VAR_19 < VAR_25; VAR_19++) {
   if (VAR_20+VAR_19 >= VAR_9)
    break;
   VAR_23 = FUNC_8(VAR_2, VAR_20+VAR_19, ((void*)0));
   if (VAR_23 && FUNC_7(VAR_2, VAR_23)) {
    *VAR_4 = VAR_20+VAR_19;
    return 0;
   }
  }
  goto fallback;
 }

 VAR_16 = VAR_15 / VAR_22 + VAR_10 / 16;
 VAR_17 = VAR_12 - VAR_10*VAR_25 / 4;
 if (VAR_17 < 1)
  VAR_17 = 1;
 VAR_18 = VAR_14 - FUNC_0(VAR_2)*VAR_25 / 4;





 if (FUNC_1(VAR_3)->i_last_alloc_group != ~0) {
  VAR_7 = FUNC_1(VAR_3)->i_last_alloc_group;
  if (VAR_25 > 1)
   VAR_7 >>= VAR_8->s_log_groups_per_flex;
 }

 for (VAR_19 = 0; VAR_19 < VAR_22; VAR_19++) {
  VAR_20 = (VAR_7 + VAR_19) % VAR_22;
  FUNC_12(VAR_2, VAR_20, VAR_25, &VAR_24);
  if (VAR_24.used_dirs >= VAR_16)
   continue;
  if (VAR_24.free_inodes < VAR_17)
   continue;
  if (VAR_24.free_blocks < VAR_18)
   continue;
  goto found_flex_bg;
 }

fallback:
 VAR_22 = VAR_9;
 VAR_12 = VAR_11 / VAR_22;
fallback_retry:
 VAR_7 = FUNC_1(VAR_3)->i_block_group;
 for (VAR_19 = 0; VAR_19 < VAR_22; VAR_19++) {
  VAR_20 = (VAR_7 + VAR_19) % VAR_22;
  VAR_23 = FUNC_8(VAR_2, VAR_20, ((void*)0));
  if (VAR_23 && FUNC_7(VAR_2, VAR_23) &&
      FUNC_7(VAR_2, VAR_23) >= VAR_12) {
   *VAR_4 = VAR_20;
   return 0;
  }
 }

 if (VAR_12) {




  VAR_12 = 0;
  goto fallback_retry;
 }

 return -1;
}
