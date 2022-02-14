
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {int sd_quota_inode; } ;
struct gfs2_quota_lvb {scalar_t__ qb_magic; } ;
struct gfs2_quota_data {TYPE_1__* qd_gl; struct gfs2_quota_lvb qd_qb; } ;
struct gfs2_inode {TYPE_1__* i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct TYPE_2__ {scalar_t__ gl_lvb; struct gfs2_sbd* gl_sbd; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,struct gfs2_holder*) ;
 int FUNC_4 (struct gfs2_sbd*,struct gfs2_quota_data*) ;

__attribute__((used)) static int FUNC_5(struct gfs2_quota_data *VAR_4, int VAR_5,
      struct gfs2_holder *VAR_6)
{
 struct gfs2_sbd *VAR_7 = VAR_4->qd_gl->gl_sbd;
 struct gfs2_inode *VAR_8 = FUNC_0(VAR_7->sd_quota_inode);
 struct gfs2_holder VAR_9;
 int VAR_10;

restart:
 VAR_10 = FUNC_3(VAR_4->qd_gl, VAR_3, 0, VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_4->qd_qb = *(struct gfs2_quota_lvb *)VAR_4->qd_gl->gl_lvb;

 if (VAR_5 || VAR_4->qd_qb.qb_magic != FUNC_1(VAR_0)) {
  FUNC_2(VAR_6);
  VAR_10 = FUNC_3(VAR_4->qd_gl, VAR_2,
        VAR_1, VAR_6);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_3(VAR_8->i_gl, VAR_3, 0, &VAR_9);
  if (VAR_10)
   goto fail;

  VAR_10 = FUNC_4(VAR_7, VAR_4);
  if (VAR_10)
   goto fail_gunlock;

  FUNC_2(&VAR_9);
  FUNC_2(VAR_6);
  VAR_5 = 0;
  goto restart;
 }

 return 0;

fail_gunlock:
 FUNC_2(&VAR_9);
fail:
 FUNC_2(VAR_6);
 return VAR_10;
}
