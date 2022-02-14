
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_glock_wait; int sd_glock_disposal; } ;
struct gfs2_glock {int gl_rcu; struct gfs2_sbd* gl_sbd; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

void FUNC_3(struct gfs2_glock *VAR_1)
{
 struct gfs2_sbd *VAR_2 = VAR_1->gl_sbd;

 FUNC_1(&VAR_1->gl_rcu, VAR_0);
 if (FUNC_0(&VAR_2->sd_glock_disposal))
  FUNC_2(&VAR_2->sd_glock_wait);
}
