
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pkt_info; } ;
struct TYPE_8__ {TYPE_1__ hs_rss; } ;
struct TYPE_9__ {TYPE_2__ lo_dword; } ;
struct TYPE_10__ {TYPE_3__ lower; } ;
union ixgbe_adv_rx_desc {TYPE_4__ wb; } ;
struct sk_buff {int ip_summed; } ;
struct TYPE_11__ {int csum_err; } ;
struct ixgbe_ring {TYPE_5__ rx_stats; int state; TYPE_6__* netdev; } ;
typedef int __le16 ;
struct TYPE_12__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (union ixgbe_adv_rx_desc*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static inline void FUNC_4(struct ixgbe_ring *VAR_8,
         union ixgbe_adv_rx_desc *VAR_9,
         struct sk_buff *VAR_10)
{
 FUNC_2(VAR_10);


 if (!(VAR_8->netdev->features & VAR_6))
  return;


 if (FUNC_1(VAR_9, VAR_4) &&
     FUNC_1(VAR_9, VAR_1)) {
  VAR_8->rx_stats.csum_err++;
  return;
 }

 if (!FUNC_1(VAR_9, VAR_5))
  return;

 if (FUNC_1(VAR_9, VAR_2)) {
  __le16 VAR_11 = VAR_9->wb.lower.lo_dword.hs_rss.pkt_info;





  if ((VAR_11 & FUNC_0(VAR_3)) &&
      FUNC_3(VAR_7, &VAR_8->state))
   return;

  VAR_8->rx_stats.csum_err++;
  return;
 }


 VAR_10->ip_summed = VAR_0;
}
