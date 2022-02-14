
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_quota_change_host {void* qc_id; void* qc_flags; int qc_change; } ;
struct gfs2_quota_change {int qc_id; int qc_flags; int qc_change; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct gfs2_quota_change_host *VAR_0, const void *VAR_1)
{
 const struct gfs2_quota_change *VAR_2 = VAR_1;

 VAR_0->qc_change = FUNC_1(VAR_2->qc_change);
 VAR_0->qc_flags = FUNC_0(VAR_2->qc_flags);
 VAR_0->qc_id = FUNC_0(VAR_2->qc_id);
}
