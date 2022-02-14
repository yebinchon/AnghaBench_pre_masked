
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct amd8111e_priv {scalar_t__* rx_dma_addr; struct sk_buff** rx_skbuff; scalar_t__ rx_buff_len; int pci_dev; scalar_t__* tx_dma_addr; struct sk_buff** tx_skbuff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 struct amd8111e_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4)
{
 struct amd8111e_priv *VAR_5 = FUNC_1(VAR_4);
 struct sk_buff* VAR_6;
 int VAR_7;


 for(VAR_7 = 0; VAR_7 < VAR_1; VAR_7++){
  if(VAR_5->tx_skbuff[VAR_7]){
   FUNC_2(VAR_5->pci_dev,VAR_5->tx_dma_addr[VAR_7], VAR_5->tx_skbuff[VAR_7]->len,VAR_3);
   FUNC_0 (VAR_5->tx_skbuff[VAR_7]);
   VAR_5->tx_skbuff[VAR_7] = ((void*)0);
   VAR_5->tx_dma_addr[VAR_7] = 0;
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++){
  VAR_6 = VAR_5->rx_skbuff[VAR_7];
  if(VAR_6 != ((void*)0)){
   FUNC_2(VAR_5->pci_dev,VAR_5->rx_dma_addr[VAR_7],
      VAR_5->rx_buff_len - 2,VAR_2);
   FUNC_0(VAR_5->rx_skbuff[VAR_7]);
   VAR_5->rx_skbuff[VAR_7] = ((void*)0);
   VAR_5->rx_dma_addr[VAR_7] = 0;
  }
 }

 return 0;
}
