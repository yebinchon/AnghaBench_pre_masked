
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8180_priv {int rxringcount; int rxbuffersize; int rxbuffer; int rxringdma; int rxring; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int *,int ,int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pci_dev*,int,int ,int ) ;

void FUNC_3(struct net_device *VAR_0)
{
 struct r8180_priv *VAR_1 = (struct r8180_priv *)FUNC_1(VAR_0);
 struct pci_dev *VAR_2 = VAR_1->pdev;
 int VAR_3 = VAR_1->rxringcount;

 FUNC_2(VAR_2, sizeof(u32)*8*VAR_3+256,
       VAR_1->rxring, VAR_1->rxringdma);

 FUNC_0(VAR_0,&(VAR_1->rxbuffer),VAR_1->rxbuffersize,0);
}
