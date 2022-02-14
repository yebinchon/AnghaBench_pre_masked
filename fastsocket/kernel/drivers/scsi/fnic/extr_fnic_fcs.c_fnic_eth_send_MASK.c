
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_wq {int dummy; } ;
struct vlan_ethhdr {void* h_vlan_TCI; int h_vlan_encapsulated_proto; void* h_vlan_proto; } ;
struct sk_buff {int len; int data; } ;
struct fnic {int * wq_lock; int vlan_id; int pdev; int vlan_hw_insert; struct vnic_wq* wq; } ;
struct fcoe_ctlr {int dummy; } ;
struct ethhdr {int h_proto; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fnic* FUNC_0 (struct fcoe_ctlr*) ;
 int FUNC_1 (struct vnic_wq*,struct sk_buff*,int ,int ,int ,int ,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct vlan_ethhdr*,struct ethhdr*,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct vnic_wq*) ;

void FUNC_12(struct fcoe_ctlr *VAR_3, struct sk_buff *VAR_4)
{
 struct fnic *VAR_5 = FUNC_0(VAR_3);
 struct vnic_wq *VAR_6 = &VAR_5->wq[0];
 dma_addr_t VAR_7;
 struct ethhdr *VAR_8;
 struct vlan_ethhdr *VAR_9;
 unsigned long VAR_10;

 if (!VAR_5->vlan_hw_insert) {
  VAR_8 = (struct ethhdr *)FUNC_7(VAR_4);
  VAR_9 = (struct vlan_ethhdr *)FUNC_8(VAR_4,
    sizeof(*VAR_9) - sizeof(*VAR_8));
  FUNC_4(VAR_9, VAR_8, 2 * VAR_0);
  VAR_9->h_vlan_proto = FUNC_2(VAR_1);
  VAR_9->h_vlan_encapsulated_proto = VAR_8->h_proto;
  VAR_9->h_vlan_TCI = FUNC_2(VAR_5->vlan_id);
 }

 VAR_7 = FUNC_5(VAR_5->pdev, VAR_4->data, VAR_4->len, VAR_2);

 FUNC_9(&VAR_5->wq_lock[0], VAR_10);
 if (!FUNC_11(VAR_6)) {
  FUNC_6(VAR_5->pdev, VAR_7, VAR_4->len, VAR_2);
  FUNC_10(&VAR_5->wq_lock[0], VAR_10);
  FUNC_3(VAR_4);
  return;
 }

 FUNC_1(VAR_6, VAR_4, VAR_7, VAR_4->len,
          0 ,
          VAR_5->vlan_id, 1);
 FUNC_10(&VAR_5->wq_lock[0], VAR_10);
}
