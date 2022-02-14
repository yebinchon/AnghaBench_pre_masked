
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct gfs2_rbm {scalar_t__ offset; TYPE_1__* rgd; struct gfs2_bitmap* bi; } ;
struct gfs2_inode {int dummy; } ;
struct gfs2_extent {scalar_t__ len; struct gfs2_rbm rbm; } ;
struct gfs2_bitmap {int bi_offset; int bi_flags; int * bi_clone; struct buffer_head* bi_bh; } ;
struct gfs2_alloc_parms {int dummy; } ;
struct buffer_head {int * b_data; } ;
struct TYPE_2__ {int rd_length; scalar_t__ rd_extfail_pt; struct gfs2_bitmap* rd_bits; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int *,struct gfs2_bitmap*,scalar_t__,int ) ;
 int FUNC_3 (struct gfs2_rbm*,struct gfs2_inode const*,scalar_t__,struct gfs2_extent*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct gfs2_rbm *VAR_6, u8 VAR_7, u32 *VAR_8,
    const struct gfs2_inode *VAR_9, bool VAR_10,
    const struct gfs2_alloc_parms *VAR_11)
{
 struct buffer_head *VAR_12;
 struct gfs2_bitmap *VAR_13;
 u32 VAR_14;
 struct gfs2_bitmap *VAR_15 = VAR_6->bi;
 u32 VAR_16 = VAR_6->offset;
 u32 VAR_17;
 u8 *VAR_18;
 int VAR_19;
 int VAR_20 = 0;
 int VAR_21 = VAR_6->rgd->rd_length;
 int VAR_22;
 struct gfs2_extent VAR_23 = { .rbm.rgd = VAR_6->rgd, };





 if (VAR_6->offset != 0)
  VAR_21++;

 while(1) {
  if (FUNC_5(VAR_3, &VAR_6->bi->bi_flags) &&
      (VAR_7 == VAR_4))
   goto next_bitmap;

  VAR_12 = VAR_6->bi->bi_bh;
  VAR_18 = VAR_12->b_data + VAR_6->bi->bi_offset;
  FUNC_0(!FUNC_1(VAR_12));
  if (VAR_7 != VAR_5 && VAR_6->bi->bi_clone)
   VAR_18 = VAR_6->bi->bi_clone + VAR_6->bi->bi_offset;
  VAR_14 = VAR_6->offset;
  VAR_17 = FUNC_2(VAR_18, VAR_6->bi, VAR_6->offset, VAR_7);
  if (VAR_17 == VAR_0)
   goto bitmap_full;
  VAR_6->offset = VAR_17;
  if (VAR_9 == ((void*)0))
   return 0;

  VAR_13 = VAR_6->bi;
  VAR_22 = FUNC_3(VAR_6, VAR_9,
       VAR_8 ? *VAR_8 : 0,
       &VAR_23);
  if (VAR_22 == 0)
   return 0;
  if (VAR_22 > 0) {
   VAR_20 += (VAR_6->bi - VAR_13);
   goto next_iter;
  }
  if (VAR_22 == -VAR_1) {
   VAR_19 = 0;
   VAR_6->offset = 0;
   VAR_20 += (VAR_6->bi - VAR_13);
   goto res_covered_end_of_rgrp;
  }
  return VAR_22;

bitmap_full:
  if ((VAR_7 == VAR_4) && VAR_14 == 0)
   FUNC_4(VAR_3, &VAR_6->bi->bi_flags);

next_bitmap:
  VAR_6->offset = 0;
  VAR_19 = VAR_6->bi - VAR_6->rgd->rd_bits;
  VAR_19++;
  if (VAR_19 == VAR_6->rgd->rd_length)
   VAR_19 = 0;
res_covered_end_of_rgrp:
  VAR_6->bi = &VAR_6->rgd->rd_bits[VAR_19];
  if ((VAR_19 == 0) && VAR_10)
   break;
  VAR_20++;
next_iter:
  if (VAR_20 >= VAR_21)
   break;
 }

 if (VAR_8 == ((void*)0) || VAR_7 != VAR_4)
  return -VAR_2;




 if ((VAR_16 == 0) && (VAR_15 == VAR_6->rgd->rd_bits) &&
     (*VAR_8 < VAR_6->rgd->rd_extfail_pt))
  VAR_6->rgd->rd_extfail_pt = *VAR_8;



 if (VAR_23.len) {
  *VAR_6 = VAR_23.rbm;
  *VAR_8 = VAR_23.len;
  return 0;
 }

 return -VAR_2;
}
