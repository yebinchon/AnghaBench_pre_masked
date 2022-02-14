
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_glock {int gl_flags; int gl_lru; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct gfs2_glock *VAR_4)
{
 FUNC_5(&VAR_3);

 if (!FUNC_3(&VAR_4->gl_lru))
  FUNC_2(&VAR_4->gl_lru);
 else
  FUNC_0(&VAR_1);

 FUNC_1(&VAR_4->gl_lru, &VAR_2);
 FUNC_4(VAR_0, &VAR_4->gl_flags);
 FUNC_6(&VAR_3);
}
