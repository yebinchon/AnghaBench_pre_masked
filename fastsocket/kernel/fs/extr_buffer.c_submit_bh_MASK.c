
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer_head {int b_blocknr; int b_size; int b_page; int b_bdev; int b_end_io; } ;
struct bio {int bi_sector; int bi_vcnt; int bi_size; struct buffer_head* bi_private; int bi_end_io; scalar_t__ bi_idx; TYPE_1__* bi_io_vec; int bi_bdev; } ;
struct TYPE_2__ {int bv_len; int bv_offset; int bv_page; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct buffer_head*) ;
 struct bio* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 scalar_t__ FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int VAR_5 ;
 int FUNC_12 (int,struct bio*,struct buffer_head*) ;
 int FUNC_13 (int,struct bio*) ;
 scalar_t__ FUNC_14 (struct buffer_head*) ;

int FUNC_15(int VAR_6, struct buffer_head * VAR_7)
{
 struct bio *VAR_8;
 int VAR_9 = 0;

 FUNC_0(!FUNC_7(VAR_7));
 FUNC_0(!FUNC_8(VAR_7));
 FUNC_0(!VAR_7->b_end_io);
 FUNC_0(FUNC_6(VAR_7));
 FUNC_0(FUNC_10(VAR_7));





 if (FUNC_9(VAR_7) && (VAR_6 & VAR_3))
  VAR_6 |= VAR_4;




 if (FUNC_14(VAR_7) && (VAR_6 & VAR_3))
  FUNC_11(VAR_7);





 VAR_8 = FUNC_2(VAR_2, 1);

 VAR_8->bi_sector = VAR_7->b_blocknr * (VAR_7->b_size >> 9);
 VAR_8->bi_bdev = VAR_7->b_bdev;
 VAR_8->bi_io_vec[0].bv_page = VAR_7->b_page;
 VAR_8->bi_io_vec[0].bv_len = VAR_7->b_size;
 VAR_8->bi_io_vec[0].bv_offset = FUNC_1(VAR_7);

 VAR_8->bi_vcnt = 1;
 VAR_8->bi_idx = 0;
 VAR_8->bi_size = VAR_7->b_size;

 VAR_8->bi_end_io = VAR_5;
 VAR_8->bi_private = VAR_7;


 FUNC_12(VAR_6, VAR_8, VAR_7);

 FUNC_4(VAR_8);
 FUNC_13(VAR_6, VAR_8);

 if (FUNC_3(VAR_8, VAR_0))
  VAR_9 = -VAR_1;

 FUNC_5(VAR_8);
 return VAR_9;
}
