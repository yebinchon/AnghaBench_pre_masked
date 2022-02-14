
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct gfs2_quota_data {int qd_flags; scalar_t__ qd_id; } ;
struct gfs2_quota {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static u64 FUNC_1(struct gfs2_quota_data *VAR_1)
{
 u64 VAR_2;

 VAR_2 = 2 * (u64)VAR_1->qd_id + !FUNC_0(VAR_0, &VAR_1->qd_flags);
 VAR_2 *= sizeof(struct gfs2_quota);

 return VAR_2;
}
