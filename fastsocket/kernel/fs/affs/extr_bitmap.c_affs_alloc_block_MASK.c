
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct super_block {int s_blocksize; int s_dirt; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct affs_sb_info {scalar_t__ s_partition_size; scalar_t__ s_reserved; scalar_t__ s_bmap_bits; int s_bmap_count; scalar_t__ s_last_bmap; int s_bmlock; struct buffer_head* s_bmap_bh; struct affs_bm_info* s_bitmap; } ;
struct affs_bm_info {int bm_key; scalar_t__ bm_free; } ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {int i_lastalloc; scalar_t__ i_pa_cnt; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct affs_sb_info* FUNC_1 (struct super_block*) ;
 struct buffer_head* FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct super_block*,char*,char*,int ) ;
 int FUNC_5 (struct super_block*,char*,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,...) ;

u32
FUNC_13(struct inode *VAR_0, u32 VAR_1)
{
 struct super_block *VAR_2;
 struct affs_sb_info *VAR_3;
 struct affs_bm_info *VAR_4;
 struct buffer_head *VAR_5;
 __be32 *VAR_6, *VAR_7;
 u32 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_2 = VAR_0->i_sb;
 VAR_3 = FUNC_1(VAR_2);

 FUNC_12("AFFS: balloc(inode=%lu,goal=%u): ", VAR_0->i_ino, VAR_1);

 if (FUNC_0(VAR_0)->i_pa_cnt) {
  FUNC_12("%d\n", FUNC_0(VAR_0)->i_lastalloc+1);
  FUNC_0(VAR_0)->i_pa_cnt--;
  return ++FUNC_0(VAR_0)->i_lastalloc;
 }

 if (!VAR_1 || VAR_1 > VAR_3->s_partition_size) {
  if (VAR_1)
   FUNC_5(VAR_2, "affs_balloc", "invalid goal %d", VAR_1);


  VAR_1 = VAR_3->s_reserved;
 }

 VAR_8 = VAR_1 - VAR_3->s_reserved;
 VAR_9 = VAR_8 / VAR_3->s_bmap_bits;
 VAR_4 = &VAR_3->s_bitmap[VAR_9];

 FUNC_10(&VAR_3->s_bmlock);

 if (VAR_4->bm_free)
  goto find_bmap_bit;

find_bmap:

 VAR_14 = VAR_3->s_bmap_count;
 do {
  if (--VAR_14 < 0)
   goto err_full;
  VAR_9++;
  VAR_4++;
  if (VAR_9 < VAR_3->s_bmap_count)
   continue;

  VAR_9 = 0;
  VAR_4 = VAR_3->s_bitmap;
 } while (!VAR_4->bm_free);
 VAR_8 = VAR_9 * VAR_3->s_bmap_bits;

find_bmap_bit:

 VAR_5 = VAR_3->s_bmap_bh;
 if (VAR_3->s_last_bmap != VAR_9) {
  FUNC_3(VAR_5);
  VAR_5 = FUNC_2(VAR_2, VAR_4->bm_key);
  if (!VAR_5)
   goto err_bh_read;
  VAR_3->s_bmap_bh = VAR_5;
  VAR_3->s_last_bmap = VAR_9;
 }


 VAR_10 = VAR_8 % VAR_3->s_bmap_bits;
 VAR_6 = (__be32 *)VAR_5->b_data + VAR_10 / 32 + 1;
 VAR_7 = (__be32 *)((u8 *)VAR_5->b_data + VAR_2->s_blocksize);
 VAR_11 = ~0UL << (VAR_10 & 31);
 VAR_8 &= ~31UL;

 VAR_13 = FUNC_6(*VAR_6);
 if (VAR_13 & VAR_11)
  goto find_bit;


 do {
  VAR_8 += 32;
  if (++VAR_6 >= VAR_7)



   goto find_bmap;
 } while (!*VAR_6);
 VAR_13 = FUNC_6(*VAR_6);
 VAR_11 = ~0;

find_bit:

 VAR_10 = FUNC_8(VAR_13 & VAR_11) - 1;
 VAR_8 += VAR_10 + VAR_3->s_reserved;
 VAR_12 = VAR_11 = 1 << (VAR_10 & 31);
 FUNC_0(VAR_0)->i_lastalloc = VAR_8;


 while ((VAR_12 <<= 1)) {
  if (!(VAR_13 & VAR_12))
   break;
  FUNC_0(VAR_0)->i_pa_cnt++;
  VAR_11 |= VAR_12;
 }
 VAR_4->bm_free -= FUNC_0(VAR_0)->i_pa_cnt + 1;

 *VAR_6 = FUNC_7(VAR_13 & ~VAR_11);


 VAR_13 = FUNC_6(*(__be32 *)VAR_5->b_data);
 *(__be32 *)VAR_5->b_data = FUNC_7(VAR_13 + VAR_11);

 FUNC_9(VAR_5);
 VAR_2->s_dirt = 1;

 FUNC_11(&VAR_3->s_bmlock);

 FUNC_12("%d\n", VAR_8);
 return VAR_8;

err_bh_read:
 FUNC_4(VAR_2,"affs_read_block","Cannot read bitmap block %u", VAR_4->bm_key);
 VAR_3->s_bmap_bh = ((void*)0);
 VAR_3->s_last_bmap = ~0;
err_full:
 FUNC_11(&VAR_3->s_bmlock);
 FUNC_12("failed\n");
 return 0;
}
