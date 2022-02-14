
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8180_priv {int txringcount; int txbeaconcount; int txbuffsize; int txbeaconbufs; int txbeaconringdma; int txbeaconring; int txhpbufs; int txhpringdma; int txhpring; int txvopbufs; int txvopringdma; int txvopring; int txvipbufs; int txvipringdma; int txvipring; int txbepbufs; int txbepringdma; int txbepring; int txbkpbufs; int txbkpringdma; int txbkpring; int txmapbufs; int txmapringdma; int txmapring; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int *,int ,int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pci_dev*,int,int ,int ) ;

void FUNC_3(struct net_device *VAR_0)
{
 struct r8180_priv *VAR_1 = (struct r8180_priv *)FUNC_1(VAR_0);
 struct pci_dev *VAR_2=VAR_1->pdev;
 int VAR_3 = VAR_1->txringcount;

 FUNC_2(VAR_2, sizeof(u32)*8*VAR_3+256,
       VAR_1->txmapring, VAR_1->txmapringdma);
 FUNC_0(VAR_0,&(VAR_1->txmapbufs),VAR_1->txbuffsize,1);

 FUNC_2(VAR_2, sizeof(u32)*8*VAR_3+256,
       VAR_1->txbkpring, VAR_1->txbkpringdma);
 FUNC_0(VAR_0,&(VAR_1->txbkpbufs),VAR_1->txbuffsize,1);

 FUNC_2(VAR_2, sizeof(u32)*8*VAR_3+256,
       VAR_1->txbepring, VAR_1->txbepringdma);
 FUNC_0(VAR_0,&(VAR_1->txbepbufs),VAR_1->txbuffsize,1);

 FUNC_2(VAR_2, sizeof(u32)*8*VAR_3+256,
       VAR_1->txvipring, VAR_1->txvipringdma);
 FUNC_0(VAR_0,&(VAR_1->txvipbufs),VAR_1->txbuffsize,1);

 FUNC_2(VAR_2, sizeof(u32)*8*VAR_3+256,
       VAR_1->txvopring, VAR_1->txvopringdma);
 FUNC_0(VAR_0,&(VAR_1->txvopbufs),VAR_1->txbuffsize,1);

 FUNC_2(VAR_2, sizeof(u32)*8*VAR_3+256,
       VAR_1->txhpring, VAR_1->txhpringdma);
 FUNC_0(VAR_0,&(VAR_1->txhpbufs),VAR_1->txbuffsize,1);

 VAR_3 = VAR_1->txbeaconcount;
 FUNC_2(VAR_2, sizeof(u32)*8*VAR_3+256,
       VAR_1->txbeaconring, VAR_1->txbeaconringdma);
 FUNC_0(VAR_0,&(VAR_1->txbeaconbufs),VAR_1->txbuffsize,1);
}
