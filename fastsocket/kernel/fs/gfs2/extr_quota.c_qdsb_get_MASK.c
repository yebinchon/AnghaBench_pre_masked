
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_quota_data {int dummy; } ;


 int FUNC_0 (struct gfs2_quota_data*) ;
 int FUNC_1 (struct gfs2_sbd*,int,int ,struct gfs2_quota_data**) ;
 int FUNC_2 (struct gfs2_quota_data*) ;
 int FUNC_3 (struct gfs2_quota_data*) ;
 int FUNC_4 (struct gfs2_quota_data*) ;

__attribute__((used)) static int FUNC_5(struct gfs2_sbd *VAR_0, int VAR_1, u32 VAR_2,
      struct gfs2_quota_data **VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(*VAR_3);
 if (VAR_4)
  goto fail;

 VAR_4 = FUNC_0(*VAR_3);
 if (VAR_4)
  goto fail_slot;

 return 0;

fail_slot:
 FUNC_4(*VAR_3);
fail:
 FUNC_2(*VAR_3);
 return VAR_4;
}
