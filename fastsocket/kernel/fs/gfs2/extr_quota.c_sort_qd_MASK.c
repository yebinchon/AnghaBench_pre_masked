
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_quota_data {scalar_t__ qd_id; int qd_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(const void *VAR_1, const void *VAR_2)
{
 const struct gfs2_quota_data *VAR_3 = *(const struct gfs2_quota_data **)VAR_1;
 const struct gfs2_quota_data *VAR_4 = *(const struct gfs2_quota_data **)VAR_2;

 if (!FUNC_0(VAR_0, &VAR_3->qd_flags) !=
     !FUNC_0(VAR_0, &VAR_4->qd_flags)) {
  if (FUNC_0(VAR_0, &VAR_3->qd_flags))
   return -1;
  else
   return 1;
 }
 if (VAR_3->qd_id < VAR_4->qd_id)
  return -1;
 if (VAR_3->qd_id > VAR_4->qd_id)
  return 1;

 return 0;
}
