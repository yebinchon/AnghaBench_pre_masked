
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
typedef int u16 ;
struct ocrdma_grh {int * dgid; void* pdid_hoplimit; void* tclass_flow; int * sgid; int * dmac; int * smac; void* eth_type; void* vlan_tag; void* roce_eth_type; } ;
struct ocrdma_eth_vlan {int * dgid; void* pdid_hoplimit; void* tclass_flow; int * sgid; int * dmac; int * smac; void* eth_type; void* vlan_tag; void* roce_eth_type; } ;
struct ocrdma_eth_basic {int dummy; } ;
struct TYPE_6__ {struct ocrdma_grh* mac_addr; } ;
struct ocrdma_dev {int ibdev; TYPE_1__ nic_info; } ;
struct ocrdma_ah {TYPE_3__* av; int sgid_index; struct ocrdma_dev* dev; } ;
struct TYPE_9__ {struct ocrdma_grh* raw; } ;
struct TYPE_7__ {int traffic_class; int flow_label; int hop_limit; TYPE_4__ dgid; int sgid_index; } ;
struct ib_ah_attr {int sl; TYPE_2__ grh; } ;
typedef int grh ;
typedef int eth ;
struct TYPE_8__ {int valid; int eth_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,struct ocrdma_grh*,int) ;
 int FUNC_3 (struct ocrdma_grh*,int ,int) ;
 int FUNC_4 (int *,int,int ,union ib_gid*) ;
 int FUNC_5 (struct ocrdma_dev*,TYPE_4__*,int *) ;
 int FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static inline int FUNC_7(struct ocrdma_ah *VAR_3,
    struct ib_ah_attr *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 u16 VAR_7; bool VAR_8 = 0;
 struct ocrdma_dev *VAR_9 = VAR_3->dev;
 struct ocrdma_eth_vlan VAR_10;
 struct ocrdma_grh VAR_11;
 int VAR_12;

 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 FUNC_3(&VAR_11, 0, sizeof(VAR_11));

 VAR_3->sgid_index = VAR_4->grh.sgid_index;

 VAR_7 = FUNC_6(&VAR_4->grh.dgid);
 if (VAR_7 && (VAR_7 < 0x1000)) {
  VAR_10.eth_type = FUNC_0(0x8100);
  VAR_10.roce_eth_type = FUNC_0(VAR_2);
  VAR_7 |= (VAR_4->sl & 7) << 13;
  VAR_10.vlan_tag = FUNC_0(VAR_7);
  VAR_12 = sizeof(struct ocrdma_eth_vlan);
  VAR_8 = 1;
 } else {
  VAR_10.eth_type = FUNC_0(VAR_2);
  VAR_12 = sizeof(struct ocrdma_eth_basic);
 }
 FUNC_2(&VAR_10.smac[0], &VAR_9->nic_info.mac_addr[0], VAR_0);
 VAR_6 = FUNC_5(VAR_9, &VAR_4->grh.dgid, &VAR_10.dmac[0]);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_4(&VAR_9->ibdev, 1, VAR_4->grh.sgid_index,
   (union ib_gid *)&VAR_11.sgid[0]);
 if (VAR_6)
  return VAR_6;

 VAR_11.tclass_flow = FUNC_1((6 << 28) |
   (VAR_4->grh.traffic_class << 24) |
   VAR_4->grh.flow_label);

 VAR_11.pdid_hoplimit = FUNC_1((VAR_5 << 16) |
   (0x1b << 8) | VAR_4->grh.hop_limit);

 FUNC_2(&VAR_11.dgid[0], VAR_4->grh.dgid.raw, sizeof(VAR_4->grh.dgid.raw));
 FUNC_2(&VAR_3->av->eth_hdr, &VAR_10, VAR_12);
 FUNC_2((u8 *)VAR_3->av + VAR_12, &VAR_11, sizeof(struct ocrdma_grh));
 if (VAR_8)
  VAR_3->av->valid |= VAR_1;
 return VAR_6;
}
