
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_glock {int gl_revokes; int gl_ail_count; int gl_ail_list; int gl_lru; int gl_holders; int gl_spin; int gl_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct gfs2_glock *VAR_1 = VAR_0;

 FUNC_0(&VAR_1->gl_list);
 FUNC_3(&VAR_1->gl_spin);
 FUNC_1(&VAR_1->gl_holders);
 FUNC_1(&VAR_1->gl_lru);
 FUNC_1(&VAR_1->gl_ail_list);
 FUNC_2(&VAR_1->gl_ail_count, 0);
 FUNC_2(&VAR_1->gl_revokes, 0);
}
