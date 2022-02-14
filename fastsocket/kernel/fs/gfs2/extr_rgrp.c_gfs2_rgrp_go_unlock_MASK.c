
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_rgrpd {int rd_length; struct gfs2_bitmap* rd_bits; } ;
struct gfs2_holder {TYPE_1__* gh_gl; } ;
struct gfs2_bitmap {int * bi_bh; } ;
struct TYPE_2__ {struct gfs2_rgrpd* gl_object; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct gfs2_holder *VAR_0)
{
 struct gfs2_rgrpd *VAR_1 = VAR_0->gh_gl->gl_object;
 int VAR_2, VAR_3 = VAR_1->rd_length;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  struct gfs2_bitmap *VAR_4 = VAR_1->rd_bits + VAR_2;
  if (VAR_4->bi_bh) {
   FUNC_0(VAR_4->bi_bh);
   VAR_4->bi_bh = ((void*)0);
  }
 }

}
