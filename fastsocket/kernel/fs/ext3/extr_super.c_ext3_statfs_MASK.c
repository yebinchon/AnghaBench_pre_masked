
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int s_blocksize; } ;
struct TYPE_2__ {int* val; } ;
struct kstatfs {scalar_t__ f_bfree; TYPE_1__ f_fsid; int f_namelen; void* f_ffree; scalar_t__ f_files; scalar_t__ f_bavail; scalar_t__ f_blocks; int f_bsize; int f_type; } ;
struct ext3_super_block {scalar_t__ s_uuid; int s_inodes_count; int s_r_blocks_count; int s_blocks_count; int s_first_data_block; } ;
struct ext3_sb_info {scalar_t__ s_overhead_last; scalar_t__ s_blocks_last; unsigned long s_groups_count; int s_itb_per_group; int s_freeinodes_counter; int s_freeblocks_counter; struct ext3_super_block* s_es; } ;
struct dentry {struct super_block* d_sb; } ;
typedef scalar_t__ ext3_fsblk_t ;


 int VAR_0 ;
 struct ext3_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct super_block*,unsigned long) ;
 scalar_t__ FUNC_3 (struct super_block*,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_10 (struct dentry * VAR_3, struct kstatfs * VAR_4)
{
 struct super_block *VAR_5 = VAR_3->d_sb;
 struct ext3_sb_info *VAR_6 = FUNC_0(VAR_5);
 struct ext3_super_block *VAR_7 = VAR_6->s_es;
 u64 VAR_8;

 if (FUNC_9(VAR_5, VAR_2)) {
  VAR_6->s_overhead_last = 0;
 } else if (VAR_6->s_blocks_last != FUNC_4(VAR_7->s_blocks_count)) {
  unsigned long VAR_9 = VAR_6->s_groups_count, VAR_10;
  ext3_fsblk_t VAR_11 = 0;
  FUNC_7();
  VAR_11 = FUNC_4(VAR_7->s_first_data_block);






  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
   VAR_11 += FUNC_2(VAR_5, VAR_10) +
    FUNC_3(VAR_5, VAR_10);
   FUNC_1();
  }





  VAR_11 += VAR_9 * (2 + VAR_6->s_itb_per_group);
  VAR_6->s_overhead_last = VAR_11;
  FUNC_8();
  VAR_6->s_blocks_last = FUNC_4(VAR_7->s_blocks_count);
 }

 VAR_4->f_type = VAR_1;
 VAR_4->f_bsize = VAR_5->s_blocksize;
 VAR_4->f_blocks = FUNC_4(VAR_7->s_blocks_count) - VAR_6->s_overhead_last;
 VAR_4->f_bfree = FUNC_6(&VAR_6->s_freeblocks_counter);
 VAR_4->f_bavail = VAR_4->f_bfree - FUNC_4(VAR_7->s_r_blocks_count);
 if (VAR_4->f_bfree < FUNC_4(VAR_7->s_r_blocks_count))
  VAR_4->f_bavail = 0;
 VAR_4->f_files = FUNC_4(VAR_7->s_inodes_count);
 VAR_4->f_ffree = FUNC_6(&VAR_6->s_freeinodes_counter);
 VAR_4->f_namelen = VAR_0;
 VAR_8 = FUNC_5((void *)VAR_7->s_uuid) ^
        FUNC_5((void *)VAR_7->s_uuid + sizeof(u64));
 VAR_4->f_fsid.val[0] = VAR_8 & 0xFFFFFFFFUL;
 VAR_4->f_fsid.val[1] = (VAR_8 >> 32) & 0xFFFFFFFFUL;
 return 0;
}
