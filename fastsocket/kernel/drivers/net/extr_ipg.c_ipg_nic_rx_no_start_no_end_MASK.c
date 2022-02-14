
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct ipg_rx {int dummy; } ;
struct ipg_jumbo {scalar_t__ current_size; int * skb; scalar_t__ found_start; } ;
struct ipg_nic_private {scalar_t__ rxsupport_size; int rxfrag_size; struct sk_buff** rx_buff; struct ipg_jumbo jumbo; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
           struct ipg_nic_private *VAR_2,
           struct ipg_rx *VAR_3, unsigned VAR_4)
{
 struct ipg_jumbo *VAR_5 = &VAR_2->jumbo;


 if (FUNC_1(VAR_1) == VAR_0) {
  struct sk_buff *VAR_6 = VAR_2->rx_buff[VAR_4];

  if (VAR_6) {
   if (VAR_5->found_start) {
    VAR_5->current_size += VAR_2->rxfrag_size;
    if (VAR_5->current_size <= VAR_2->rxsupport_size) {
     FUNC_3(FUNC_4(VAR_5->skb,
             VAR_2->rxfrag_size),
            VAR_6->data, VAR_2->rxfrag_size);
    }
   }
   FUNC_2(VAR_1);
  }
 } else {
  FUNC_0(VAR_5->skb);
  VAR_5->found_start = 0;
  VAR_5->current_size = 0;
  VAR_5->skb = ((void*)0);
 }
}
