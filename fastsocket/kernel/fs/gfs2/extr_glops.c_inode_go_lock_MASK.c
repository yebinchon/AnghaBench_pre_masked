
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_quota_wait; int sd_trunc_lock; int sd_trunc_list; } ;
struct gfs2_inode {int i_diskflags; int i_trunc_list; int i_flags; } ;
struct gfs2_holder {int gh_flags; scalar_t__ gh_state; struct gfs2_glock* gh_gl; } ;
struct gfs2_glock {scalar_t__ gl_state; struct gfs2_inode* gl_object; struct gfs2_sbd* gl_sbd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct gfs2_inode*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct gfs2_holder *VAR_4)
{
 struct gfs2_glock *VAR_5 = VAR_4->gh_gl;
 struct gfs2_sbd *VAR_6 = VAR_5->gl_sbd;
 struct gfs2_inode *VAR_7 = VAR_5->gl_object;
 int VAR_8 = 0;

 if (!VAR_7 || (VAR_4->gh_flags & VAR_2))
  return 0;

 if (FUNC_5(VAR_1, &VAR_7->i_flags)) {
  VAR_8 = FUNC_0(VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 if ((VAR_7->i_diskflags & VAR_0) &&
     (VAR_5->gl_state == VAR_3) &&
     (VAR_4->gh_state == VAR_3)) {
  FUNC_3(&VAR_6->sd_trunc_lock);
  if (FUNC_2(&VAR_7->i_trunc_list))
   FUNC_1(&VAR_6->sd_trunc_list, &VAR_7->i_trunc_list);
  FUNC_4(&VAR_6->sd_trunc_lock);
  FUNC_6(&VAR_6->sd_quota_wait);
  return 1;
 }

 return VAR_8;
}
