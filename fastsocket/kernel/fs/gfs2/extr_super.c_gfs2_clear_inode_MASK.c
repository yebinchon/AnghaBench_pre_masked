
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_7__ {int gh_flags; TYPE_1__* gh_gl; } ;
struct gfs2_inode {TYPE_3__ i_iopen_gh; TYPE_2__* i_gl; } ;
struct TYPE_6__ {int gl_work; int * gl_object; } ;
struct TYPE_5__ {int * gl_object; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gfs2_inode*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (struct gfs2_inode*) ;

__attribute__((used)) static void FUNC_8(struct inode *VAR_1)
{
 struct gfs2_inode *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_2);
 FUNC_7(VAR_2);
 FUNC_6(VAR_2);
 VAR_2->i_gl->gl_object = ((void*)0);
 FUNC_1(&VAR_2->i_gl->gl_work);
 FUNC_3(VAR_2->i_gl);
 FUNC_5(VAR_2->i_gl);
 VAR_2->i_gl = ((void*)0);
 if (VAR_2->i_iopen_gh.gh_gl) {
  VAR_2->i_iopen_gh.gh_gl->gl_object = ((void*)0);
  VAR_2->i_iopen_gh.gh_flags |= VAR_0;
  FUNC_4(&VAR_2->i_iopen_gh);
 }
}
