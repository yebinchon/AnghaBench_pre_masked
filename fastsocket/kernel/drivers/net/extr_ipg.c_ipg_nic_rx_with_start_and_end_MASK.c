
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int ip_summed; int protocol; } ;
struct net_device {int dummy; } ;
struct ipg_rx {int rfs; } ;
struct ipg_jumbo {int * skb; scalar_t__ current_size; scalar_t__ found_start; } ;
struct ipg_nic_private {int rxfrag_size; struct sk_buff** rx_buff; struct ipg_jumbo jumbo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3,
       struct ipg_nic_private *VAR_4,
       struct ipg_rx *VAR_5, unsigned VAR_6)
{
 struct ipg_jumbo *VAR_7 = &VAR_4->jumbo;
 struct sk_buff *VAR_8;
 int VAR_9;

 if (VAR_7->found_start) {
  FUNC_0(VAR_7->skb);
  VAR_7->found_start = 0;
  VAR_7->current_size = 0;
  VAR_7->skb = ((void*)0);
 }


 if (FUNC_2(VAR_3) != VAR_2)
  return;

 VAR_8 = VAR_4->rx_buff[VAR_6];
 if (!VAR_8)
  return;


 VAR_9 = FUNC_3(VAR_5->rfs) & VAR_1;
 if (VAR_9 > VAR_4->rxfrag_size)
  VAR_9 = VAR_4->rxfrag_size;

 FUNC_5(VAR_8, VAR_9);
 VAR_8->protocol = FUNC_1(VAR_8, VAR_3);
 VAR_8->ip_summed = VAR_0;
 FUNC_4(VAR_8);
 VAR_4->rx_buff[VAR_6] = ((void*)0);
}
