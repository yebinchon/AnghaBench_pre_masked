
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_flags; } ;
struct gfs2_glock {scalar_t__ gl_state; struct gfs2_sbd* gl_sbd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gfs2_sbd*) ;
 int FUNC_1 (struct gfs2_sbd*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct gfs2_glock *VAR_2)
{
 struct gfs2_sbd *VAR_3 = VAR_2->gl_sbd;

 if (VAR_2->gl_state != VAR_0 &&
     FUNC_2(VAR_1, &VAR_3->sd_flags)) {
  FUNC_1(VAR_3);
  FUNC_0(VAR_3);
 }
}
