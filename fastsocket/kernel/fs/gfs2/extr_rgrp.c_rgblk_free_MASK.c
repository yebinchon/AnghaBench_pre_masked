
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {int rd_gl; } ;
struct gfs2_rbm {struct gfs2_rgrpd* rgd; TYPE_1__* bi; } ;
struct TYPE_4__ {scalar_t__ b_data; int b_size; } ;
struct TYPE_3__ {TYPE_2__* bi_bh; int bi_len; scalar_t__ bi_offset; scalar_t__ bi_clone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gfs2_sbd*,char*,unsigned long long) ;
 struct gfs2_rgrpd* FUNC_1 (struct gfs2_sbd*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct gfs2_sbd*) ;
 int FUNC_3 (struct gfs2_rbm*,scalar_t__) ;
 int FUNC_4 (struct gfs2_rbm*,int,unsigned char) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static struct gfs2_rgrpd *FUNC_8(struct gfs2_sbd *VAR_2, u64 VAR_3,
         u32 VAR_4, unsigned char VAR_5)
{
 struct gfs2_rbm VAR_6;

 VAR_6.rgd = FUNC_1(VAR_2, VAR_3, 1);
 if (!VAR_6.rgd) {
  if (FUNC_2(VAR_2))
   FUNC_0(VAR_2, "block = %llu\n", (unsigned long long)VAR_3);
  return ((void*)0);
 }

 while (VAR_4--) {
  FUNC_3(&VAR_6, VAR_3);
  VAR_3++;
  if (!VAR_6.bi->bi_clone) {
   VAR_6.bi->bi_clone = FUNC_6(VAR_6.bi->bi_bh->b_size,
         VAR_0 | VAR_1);
   FUNC_7(VAR_6.bi->bi_clone + VAR_6.bi->bi_offset,
          VAR_6.bi->bi_bh->b_data + VAR_6.bi->bi_offset,
          VAR_6.bi->bi_len);
  }
  FUNC_5(VAR_6.rgd->rd_gl, VAR_6.bi->bi_bh);
  FUNC_4(&VAR_6, 0, VAR_5);
 }

 return VAR_6.rgd;
}
