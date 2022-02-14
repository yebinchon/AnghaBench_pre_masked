
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw2100_rx_packet {TYPE_1__* skb; int dma_addr; struct ipw2100_rx* rxp; } ;
struct ipw2100_rx {int dummy; } ;
struct ipw2100_priv {int pci_dev; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_2(struct ipw2100_priv *VAR_2,
        struct ipw2100_rx_packet *VAR_3)
{
 VAR_3->skb = FUNC_0(sizeof(struct ipw2100_rx));
 if (!VAR_3->skb)
  return -VAR_0;

 VAR_3->rxp = (struct ipw2100_rx *)VAR_3->skb->data;
 VAR_3->dma_addr = FUNC_1(VAR_2->pci_dev, VAR_3->skb->data,
       sizeof(struct ipw2100_rx),
       VAR_1);



 return 0;
}
