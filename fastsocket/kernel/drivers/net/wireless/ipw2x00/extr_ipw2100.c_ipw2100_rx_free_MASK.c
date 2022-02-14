
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw2100_rx {int dummy; } ;
struct ipw2100_priv {TYPE_1__* rx_buffers; int pci_dev; int rx_queue; } ;
struct TYPE_2__ {int skb; int dma_addr; scalar_t__ rxp; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ipw2100_priv*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (struct ipw2100_priv*) ;

__attribute__((used)) static void FUNC_6(struct ipw2100_priv *VAR_2)
{
 int VAR_3;

 FUNC_0("enter\n");

 FUNC_1(VAR_2, &VAR_2->rx_queue);
 FUNC_5(VAR_2);

 if (!VAR_2->rx_buffers)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2->rx_buffers[VAR_3].rxp) {
   FUNC_4(VAR_2->pci_dev,
      VAR_2->rx_buffers[VAR_3].dma_addr,
      sizeof(struct ipw2100_rx),
      VAR_0);
   FUNC_2(VAR_2->rx_buffers[VAR_3].skb);
  }
 }

 FUNC_3(VAR_2->rx_buffers);
 VAR_2->rx_buffers = ((void*)0);

 FUNC_0("exit\n");
}
