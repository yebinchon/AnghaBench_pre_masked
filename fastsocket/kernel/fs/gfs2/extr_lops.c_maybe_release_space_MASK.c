
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ar_discard; } ;
struct gfs2_sbd {TYPE_2__ sd_args; } ;
struct gfs2_rgrpd {int rd_free; int rd_extfail_pt; int rd_free_clone; int rd_data0; struct gfs2_bitmap* rd_bits; } ;
struct TYPE_4__ {unsigned int ln_number; } ;
struct gfs2_glock {TYPE_1__ gl_name; struct gfs2_rgrpd* gl_object; struct gfs2_sbd* gl_sbd; } ;
struct gfs2_bufdata {TYPE_3__* bd_bh; struct gfs2_glock* bd_gl; } ;
struct gfs2_bitmap {scalar_t__ bi_clone; scalar_t__ bi_offset; int bi_flags; int bi_len; } ;
struct TYPE_6__ {unsigned int b_blocknr; scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct gfs2_sbd*,int ,TYPE_3__*,struct gfs2_bitmap*,int,int *) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct gfs2_bufdata *VAR_1)
{
 struct gfs2_glock *VAR_2 = VAR_1->bd_gl;
 struct gfs2_sbd *VAR_3 = VAR_2->gl_sbd;
 struct gfs2_rgrpd *VAR_4 = VAR_2->gl_object;
 unsigned int VAR_5 = VAR_1->bd_bh->b_blocknr - VAR_2->gl_name.ln_number;
 struct gfs2_bitmap *VAR_6 = VAR_4->rd_bits + VAR_5;

 if (VAR_6->bi_clone == 0)
  return;
 if (VAR_3->sd_args.ar_discard)
  FUNC_1(VAR_3, VAR_4->rd_data0, VAR_1->bd_bh, VAR_6, 1, ((void*)0));
 FUNC_2(VAR_6->bi_clone + VAR_6->bi_offset,
        VAR_1->bd_bh->b_data + VAR_6->bi_offset, VAR_6->bi_len);
 FUNC_0(VAR_0, &VAR_6->bi_flags);
 VAR_4->rd_free_clone = VAR_4->rd_free;
 VAR_4->rd_extfail_pt = VAR_4->rd_free;
}
