
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_host_sds_ring {int napi; } ;
struct qlcnic_hardware_context {scalar_t__ diag_test; int diag_cnt; } ;
struct qlcnic_adapter {TYPE_1__* recv_ctx; int state; struct qlcnic_hardware_context* ahw; } ;
typedef scalar_t__ irqreturn_t ;
struct TYPE_2__ {struct qlcnic_host_sds_ring* sds_rings; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (int ,int *) ;

irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct qlcnic_adapter *VAR_6 = VAR_5;
 struct qlcnic_host_sds_ring *VAR_7;
 struct qlcnic_hardware_context *VAR_8 = VAR_6->ahw;

 if (FUNC_1(VAR_6) == VAR_1)
  return VAR_1;

 FUNC_3(VAR_6);

 if (VAR_8->diag_test == VAR_2) {
  VAR_8->diag_cnt++;
  FUNC_2(VAR_6);
  return VAR_0;
 }

 if (!FUNC_4(VAR_3, &VAR_6->state)) {
  FUNC_2(VAR_6);
 } else {
  VAR_7 = &VAR_6->recv_ctx->sds_rings[0];
  FUNC_0(&VAR_7->napi);
 }

 return VAR_0;
}
