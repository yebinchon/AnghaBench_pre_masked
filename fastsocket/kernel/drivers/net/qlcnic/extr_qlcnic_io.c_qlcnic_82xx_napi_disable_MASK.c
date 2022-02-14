
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_recv_context {struct qlcnic_host_sds_ring* sds_rings; } ;
struct qlcnic_host_sds_ring {int napi; } ;
struct qlcnic_adapter {scalar_t__ is_up; int max_sds_rings; struct qlcnic_recv_context* recv_ctx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qlcnic_host_sds_ring*) ;

void FUNC_3(struct qlcnic_adapter *VAR_1)
{
 int VAR_2;
 struct qlcnic_host_sds_ring *VAR_3;
 struct qlcnic_recv_context *VAR_4 = VAR_1->recv_ctx;

 if (VAR_1->is_up != VAR_0)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->max_sds_rings; VAR_2++) {
  VAR_3 = &VAR_4->sds_rings[VAR_2];
  FUNC_2(VAR_3);
  FUNC_1(&VAR_3->napi);
  FUNC_0(&VAR_3->napi);
 }
}
