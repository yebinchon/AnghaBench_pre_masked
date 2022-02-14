
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_glock {int gl_flags; int gl_lru; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct gfs2_glock *VAR_2)
{
 if (!FUNC_3(&VAR_2->gl_lru)) {
  FUNC_2(&VAR_2->gl_lru);
  FUNC_0(&VAR_1);
  FUNC_1(VAR_0, &VAR_2->gl_flags);
 }
}
