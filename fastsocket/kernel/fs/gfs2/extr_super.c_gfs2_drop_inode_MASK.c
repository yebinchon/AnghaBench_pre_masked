
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_nlink; } ;
struct TYPE_2__ {struct gfs2_glock* gh_gl; } ;
struct gfs2_inode {TYPE_1__ i_iopen_gh; } ;
struct gfs2_glock {int gl_flags; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_1)
{
 struct gfs2_inode *VAR_2 = FUNC_0(VAR_1);

 if (VAR_1->i_nlink) {
  struct gfs2_glock *VAR_3 = VAR_2->i_iopen_gh.gh_gl;
  if (VAR_3 && FUNC_3(VAR_0, &VAR_3->gl_flags))
   FUNC_1(VAR_1);
 }
 FUNC_2(VAR_1);
}
