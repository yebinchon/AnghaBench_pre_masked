
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {unsigned int rd_length; int rd_flags; struct gfs2_bitmap* rd_bits; int rd_free; int rd_extfail_pt; int rd_free_clone; scalar_t__ rd_addr; struct gfs2_glock* rd_gl; struct gfs2_sbd* rd_sbd; } ;
struct gfs2_holder {TYPE_1__* gh_gl; } ;
struct gfs2_glock {int dummy; } ;
struct gfs2_bitmap {int bi_clone; TYPE_2__* bi_bh; int bi_flags; } ;
struct TYPE_7__ {int b_data; } ;
struct TYPE_6__ {struct gfs2_rgrpd* gl_object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct gfs2_sbd*,int) ;
 int FUNC_3 (struct gfs2_glock*,scalar_t__,int ,TYPE_2__**) ;
 int FUNC_4 (struct gfs2_sbd*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (struct gfs2_sbd*,TYPE_2__*,int ) ;
 int FUNC_6 (struct gfs2_rgrpd*,int ) ;

int FUNC_7(struct gfs2_holder *VAR_6)
{
 struct gfs2_rgrpd *VAR_7 = VAR_6->gh_gl->gl_object;
 struct gfs2_sbd *VAR_8 = VAR_7->rd_sbd;
 struct gfs2_glock *VAR_9 = VAR_7->rd_gl;
 unsigned int VAR_10 = VAR_7->rd_length;
 struct gfs2_bitmap *VAR_11;
 unsigned int VAR_12, VAR_13;
 int VAR_14;

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_11 = VAR_7->rd_bits + VAR_12;
  VAR_14 = FUNC_3(VAR_9, VAR_7->rd_addr + VAR_12, 0, &VAR_11->bi_bh);
  if (VAR_14)
   goto fail;
 }

 for (VAR_13 = VAR_10; VAR_13--;) {
  VAR_11 = VAR_7->rd_bits + VAR_13;
  VAR_14 = FUNC_4(VAR_8, VAR_11->bi_bh);
  if (VAR_14)
   goto fail;
  if (FUNC_5(VAR_8, VAR_11->bi_bh, VAR_13 ? VAR_2 :
           VAR_3)) {
   VAR_14 = -VAR_0;
   goto fail;
  }
 }

 if (!(VAR_7->rd_flags & VAR_5)) {
  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
   FUNC_1(VAR_1, &VAR_7->rd_bits[VAR_12].bi_flags);
  FUNC_6(VAR_7, (VAR_7->rd_bits[0].bi_bh)->b_data);
  VAR_7->rd_flags |= (VAR_5 | VAR_4);
  VAR_7->rd_free_clone = VAR_7->rd_free;

  VAR_7->rd_extfail_pt = VAR_7->rd_free;
 }

 return 0;

fail:
 while (VAR_12--) {
  VAR_11 = VAR_7->rd_bits + VAR_12;
  FUNC_0(VAR_11->bi_bh);
  VAR_11->bi_bh = ((void*)0);
  FUNC_2(VAR_8, !VAR_11->bi_clone);
 }

 return VAR_14;
}
