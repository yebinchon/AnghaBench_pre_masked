
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_inode {struct gfs2_blkreserv* i_res; } ;
struct TYPE_2__ {scalar_t__ gh_gl; } ;
struct gfs2_blkreserv {TYPE_1__ rs_rgd_gh; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct gfs2_inode *VAR_0)
{
 struct gfs2_blkreserv *VAR_1 = VAR_0->i_res;

 if (VAR_1->rs_rgd_gh.gh_gl)
  FUNC_0(&VAR_1->rs_rgd_gh);
}
