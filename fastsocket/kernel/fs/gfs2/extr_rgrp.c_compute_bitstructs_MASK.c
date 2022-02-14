
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int sb_bsize; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; } ;
struct gfs2_rgrpd {int rd_length; int rd_bitbytes; int rd_data; struct gfs2_bitmap* rd_bits; struct gfs2_sbd* rd_sbd; } ;
struct gfs2_rgrp {int dummy; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_bitmap {int bi_offset; int bi_start; int bi_len; scalar_t__ bi_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gfs2_sbd*,char*,int,int,int) ;
 scalar_t__ FUNC_1 (struct gfs2_rgrpd*) ;
 int FUNC_2 (struct gfs2_rgrpd*) ;
 struct gfs2_bitmap* FUNC_3 (int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct gfs2_rgrpd *VAR_5)
{
 struct gfs2_sbd *VAR_6 = VAR_5->rd_sbd;
 struct gfs2_bitmap *VAR_7;
 u32 VAR_8 = VAR_5->rd_length;
 u32 VAR_9, VAR_10;
 int VAR_11;

 if (!VAR_8)
  return -VAR_0;

 VAR_5->rd_bits = FUNC_3(VAR_8, sizeof(struct gfs2_bitmap), VAR_3);
 if (!VAR_5->rd_bits)
  return -VAR_2;

 VAR_9 = VAR_5->rd_bitbytes;

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  VAR_7 = VAR_5->rd_bits + VAR_11;

  VAR_7->bi_flags = 0;

  if (VAR_8 == 1) {
   VAR_10 = VAR_9;
   VAR_7->bi_offset = sizeof(struct gfs2_rgrp);
   VAR_7->bi_start = 0;
   VAR_7->bi_len = VAR_10;

  } else if (VAR_11 == 0) {
   VAR_10 = VAR_6->sd_sb.sb_bsize - sizeof(struct gfs2_rgrp);
   VAR_7->bi_offset = sizeof(struct gfs2_rgrp);
   VAR_7->bi_start = 0;
   VAR_7->bi_len = VAR_10;

  } else if (VAR_11 + 1 == VAR_8) {
   VAR_10 = VAR_9;
   VAR_7->bi_offset = sizeof(struct gfs2_meta_header);
   VAR_7->bi_start = VAR_5->rd_bitbytes - VAR_9;
   VAR_7->bi_len = VAR_10;

  } else {
   VAR_10 = VAR_6->sd_sb.sb_bsize -
    sizeof(struct gfs2_meta_header);
   VAR_7->bi_offset = sizeof(struct gfs2_meta_header);
   VAR_7->bi_start = VAR_5->rd_bitbytes - VAR_9;
   VAR_7->bi_len = VAR_10;
  }

  VAR_9 -= VAR_10;
 }

 if (VAR_9) {
  FUNC_1(VAR_5);
  return -VAR_1;
 }
 VAR_7 = VAR_5->rd_bits + (VAR_8 - 1);
 if ((VAR_7->bi_start + VAR_7->bi_len) * VAR_4 != VAR_5->rd_data) {
  if (FUNC_1(VAR_5)) {
   FUNC_2(VAR_5);
   FUNC_0(VAR_6, "start=%u len=%u offset=%u\n",
          VAR_7->bi_start, VAR_7->bi_len, VAR_7->bi_offset);
  }
  return -VAR_1;
 }

 return 0;
}
