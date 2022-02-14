
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_glock_operations {int (* go_demote_ok ) (struct gfs2_glock const*) ;} ;
struct gfs2_glock {scalar_t__ gl_state; int gl_holders; struct gfs2_glock_operations* gl_ops; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct gfs2_glock const*) ;

__attribute__((used)) static int FUNC_2(const struct gfs2_glock *VAR_1)
{
 const struct gfs2_glock_operations *VAR_2 = VAR_1->gl_ops;

 if (VAR_1->gl_state == VAR_0)
  return 0;
 if (!FUNC_0(&VAR_1->gl_holders))
  return 0;
 if (VAR_2->go_demote_ok)
  return VAR_2->go_demote_ok(VAR_1);
 return 1;
}
