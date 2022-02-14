
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {int sd_log_flush_wait; int sd_log_in_flight; } ;
struct gfs2_bufdata {TYPE_1__* bd_gl; struct gfs2_bufdata* b_private; } ;
struct buffer_head {TYPE_1__* bd_gl; struct buffer_head* b_private; } ;
struct TYPE_2__ {struct gfs2_sbd* gl_sbd; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct gfs2_bufdata*) ;
 int FUNC_2 (struct gfs2_bufdata*,int) ;
 int VAR_0 ;
 int FUNC_3 (struct gfs2_bufdata*,int ) ;
 int FUNC_4 (struct gfs2_bufdata*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct buffer_head *VAR_1, int VAR_2)
{
 struct buffer_head *VAR_3 = VAR_1->b_private;
 struct gfs2_bufdata *VAR_4 = VAR_3->b_private;
 struct gfs2_sbd *VAR_5 = VAR_4->bd_gl->gl_sbd;

 FUNC_2(VAR_1, VAR_2);
 FUNC_3(VAR_1, VAR_0);
 FUNC_4(VAR_3);
 FUNC_1(VAR_3);
 if (FUNC_0(&VAR_5->sd_log_in_flight))
  FUNC_5(&VAR_5->sd_log_flush_wait);
}
