
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int dummy; } ;
struct gfs2_glock {struct gfs2_sbd* gl_sbd; } ;
struct gfs2_bufdata {struct gfs2_glock* bd_gl; } ;
struct buffer_head {int b_page; struct gfs2_bufdata* b_private; } ;


 struct gfs2_bufdata* FUNC_0 (struct gfs2_glock*,struct buffer_head*,int *) ;
 int FUNC_1 (struct gfs2_sbd*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct gfs2_sbd*) ;
 int FUNC_3 (struct gfs2_sbd*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct gfs2_sbd*,struct gfs2_bufdata*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct gfs2_glock *VAR_1, struct buffer_head *VAR_2)
{

 struct gfs2_sbd *VAR_3 = VAR_1->gl_sbd;
 struct gfs2_bufdata *VAR_4;

 FUNC_4(VAR_2);
 FUNC_2(VAR_3);
 VAR_4 = VAR_2->b_private;
 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_3);
  FUNC_7(VAR_2);
  FUNC_5(VAR_2->b_page);
  if (VAR_2->b_private == ((void*)0))
   VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_0);
  FUNC_8(VAR_2->b_page);
  FUNC_4(VAR_2);
  FUNC_2(VAR_3);
 }
 FUNC_1(VAR_3, VAR_4->bd_gl == VAR_1);
 FUNC_6(VAR_3, VAR_4);
 FUNC_3(VAR_3);
 FUNC_7(VAR_2);
}
