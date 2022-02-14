
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ipg_rx {int frag_info; } ;
struct ipg_jumbo {int found_start; struct sk_buff* skb; int current_size; } ;
struct ipg_nic_private {struct sk_buff** rx_buff; int rxfrag_size; int rx_buf_sz; struct pci_dev* pdev; struct ipg_jumbo jumbo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*,int,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3,
      struct ipg_nic_private *VAR_4,
      struct ipg_rx *VAR_5, unsigned VAR_6)
{
 struct ipg_jumbo *VAR_7 = &VAR_4->jumbo;
 struct pci_dev *VAR_8 = VAR_4->pdev;
 struct sk_buff *VAR_9;


 if (FUNC_1(VAR_3) != VAR_1)
  return;


 VAR_9 = VAR_4->rx_buff[VAR_6];
 if (!VAR_9)
  return;

 if (VAR_7->found_start)
  FUNC_0(VAR_7->skb);

 FUNC_3(VAR_8, FUNC_2(VAR_5->frag_info) & ~VAR_0,
    VAR_4->rx_buf_sz, VAR_2);

 FUNC_4(VAR_9, VAR_4->rxfrag_size);

 VAR_7->found_start = 1;
 VAR_7->current_size = VAR_4->rxfrag_size;
 VAR_7->skb = VAR_9;

 VAR_4->rx_buff[VAR_6] = ((void*)0);
}
