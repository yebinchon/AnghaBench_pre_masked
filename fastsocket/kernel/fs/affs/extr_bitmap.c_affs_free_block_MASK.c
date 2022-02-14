
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct super_block {int s_dirt; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct affs_sb_info {scalar_t__ s_partition_size; scalar_t__ s_reserved; scalar_t__ s_bmap_bits; scalar_t__ s_last_bmap; int s_bmlock; struct buffer_head* s_bmap_bh; struct affs_bm_info* s_bitmap; } ;
struct affs_bm_info {scalar_t__ bm_key; int bm_free; } ;
typedef int __be32 ;


 struct affs_sb_info* FUNC_0 (struct super_block*) ;
 struct buffer_head* FUNC_1 (struct super_block*,scalar_t__) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct super_block*,char*,char*,scalar_t__) ;
 int FUNC_4 (struct super_block*,char*,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,scalar_t__) ;

void
FUNC_11(struct super_block *VAR_0, u32 VAR_1)
{
 struct affs_sb_info *VAR_2 = FUNC_0(VAR_0);
 struct affs_bm_info *VAR_3;
 struct buffer_head *VAR_4;
 u32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 __be32 *VAR_10;

 FUNC_10("AFFS: free_block(%u)\n", VAR_1);

 if (VAR_1 > VAR_2->s_partition_size)
  goto err_range;

 VAR_5 = VAR_1 - VAR_2->s_reserved;
 VAR_6 = VAR_5 / VAR_2->s_bmap_bits;
 VAR_7 = VAR_5 % VAR_2->s_bmap_bits;
 VAR_3 = &VAR_2->s_bitmap[VAR_6];

 FUNC_8(&VAR_2->s_bmlock);

 VAR_4 = VAR_2->s_bmap_bh;
 if (VAR_2->s_last_bmap != VAR_6) {
  FUNC_2(VAR_4);
  VAR_4 = FUNC_1(VAR_0, VAR_3->bm_key);
  if (!VAR_4)
   goto err_bh_read;
  VAR_2->s_bmap_bh = VAR_4;
  VAR_2->s_last_bmap = VAR_6;
 }

 VAR_8 = 1 << (VAR_7 & 31);
 VAR_10 = (__be32 *)VAR_4->b_data + VAR_7 / 32 + 1;


 VAR_9 = FUNC_5(*VAR_10);
 if (VAR_9 & VAR_8)
  goto err_free;
 *VAR_10 = FUNC_6(VAR_9 | VAR_8);


 VAR_9 = FUNC_5(*(__be32 *)VAR_4->b_data);
 *(__be32 *)VAR_4->b_data = FUNC_6(VAR_9 - VAR_8);

 FUNC_7(VAR_4);
 VAR_0->s_dirt = 1;
 VAR_3->bm_free++;

 FUNC_9(&VAR_2->s_bmlock);
 return;

err_free:
 FUNC_4(VAR_0,"affs_free_block","Trying to free block %u which is already free", VAR_1);
 FUNC_9(&VAR_2->s_bmlock);
 return;

err_bh_read:
 FUNC_3(VAR_0,"affs_free_block","Cannot read bitmap block %u", VAR_3->bm_key);
 VAR_2->s_bmap_bh = ((void*)0);
 VAR_2->s_last_bmap = ~0;
 FUNC_9(&VAR_2->s_bmlock);
 return;

err_range:
 FUNC_3(VAR_0, "affs_free_block","Block %u outside partition", VAR_1);
 return;
}
