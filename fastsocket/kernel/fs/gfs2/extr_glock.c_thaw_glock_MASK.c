
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_glock {int gl_work; int gl_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gfs2_glock*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct gfs2_glock *VAR_3)
{
 if (!FUNC_3(VAR_0, &VAR_3->gl_flags))
  goto out;
 FUNC_2(VAR_1, &VAR_3->gl_flags);
 if (FUNC_1(VAR_2, &VAR_3->gl_work, 0) == 0) {
 out:
  FUNC_0(VAR_3);
 }
}
