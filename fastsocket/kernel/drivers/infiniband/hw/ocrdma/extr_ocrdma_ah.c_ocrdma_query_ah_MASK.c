
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ocrdma_grh {int tclass_flow; int pdid_hoplimit; int * dgid; } ;
struct ocrdma_eth_vlan {int dummy; } ;
struct ocrdma_eth_basic {int dummy; } ;
struct TYPE_4__ {int vlan_tag; } ;
struct ocrdma_av {int valid; TYPE_1__ eth_hdr; } ;
struct ocrdma_ah {int sgid_index; struct ocrdma_av* av; } ;
struct TYPE_5__ {int * raw; } ;
struct TYPE_6__ {int hop_limit; int traffic_class; int flow_label; int sgid_index; TYPE_2__ dgid; } ;
struct ib_ah_attr {int sl; TYPE_3__ grh; int ah_flags; } ;
struct ib_ah {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ocrdma_ah* FUNC_3 (struct ib_ah*) ;
 int FUNC_4 (int *,int *,int) ;

int FUNC_5(struct ib_ah *VAR_1, struct ib_ah_attr *VAR_2)
{
 struct ocrdma_ah *VAR_3 = FUNC_3(VAR_1);
 struct ocrdma_av *VAR_4 = VAR_3->av;
 struct ocrdma_grh *VAR_5;
 VAR_2->ah_flags |= VAR_0;
 if (VAR_3->av->valid & FUNC_0(1)) {
  VAR_5 = (struct ocrdma_grh *)((u8 *)VAR_3->av +
    sizeof(struct ocrdma_eth_vlan));
  VAR_2->sl = FUNC_1(VAR_4->eth_hdr.vlan_tag) >> 13;
 } else {
  VAR_5 = (struct ocrdma_grh *)((u8 *)VAR_3->av +
     sizeof(struct ocrdma_eth_basic));
  VAR_2->sl = 0;
 }
 FUNC_4(&VAR_2->grh.dgid.raw[0], &VAR_5->dgid[0], sizeof(VAR_5->dgid));
 VAR_2->grh.sgid_index = VAR_3->sgid_index;
 VAR_2->grh.hop_limit = FUNC_2(VAR_5->pdid_hoplimit) & 0xff;
 VAR_2->grh.traffic_class = FUNC_2(VAR_5->tclass_flow) >> 24;
 VAR_2->grh.flow_label = FUNC_2(VAR_5->tclass_flow) & 0x00ffffffff;
 return 0;
}
