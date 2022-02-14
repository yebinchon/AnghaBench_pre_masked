
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; int s_bdev; } ;
struct page {int dummy; } ;
struct gfs2_sbd {int sd_sb; struct super_block* sd_vfs; } ;
struct gfs2_sb {int dummy; } ;
struct bio {int bi_sector; struct page* bi_private; int bi_end_io; int bi_bdev; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct page*) ;
 int VAR_5 ;
 int FUNC_3 (struct page*) ;
 struct page* FUNC_4 (int ) ;
 int FUNC_5 (struct bio*,struct page*,int ,int ) ;
 struct bio* FUNC_6 (int ,int) ;
 int FUNC_7 (struct bio*) ;
 int VAR_6 ;
 int FUNC_8 (int *,struct gfs2_sb*) ;
 struct gfs2_sb* FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (int,struct bio*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct page*) ;

__attribute__((used)) static int FUNC_15(struct gfs2_sbd *VAR_7, sector_t VAR_8)
{
 struct super_block *VAR_9 = VAR_7->sd_vfs;
 struct gfs2_sb *VAR_10;
 struct page *VAR_11;
 struct bio *VAR_12;

 VAR_11 = FUNC_4(VAR_3);
 if (FUNC_13(!VAR_11))
  return -VAR_2;

 FUNC_1(VAR_11);
 FUNC_0(VAR_11);
 FUNC_11(VAR_11);

 VAR_12 = FUNC_6(VAR_3, 1);
 VAR_12->bi_sector = VAR_8 * (VAR_9->s_blocksize >> 9);
 VAR_12->bi_bdev = VAR_9->s_bdev;
 FUNC_5(VAR_12, VAR_11, VAR_4, 0);

 VAR_12->bi_end_io = VAR_6;
 VAR_12->bi_private = VAR_11;
 FUNC_12(VAR_5 | (1 << VAR_0), VAR_12);
 FUNC_14(VAR_11);
 FUNC_7(VAR_12);
 if (!FUNC_2(VAR_11)) {
  FUNC_3(VAR_11);
  return -VAR_1;
 }
 VAR_10 = FUNC_9(VAR_11);
 FUNC_8(&VAR_7->sd_sb, VAR_10);
 FUNC_10(VAR_11);
 FUNC_3(VAR_11);
 return 0;
}
