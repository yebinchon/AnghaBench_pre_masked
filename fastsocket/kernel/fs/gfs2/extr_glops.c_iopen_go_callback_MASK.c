
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {TYPE_1__* sd_vfs; } ;
struct gfs2_inode {int dummy; } ;
struct gfs2_glock {scalar_t__ gl_demote_state; scalar_t__ gl_state; int gl_delete; struct gfs2_sbd* gl_sbd; scalar_t__ gl_object; } ;
struct TYPE_2__ {int s_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gfs2_glock*) ;
 int FUNC_1 (struct gfs2_glock*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct gfs2_glock *VAR_4, bool VAR_5)
{
 struct gfs2_inode *VAR_6 = (struct gfs2_inode *)VAR_4->gl_object;
 struct gfs2_sbd *VAR_7 = VAR_4->gl_sbd;

 if (!VAR_5 || (VAR_7->sd_vfs->s_flags & VAR_2))
  return;

 if (VAR_4->gl_demote_state == VAR_1 &&
     VAR_4->gl_state == VAR_0 && VAR_6) {
  FUNC_0(VAR_4);
  if (FUNC_2(VAR_3, &VAR_4->gl_delete) == 0)
   FUNC_1(VAR_4);
 }
}
