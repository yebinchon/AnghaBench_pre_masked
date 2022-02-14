
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_glock {int gl_ref; } ;


 int FUNC_0 (struct gfs2_glock*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(struct gfs2_glock *VAR_0)
{
 FUNC_0(VAR_0, FUNC_2(&VAR_0->gl_ref) == 0);
 FUNC_1(&VAR_0->gl_ref);
}
