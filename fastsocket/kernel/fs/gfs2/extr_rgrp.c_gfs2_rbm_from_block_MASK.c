
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct gfs2_rgrp {int dummy; } ;
struct gfs2_rbm {int offset; TYPE_3__* bi; TYPE_2__* rgd; } ;
struct gfs2_meta_header {int dummy; } ;
struct TYPE_6__ {int bi_len; } ;
struct TYPE_5__ {scalar_t__ rd_data0; scalar_t__ rd_data; TYPE_1__* rd_sbd; TYPE_3__* rd_bits; } ;
struct TYPE_4__ {int sd_blocks_per_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct gfs2_rbm *VAR_2, u64 VAR_3)
{
 u32 VAR_4;

 if (VAR_3 >= VAR_2->rgd->rd_data0 + VAR_2->rgd->rd_data)
  return -VAR_0;

 VAR_2->bi = VAR_2->rgd->rd_bits;
 VAR_2->offset = (u32)(VAR_3 - VAR_2->rgd->rd_data0);

 if (VAR_2->offset < VAR_2->bi->bi_len * VAR_1)
  return 0;


 VAR_2->offset += (sizeof(struct gfs2_rgrp) -
   sizeof(struct gfs2_meta_header)) * VAR_1;
 VAR_4 = VAR_2->offset / VAR_2->rgd->rd_sbd->sd_blocks_per_bitmap;
 VAR_2->offset -= VAR_4 * VAR_2->rgd->rd_sbd->sd_blocks_per_bitmap;
 VAR_2->bi += VAR_4;
 return 0;
}
