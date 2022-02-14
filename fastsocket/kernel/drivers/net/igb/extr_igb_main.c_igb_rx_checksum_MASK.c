
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status_error; } ;
struct TYPE_6__ {TYPE_2__ upper; } ;
union e1000_adv_rx_desc {TYPE_3__ wb; } ;
struct sk_buff {int len; int ip_summed; } ;
struct TYPE_4__ {int csum_err; } ;
struct igb_ring {int dev; TYPE_1__ rx_stats; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (union e1000_adv_rx_desc*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static inline void FUNC_4(struct igb_ring *VAR_9,
       union e1000_adv_rx_desc *VAR_10,
       struct sk_buff *VAR_11)
{
 VAR_11->ip_summed = VAR_0;


 if (FUNC_1(VAR_10, VAR_4))
  return;


 if (!FUNC_3(VAR_7, &VAR_9->flags))
  return;


 if (FUNC_1(VAR_10,
        VAR_3 |
        VAR_2)) {




  if (!((VAR_11->len == 60) &&
        FUNC_3(VAR_8, &VAR_9->flags))) {
   VAR_9->rx_stats.csum_err++;
  }

  return;
 }

 if (FUNC_1(VAR_10, VAR_5 |
          VAR_6))
  VAR_11->ip_summed = VAR_1;

 FUNC_0(VAR_9->dev, "cksum success: bits %08X\n",
  FUNC_2(VAR_10->wb.upper.status_error));
}
