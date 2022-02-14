
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct vnic_rq_buf {int len; int dma_addr; struct sk_buff* os_buf; } ;
struct vnic_rq {int vdev; } ;
struct sk_buff {int ip_summed; int csum; int protocol; scalar_t__ data; } ;
struct net_device {int features; } ;
struct enic {int * napi; int vlan_group; scalar_t__ csum_rx_enabled; int rq_truncated_pkts; int rq_bad_fcs; int pdev; struct net_device* netdev; } ;
struct cq_enet_rq_desc {int dummy; } ;
struct cq_desc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cq_enet_rq_desc*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int *,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (int *,int ,scalar_t__,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int ,scalar_t__) ;
 struct enic* FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct vnic_rq *VAR_5,
 struct cq_desc *VAR_6, struct vnic_rq_buf *VAR_7,
 int VAR_8, void *VAR_9)
{
 struct enic *VAR_10 = FUNC_11(VAR_5->vdev);
 struct net_device *VAR_11 = VAR_10->netdev;
 struct sk_buff *VAR_12;

 u8 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 u8 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 u8 VAR_24, VAR_25, VAR_26, VAR_27;
 u8 VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 u8 VAR_34;
 u16 VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
 u32 VAR_40;

 if (VAR_8)
  return;

 VAR_12 = VAR_7->os_buf;
 FUNC_7(VAR_12->data - VAR_3);
 FUNC_6(VAR_10->pdev, VAR_7->dma_addr,
  VAR_7->len, VAR_4);

 FUNC_0((struct cq_enet_rq_desc *)VAR_6,
  &VAR_13, &VAR_14, &VAR_35, &VAR_36,
  &VAR_17, &VAR_19, &VAR_15, &VAR_16, &VAR_32,
  &VAR_33, &VAR_40, &VAR_37,
  &VAR_34, &VAR_18, &VAR_38, &VAR_39,
  &VAR_20, &VAR_21, &VAR_22,
  &VAR_23, &VAR_24, &VAR_25, &VAR_26,
  &VAR_27, &VAR_28, &VAR_29, &VAR_30,
  &VAR_31);

 if (VAR_34) {

  if (!VAR_31) {
   if (VAR_37 > 0)
    VAR_10->rq_bad_fcs++;
   else if (VAR_37 == 0)
    VAR_10->rq_truncated_pkts++;
  }

  FUNC_1(VAR_12);

  return;
 }

 if (VAR_15 && VAR_37 > 0) {




  FUNC_8(VAR_12, VAR_37);
  VAR_12->protocol = FUNC_2(VAR_12, VAR_11);

  if (VAR_10->csum_rx_enabled && !VAR_33) {
   VAR_12->csum = FUNC_3(VAR_39);
   VAR_12->ip_summed = VAR_0;
  }

  if (VAR_18 &&
   (VAR_38 & VAR_1)) {

   if (VAR_11->features & VAR_2)
    FUNC_9(&VAR_10->napi[VAR_35],
     VAR_10->vlan_group, VAR_38, VAR_12);
   else
    FUNC_10(VAR_12,
     VAR_10->vlan_group, VAR_38);

  } else {

   if (VAR_11->features & VAR_2)
    FUNC_4(&VAR_10->napi[VAR_35], VAR_12);
   else
    FUNC_5(VAR_12);

  }
 } else {




  FUNC_1(VAR_12);
 }
}
