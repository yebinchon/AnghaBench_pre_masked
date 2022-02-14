
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vlan_group {int dummy; } ;
struct sk_buff {int dev; int ip_summed; int protocol; scalar_t__ data; } ;
struct sge_rspq {int polling; } ;
struct sge_qset {int napi; int * port_stats; } ;
struct TYPE_4__ {int flags; } ;
struct port_info {int rx_offload; size_t first_qset; TYPE_2__ iscsic; struct vlan_group* vlan_grp; } ;
struct cpl_rx_pkt {size_t iff; scalar_t__ csum; int vlan; int vlan_valid; int fragment; scalar_t__ csum_valid; } ;
struct TYPE_3__ {struct sge_qset* qs; } ;
struct adapter {TYPE_1__ sge; int * port; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct vlan_group*,unsigned short,int ) ;
 int FUNC_1 (struct port_info*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct vlan_group*) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 struct port_info* FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 unsigned short FUNC_10 (int ) ;
 struct sge_qset* FUNC_11 (struct sge_rspq*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*,int) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int *,struct vlan_group*,unsigned short,struct sk_buff*) ;
 int FUNC_17 (struct vlan_group*,unsigned short) ;

__attribute__((used)) static void FUNC_18(struct adapter *VAR_5, struct sge_rspq *VAR_6,
     struct sk_buff *VAR_7, int VAR_8, int VAR_9)
{
 struct cpl_rx_pkt *VAR_10 = (struct cpl_rx_pkt *)(VAR_7->data + VAR_8);
 struct sge_qset *VAR_11 = FUNC_11(VAR_6);
 struct port_info *VAR_12;

 FUNC_13(VAR_7, sizeof(*VAR_10) + VAR_8);
 VAR_7->protocol = FUNC_3(VAR_7, VAR_5->port[VAR_10->iff]);
 VAR_12 = FUNC_7(VAR_7->dev);
 if ((VAR_12->rx_offload & VAR_3) && VAR_10->csum_valid &&
     VAR_10->csum == FUNC_4(0xffff) && !VAR_10->fragment) {
  VAR_11->port_stats[VAR_1]++;
  VAR_7->ip_summed = VAR_0;
 } else
  FUNC_12(VAR_7);
 FUNC_14(VAR_7, VAR_11 - &VAR_5->sge.qs[VAR_12->first_qset]);

 if (FUNC_15(VAR_10->vlan_valid)) {
  struct vlan_group *VAR_13 = VAR_12->vlan_grp;

  VAR_11->port_stats[VAR_2]++;
  if (FUNC_5(VAR_13))
   if (VAR_9)
    FUNC_16(&VAR_11->napi, VAR_13,
       FUNC_10(VAR_10->vlan), VAR_7);
   else {
    if (FUNC_15(VAR_12->iscsic.flags)) {
     unsigned short VAR_14 = FUNC_10(VAR_10->vlan) &
        VAR_4;
     VAR_7->dev = FUNC_17(VAR_13,
          VAR_14);
     FUNC_1(VAR_12, VAR_7);
    }
    FUNC_0(VAR_7, VAR_13, FUNC_10(VAR_10->vlan),
          VAR_6->polling);
   }
  else
   FUNC_2(VAR_7);
 } else if (VAR_6->polling) {
  if (VAR_9)
   FUNC_6(&VAR_11->napi, VAR_7);
  else {
   if (FUNC_15(VAR_12->iscsic.flags))
    FUNC_1(VAR_12, VAR_7);
   FUNC_8(VAR_7);
  }
 } else
  FUNC_9(VAR_7);
}
