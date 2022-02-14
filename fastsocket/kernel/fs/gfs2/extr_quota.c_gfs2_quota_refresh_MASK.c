
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_quota_data {int dummy; } ;
struct gfs2_holder {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfs2_quota_data*,int ,struct gfs2_holder*) ;
 int FUNC_1 (struct gfs2_holder*) ;
 int FUNC_2 (struct gfs2_sbd*,int,int ,struct gfs2_quota_data**) ;
 int FUNC_3 (struct gfs2_quota_data*) ;

int FUNC_4(struct gfs2_sbd *VAR_1, int VAR_2, u32 VAR_3)
{
 struct gfs2_quota_data *VAR_4;
 struct gfs2_holder VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_0, &VAR_5);
 if (!VAR_6)
  FUNC_1(&VAR_5);

 FUNC_3(VAR_4);
 return VAR_6;
}
