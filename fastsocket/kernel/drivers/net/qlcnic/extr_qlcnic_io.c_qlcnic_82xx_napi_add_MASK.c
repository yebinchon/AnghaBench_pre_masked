
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_recv_context {struct qlcnic_host_sds_ring* sds_rings; } ;
struct qlcnic_host_sds_ring {int napi; } ;
struct qlcnic_adapter {int max_sds_rings; struct qlcnic_recv_context* recv_ctx; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int *,int ,int) ;
 scalar_t__ FUNC_1 (struct qlcnic_recv_context*,int) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_3 (struct qlcnic_recv_context*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_4(struct qlcnic_adapter *VAR_4,
    struct net_device *VAR_5)
{
 int VAR_6, VAR_7;
 struct qlcnic_host_sds_ring *VAR_8;
 struct qlcnic_recv_context *VAR_9 = VAR_4->recv_ctx;

 if (FUNC_1(VAR_9, VAR_4->max_sds_rings))
  return -VAR_0;

 VAR_7 = VAR_4->max_sds_rings;

 for (VAR_6 = 0; VAR_6 < VAR_4->max_sds_rings; VAR_6++) {
  VAR_8 = &VAR_9->sds_rings[VAR_6];
  if (VAR_6 == VAR_4->max_sds_rings - 1)
   FUNC_0(VAR_5, &VAR_8->napi, VAR_2,
           VAR_1 / VAR_7);
  else
   FUNC_0(VAR_5, &VAR_8->napi, VAR_3,
           VAR_1*2);
 }

 if (FUNC_2(VAR_4, VAR_5)) {
  FUNC_3(VAR_9);
  return -VAR_0;
 }

 return 0;
}
