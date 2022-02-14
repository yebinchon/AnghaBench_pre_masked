
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_rindex_uptodate; int sd_rindex; } ;
struct gfs2_inode {struct gfs2_glock* i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_glock {int dummy; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct gfs2_holder*) ;
 int FUNC_2 (struct gfs2_glock*) ;
 int FUNC_3 (struct gfs2_glock*,int ,int ,struct gfs2_holder*) ;
 int FUNC_4 (struct gfs2_inode*) ;

int FUNC_5(struct gfs2_sbd *VAR_1)
{
 struct gfs2_inode *VAR_2 = FUNC_0(VAR_1->sd_rindex);
 struct gfs2_glock *VAR_3 = VAR_2->i_gl;
 struct gfs2_holder VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;


 if (!VAR_1->sd_rindex_uptodate) {
  if (!FUNC_2(VAR_3)) {
   VAR_5 = FUNC_3(VAR_3, VAR_0, 0, &VAR_4);
   if (VAR_5)
    return VAR_5;
   VAR_6 = 1;
  }
  if (!VAR_1->sd_rindex_uptodate)
   VAR_5 = FUNC_4(VAR_2);
  if (VAR_6)
   FUNC_1(&VAR_4);
 }

 return VAR_5;
}
