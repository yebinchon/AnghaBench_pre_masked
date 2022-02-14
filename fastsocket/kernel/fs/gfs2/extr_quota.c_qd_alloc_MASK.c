
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_quota_data {int qd_slot; int qd_gl; int qd_reclaim; int qd_flags; scalar_t__ qd_id; int qd_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct gfs2_sbd*,int,int *,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,struct gfs2_quota_data*) ;
 struct gfs2_quota_data* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct gfs2_sbd *VAR_6, int VAR_7, u32 VAR_8,
      struct gfs2_quota_data **VAR_9)
{
 struct gfs2_quota_data *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(VAR_5, VAR_2);
 if (!VAR_10)
  return -VAR_1;

 FUNC_1(&VAR_10->qd_count, 1);
 VAR_10->qd_id = VAR_8;
 if (VAR_7)
  FUNC_5(VAR_3, &VAR_10->qd_flags);
 VAR_10->qd_slot = -1;
 FUNC_0(&VAR_10->qd_reclaim);

 VAR_11 = FUNC_2(VAR_6, 2 * (u64)VAR_8 + !VAR_7,
         &VAR_4, VAR_0, &VAR_10->qd_gl);
 if (VAR_11)
  goto fail;

 *VAR_9 = VAR_10;

 return 0;

fail:
 FUNC_3(VAR_5, VAR_10);
 return VAR_11;
}
