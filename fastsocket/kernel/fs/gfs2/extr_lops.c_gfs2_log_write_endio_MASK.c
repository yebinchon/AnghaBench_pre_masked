
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_log_flush_wait; int sd_log_in_flight; } ;
struct buffer_head {struct gfs2_sbd* b_private; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct buffer_head*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct buffer_head *VAR_0, int VAR_1)
{
 struct gfs2_sbd *VAR_2 = VAR_0->b_private;
 VAR_0->b_private = ((void*)0);

 FUNC_1(VAR_0, VAR_1);
 if (FUNC_0(&VAR_2->sd_log_in_flight))
  FUNC_2(&VAR_2->sd_log_flush_wait);
}
