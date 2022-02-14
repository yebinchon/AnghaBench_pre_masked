
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct ipg_rx {int rfs; } ;
struct ipg_jumbo {int current_size; TYPE_1__* skb; scalar_t__ found_start; } ;
struct ipg_nic_private {int rxsupport_size; struct sk_buff** rx_buff; struct ipg_jumbo jumbo; } ;
struct TYPE_5__ {int ip_summed; int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_3,
    struct ipg_nic_private *VAR_4,
    struct ipg_rx *VAR_5, unsigned VAR_6)
{
 struct ipg_jumbo *VAR_7 = &VAR_4->jumbo;


 if (FUNC_2(VAR_3) == VAR_2) {
  struct sk_buff *VAR_8 = VAR_4->rx_buff[VAR_6];

  if (!VAR_8)
   return;

  if (VAR_7->found_start) {
   int VAR_9, VAR_10;

   VAR_9 = FUNC_4(VAR_5->rfs) & VAR_1;

   VAR_10 = VAR_9 - VAR_7->current_size;
   if (VAR_9 > VAR_4->rxsupport_size)
    FUNC_0(VAR_7->skb);
   else {
    FUNC_5(FUNC_7(VAR_7->skb, VAR_10),
           VAR_8->data, VAR_10);

    VAR_7->skb->protocol =
        FUNC_1(VAR_7->skb, VAR_3);

    VAR_7->skb->ip_summed = VAR_0;
    FUNC_6(VAR_7->skb);
   }
  }

  VAR_7->found_start = 0;
  VAR_7->current_size = 0;
  VAR_7->skb = ((void*)0);

  FUNC_3(VAR_3);
 } else {
  FUNC_0(VAR_7->skb);
  VAR_7->found_start = 0;
  VAR_7->current_size = 0;
  VAR_7->skb = ((void*)0);
 }
}
