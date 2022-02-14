
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {int sd_quota_inode; } ;
struct gfs2_quota_lvb {int qb_value; int qb_warn; int qb_limit; scalar_t__ __pad; int qb_magic; } ;
struct gfs2_quota_data {struct gfs2_quota_lvb qd_qb; TYPE_1__* qd_gl; } ;
struct gfs2_quota {int qu_value; int qu_warn; int qu_limit; } ;
struct gfs2_inode {int dummy; } ;
typedef int q ;
typedef int loff_t ;
struct TYPE_2__ {scalar_t__ gl_lvb; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_inode*,int *,char*,int *,int) ;
 int FUNC_3 (struct gfs2_quota*,int ,int) ;
 int FUNC_4 (struct gfs2_quota_data*) ;

__attribute__((used)) static int FUNC_5(struct gfs2_sbd *VAR_1, struct gfs2_quota_data *VAR_2)
{
 struct gfs2_inode *VAR_3 = FUNC_0(VAR_1->sd_quota_inode);
 struct gfs2_quota VAR_4;
 struct gfs2_quota_lvb *VAR_5;
 loff_t VAR_6;
 int VAR_7;

 FUNC_3(&VAR_4, 0, sizeof(struct gfs2_quota));
 VAR_6 = FUNC_4(VAR_2);
 VAR_7 = FUNC_2(VAR_3, ((void*)0), (char *)&VAR_4, &VAR_6, sizeof(VAR_4));
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5 = (struct gfs2_quota_lvb *)VAR_2->qd_gl->gl_lvb;
 VAR_5->qb_magic = FUNC_1(VAR_0);
 VAR_5->__pad = 0;
 VAR_5->qb_limit = VAR_4.qu_limit;
 VAR_5->qb_warn = VAR_4.qu_warn;
 VAR_5->qb_value = VAR_4.qu_value;
 VAR_2->qd_qb = *VAR_5;

 return 0;
}
