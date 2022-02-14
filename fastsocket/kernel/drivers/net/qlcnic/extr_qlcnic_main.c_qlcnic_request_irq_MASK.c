
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_recv_context {struct qlcnic_host_tx_ring* sds_rings; } ;
struct qlcnic_host_tx_ring {int name; int irq; } ;
struct qlcnic_host_sds_ring {int name; int irq; } ;
struct qlcnic_adapter {int flags; int max_sds_rings; int max_drv_tx_rings; struct qlcnic_host_tx_ring* tx_ring; TYPE_1__* ahw; int irq; struct qlcnic_recv_context* recv_ctx; struct net_device* netdev; } ;
struct net_device {char* name; int irq; } ;
typedef int irq_handler_t ;
struct TYPE_2__ {scalar_t__ diag_test; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ,unsigned long,int ,struct qlcnic_host_tx_ring*) ;
 int FUNC_4 (int ,int,char*,...) ;

__attribute__((used)) static int
FUNC_5(struct qlcnic_adapter *VAR_12)
{
 irq_handler_t VAR_13;
 struct qlcnic_host_sds_ring *VAR_14;
 struct qlcnic_host_tx_ring *VAR_15;
 int VAR_16, VAR_17, VAR_18;

 unsigned long VAR_19 = 0;
 struct net_device *VAR_20 = VAR_12->netdev;
 struct qlcnic_recv_context *VAR_21 = VAR_12->recv_ctx;

 if (VAR_12->ahw->diag_test == VAR_1) {
  if (FUNC_1(VAR_12))
   VAR_13 = VAR_11;
  if (!FUNC_0(VAR_12))
   VAR_19 |= VAR_0;

 } else {
  if (VAR_12->flags & VAR_3)
   VAR_13 = VAR_9;
  else if (VAR_12->flags & VAR_4)
   VAR_13 = VAR_8;
  else {
   VAR_19 |= VAR_0;
   if (FUNC_1(VAR_12))
    VAR_13 = VAR_7;
   else
    VAR_13 = VAR_6;
  }
 }
 VAR_12->irq = VAR_20->irq;

 if (VAR_12->ahw->diag_test != VAR_2) {
  if (FUNC_1(VAR_12) ||
      (FUNC_2(VAR_12) &&
       (VAR_12->flags & VAR_3))) {
   VAR_18 = VAR_12->max_sds_rings;
   for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
    VAR_14 = &VAR_21->sds_rings[VAR_17];
    if (FUNC_1(VAR_12) &&
        (VAR_17 == (VAR_18 - 1))) {
     if (!(VAR_12->flags &
           VAR_3))
      FUNC_4(VAR_14->name,
        sizeof(VAR_14->name),
        "qlcnic");
     else
      FUNC_4(VAR_14->name,
        sizeof(VAR_14->name),
        "%s-tx-0-rx-%d",
        VAR_20->name, VAR_17);
    } else {
     FUNC_4(VAR_14->name,
       sizeof(VAR_14->name),
       "%s-rx-%d",
       VAR_20->name, VAR_17);
    }
    VAR_16 = FUNC_3(VAR_14->irq, VAR_13, VAR_19,
        VAR_14->name, VAR_14);
    if (VAR_16)
     return VAR_16;
   }
  }
  if (FUNC_2(VAR_12) &&
      (VAR_12->flags & VAR_3) &&
      !(VAR_12->flags & VAR_5)) {
   VAR_13 = VAR_10;
   for (VAR_17 = 0; VAR_17 < VAR_12->max_drv_tx_rings;
        VAR_17++) {
    VAR_15 = &VAR_12->tx_ring[VAR_17];
    FUNC_4(VAR_15->name, sizeof(VAR_15->name),
      "%s-tx-%d", VAR_20->name, VAR_17);
    VAR_16 = FUNC_3(VAR_15->irq, VAR_13, VAR_19,
        VAR_15->name, VAR_15);
    if (VAR_16)
     return VAR_16;
   }
  }
 }
 return 0;
}
