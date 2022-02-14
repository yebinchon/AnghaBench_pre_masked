
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_recv_context {struct qlcnic_host_sds_ring* sds_rings; } ;
struct qlcnic_host_sds_ring {int napi; } ;
struct qlcnic_adapter {int max_sds_rings; struct qlcnic_recv_context* recv_ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct qlcnic_recv_context*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

void FUNC_3(struct qlcnic_adapter *VAR_0)
{
 int VAR_1;
 struct qlcnic_host_sds_ring *VAR_2;
 struct qlcnic_recv_context *VAR_3 = VAR_0->recv_ctx;

 for (VAR_1 = 0; VAR_1 < VAR_0->max_sds_rings; VAR_1++) {
  VAR_2 = &VAR_3->sds_rings[VAR_1];
  FUNC_0(&VAR_2->napi);
 }

 FUNC_1(VAR_0->recv_ctx);
 FUNC_2(VAR_0);
}
