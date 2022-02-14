
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vlan_group {int dummy; } ;
struct sk_buff {int ip_summed; scalar_t__ data_len; int truesize; scalar_t__ len; } ;
struct TYPE_4__ {int rx_cso; int pkts; int lro_merged; int lro_pkts; int vlan_ex; int rx_drops; } ;
struct TYPE_3__ {int napi; int netdev; int idx; } ;
struct sge_eth_rxq {TYPE_2__ stats; TYPE_1__ rspq; } ;
struct port_info {struct vlan_group* vlan_grp; } ;
struct pkt_gl {scalar_t__ tot_len; } ;
struct cpl_rx_pkt {int vlan_ex; int vlan; } ;
typedef scalar_t__ gro_result_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,struct pkt_gl const*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct vlan_group*) ;
 struct sk_buff* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct port_info* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct pkt_gl const*) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int *,struct vlan_group*,int ) ;

__attribute__((used)) static void FUNC_11(struct sge_eth_rxq *VAR_5, const struct pkt_gl *VAR_6,
     const struct cpl_rx_pkt *VAR_7)
{
 gro_result_t VAR_8;
 struct sk_buff *VAR_9;

 VAR_9 = FUNC_2(&VAR_5->rspq.napi);
 if (FUNC_9(!VAR_9)) {
  FUNC_8(VAR_6);
  VAR_5->stats.rx_drops++;
  return;
 }

 FUNC_0(FUNC_7(VAR_9), VAR_6, VAR_4);
 VAR_9->len = VAR_6->tot_len - VAR_4;
 VAR_9->data_len = VAR_9->len;
 VAR_9->truesize += VAR_9->data_len;
 VAR_9->ip_summed = VAR_0;
 FUNC_6(VAR_9, VAR_5->rspq.idx);

 if (FUNC_9(VAR_7->vlan_ex)) {
  struct port_info *VAR_10 = FUNC_4(VAR_5->rspq.netdev);
  struct vlan_group *VAR_11 = VAR_10->vlan_grp;

  VAR_5->stats.vlan_ex++;
  if (FUNC_1(VAR_11)) {
   VAR_8 = FUNC_10(&VAR_5->rspq.napi, VAR_11,
      FUNC_5(VAR_7->vlan));
   goto stats;
  }
 }
 VAR_8 = FUNC_3(&VAR_5->rspq.napi);
stats: if (VAR_8 == VAR_1)
  VAR_5->stats.lro_pkts++;
 else if (VAR_8 == VAR_2 || VAR_8 == VAR_3)
  VAR_5->stats.lro_merged++;
 VAR_5->stats.pkts++;
 VAR_5->stats.rx_cso++;
}
