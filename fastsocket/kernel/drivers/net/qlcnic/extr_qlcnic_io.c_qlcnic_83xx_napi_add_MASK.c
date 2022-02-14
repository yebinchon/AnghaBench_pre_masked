
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_recv_context {struct qlcnic_host_sds_ring* sds_rings; } ;
struct qlcnic_host_tx_ring {int napi; } ;
struct qlcnic_host_sds_ring {int napi; } ;
struct qlcnic_adapter {int max_sds_rings; int flags; int max_drv_tx_rings; struct qlcnic_host_tx_ring* tx_ring; struct qlcnic_recv_context* recv_ctx; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int *,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct qlcnic_recv_context*,int) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_3 (struct qlcnic_recv_context*) ;

int FUNC_4(struct qlcnic_adapter *VAR_8,
    struct net_device *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 struct qlcnic_host_sds_ring *VAR_13;
 struct qlcnic_host_tx_ring *VAR_14;
 struct qlcnic_recv_context *VAR_15 = VAR_8->recv_ctx;

 if (FUNC_1(VAR_15, VAR_8->max_sds_rings))
  return -VAR_0;

 VAR_11 = VAR_8->max_sds_rings;
 for (VAR_10 = 0; VAR_10 < VAR_8->max_sds_rings; VAR_10++) {
  VAR_13 = &VAR_15->sds_rings[VAR_10];
  if (VAR_8->flags & VAR_1) {
   if (!(VAR_8->flags & VAR_3)) {
    FUNC_0(VAR_9, &VAR_13->napi,
            VAR_7,
            VAR_2 * 2);
   } else {
    VAR_12 = VAR_2 / VAR_11;
    FUNC_0(VAR_9, &VAR_13->napi,
            VAR_4,
            VAR_12);
   }

  } else {
   FUNC_0(VAR_9, &VAR_13->napi,
           VAR_6,
           VAR_2 / VAR_11);
  }
 }

 if (FUNC_2(VAR_8, VAR_9)) {
  FUNC_3(VAR_15);
  return -VAR_0;
 }

 if ((VAR_8->flags & VAR_1) &&
     !(VAR_8->flags & VAR_3)) {
  for (VAR_10 = 0; VAR_10 < VAR_8->max_drv_tx_rings; VAR_10++) {
   VAR_14 = &VAR_8->tx_ring[VAR_10];
   FUNC_0(VAR_9, &VAR_14->napi,
           VAR_5,
           VAR_2);
  }
 }

 return 0;
}
