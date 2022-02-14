
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int s_blocksize; } ;
struct TYPE_2__ {int* val; } ;
struct kstatfs {unsigned long f_blocks; void* f_bfree; void* f_ffree; TYPE_1__ f_fsid; int f_namelen; void* f_files; void* f_bavail; int f_bsize; int f_type; } ;
struct ext2_super_block {scalar_t__ s_uuid; void* s_free_inodes_count; int s_inodes_count; int s_r_blocks_count; void* s_free_blocks_count; int s_blocks_count; int s_first_data_block; } ;
struct ext2_sb_info {unsigned long s_overhead_last; void* s_blocks_last; unsigned long s_groups_count; int s_itb_per_group; struct ext2_super_block* s_es; } ;
struct dentry {struct super_block* d_sb; } ;


 int VAR_0 ;
 struct ext2_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (struct super_block*,unsigned long) ;
 scalar_t__ FUNC_3 (struct super_block*,unsigned long) ;
 void* FUNC_4 (struct super_block*) ;
 void* FUNC_5 (struct super_block*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_11 (struct dentry * VAR_3, struct kstatfs * VAR_4)
{
 struct super_block *VAR_5 = VAR_3->d_sb;
 struct ext2_sb_info *VAR_6 = FUNC_0(VAR_5);
 struct ext2_super_block *VAR_7 = VAR_6->s_es;
 u64 VAR_8;

 if (FUNC_10 (VAR_5, VAR_2))
  VAR_6->s_overhead_last = 0;
 else if (VAR_6->s_blocks_last != FUNC_6(VAR_7->s_blocks_count)) {
  unsigned long VAR_9, VAR_10 = 0;
  FUNC_8();
  VAR_10 = FUNC_6(VAR_7->s_first_data_block);






  for (VAR_9 = 0; VAR_9 < VAR_6->s_groups_count; VAR_9++)
   VAR_10 += FUNC_2(VAR_5, VAR_9) +
    FUNC_3(VAR_5, VAR_9);





  VAR_10 += (VAR_6->s_groups_count *
        (2 + VAR_6->s_itb_per_group));
  VAR_6->s_overhead_last = VAR_10;
  FUNC_9();
  VAR_6->s_blocks_last = FUNC_6(VAR_7->s_blocks_count);
 }

 VAR_4->f_type = VAR_1;
 VAR_4->f_bsize = VAR_5->s_blocksize;
 VAR_4->f_blocks = FUNC_6(VAR_7->s_blocks_count) - VAR_6->s_overhead_last;
 VAR_4->f_bfree = FUNC_4(VAR_5);
 VAR_7->s_free_blocks_count = FUNC_1(VAR_4->f_bfree);
 VAR_4->f_bavail = VAR_4->f_bfree - FUNC_6(VAR_7->s_r_blocks_count);
 if (VAR_4->f_bfree < FUNC_6(VAR_7->s_r_blocks_count))
  VAR_4->f_bavail = 0;
 VAR_4->f_files = FUNC_6(VAR_7->s_inodes_count);
 VAR_4->f_ffree = FUNC_5(VAR_5);
 VAR_7->s_free_inodes_count = FUNC_1(VAR_4->f_ffree);
 VAR_4->f_namelen = VAR_0;
 VAR_8 = FUNC_7((void *)VAR_7->s_uuid) ^
        FUNC_7((void *)VAR_7->s_uuid + sizeof(u64));
 VAR_4->f_fsid.val[0] = VAR_8 & 0xFFFFFFFFUL;
 VAR_4->f_fsid.val[1] = (VAR_8 >> 32) & 0xFFFFFFFFUL;
 return 0;
}
