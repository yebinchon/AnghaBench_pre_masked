
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vnic_wq {int dummy; } ;
struct vlan_ethhdr {void* h_vlan_TCI; void* h_vlan_encapsulated_proto; void* h_vlan_proto; } ;
struct sk_buff {int len; } ;
struct TYPE_2__ {int dest_addr; scalar_t__ map_dest; } ;
struct fnic {int * wq_lock; int vlan_id; int pdev; int data_src_addr; TYPE_1__ ctlr; int vlan_hw_insert; int lport; struct vnic_wq* wq; } ;
struct fcoe_hdr {int fcoe_sof; } ;
struct fc_frame_header {scalar_t__ fh_r_ctl; int fh_d_id; } ;
struct fc_frame {int dummy; } ;
struct ethhdr {int h_source; int h_dest; void* h_proto; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fcoe_hdr*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ) ;
 struct fc_frame_header* FUNC_4 (struct fc_frame*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,struct sk_buff*) ;
 int FUNC_6 (struct vnic_wq*,struct sk_buff*,int ,int,int ,int ,int ,int,int,int) ;
 struct sk_buff* FUNC_7 (struct fc_frame*) ;
 int FUNC_8 (struct fc_frame*) ;
 int FUNC_9 (struct fc_frame*) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (struct fcoe_hdr*,int ,int) ;
 int FUNC_13 (int ,struct ethhdr*,int,int ) ;
 int FUNC_14 (int ,int ,int,int ) ;
 scalar_t__ FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (struct vnic_wq*) ;

__attribute__((used)) static int FUNC_20(struct fnic *VAR_6, struct fc_frame *VAR_7)
{
 struct vnic_wq *VAR_8 = &VAR_6->wq[0];
 struct sk_buff *VAR_9;
 dma_addr_t VAR_10;
 struct ethhdr *VAR_11;
 struct vlan_ethhdr *VAR_12;
 struct fcoe_hdr *VAR_13;
 struct fc_frame_header *VAR_14;
 u32 VAR_15, VAR_16;
 int VAR_17 = 0;
 unsigned long VAR_18;

 VAR_14 = FUNC_4(VAR_7);
 VAR_9 = FUNC_7(VAR_7);

 if (FUNC_18(VAR_14->fh_r_ctl == VAR_4) &&
     FUNC_5(&VAR_6->ctlr, VAR_6->lport, VAR_9))
  return 0;

 if (!VAR_6->vlan_hw_insert) {
  VAR_16 = sizeof(*VAR_12) + sizeof(*VAR_13);
  VAR_12 = (struct vlan_ethhdr *)FUNC_15(VAR_9, VAR_16);
  VAR_11 = (struct ethhdr *)VAR_12;
  VAR_12->h_vlan_proto = FUNC_10(VAR_1);
  VAR_12->h_vlan_encapsulated_proto = FUNC_10(VAR_2);
  VAR_12->h_vlan_TCI = FUNC_10(VAR_6->vlan_id);
  VAR_13 = (struct fcoe_hdr *)(VAR_12 + 1);
 } else {
  VAR_16 = sizeof(*VAR_11) + sizeof(*VAR_13);
  VAR_11 = (struct ethhdr *)FUNC_15(VAR_9, VAR_16);
  VAR_11->h_proto = FUNC_10(VAR_2);
  VAR_13 = (struct fcoe_hdr *)(VAR_11 + 1);
 }

 if (VAR_6->ctlr.map_dest)
  FUNC_3(VAR_11->h_dest, VAR_14->fh_d_id);
 else
  FUNC_11(VAR_11->h_dest, VAR_6->ctlr.dest_addr, VAR_0);
 FUNC_11(VAR_11->h_source, VAR_6->data_src_addr, VAR_0);

 VAR_15 = VAR_9->len;
 FUNC_0(VAR_15 % 4);

 FUNC_12(VAR_13, 0, sizeof(*VAR_13));
 VAR_13->fcoe_sof = FUNC_9(VAR_7);
 if (VAR_3)
  FUNC_1(VAR_13, VAR_3);

 VAR_10 = FUNC_13(VAR_6->pdev, VAR_11, VAR_15, VAR_5);

 FUNC_16(&VAR_6->wq_lock[0], VAR_18);

 if (!FUNC_19(VAR_8)) {
  FUNC_14(VAR_6->pdev, VAR_10,
     VAR_15, VAR_5);
  VAR_17 = -1;
  goto fnic_send_frame_end;
 }

 FUNC_6(VAR_8, VAR_9, VAR_10, VAR_15, FUNC_8(VAR_7),
      0 ,
      VAR_6->vlan_id, 1, 1, 1);
fnic_send_frame_end:
 FUNC_17(&VAR_6->wq_lock[0], VAR_18);

 if (VAR_17)
  FUNC_2(FUNC_7(VAR_7));

 return VAR_17;
}
