
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8180_priv {int txmapringdma; int* txmapring; int txbkpringdma; int* txbkpring; int txbepringdma; int* txbepring; int txvipringdma; int* txvipring; int txvopringdma; int* txvopring; int txhpringdma; int* txhpring; int txbeaconringdma; int* txbeaconring; int txbeaconbufs; int txhpbufs; int txvopbufs; int txvipbufs; int txbepbufs; int txbkpbufs; int txmapbufs; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (char*) ;
 short VAR_0 ;







 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,void*,int,int *) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int,int*) ;

short FUNC_5(struct net_device *VAR_1, int VAR_2, int VAR_3,
    int VAR_4)
{
 int VAR_5;
 u32 *VAR_6;
 u32 *VAR_7;
 dma_addr_t VAR_8, VAR_9;
 struct r8180_priv *VAR_10 = (struct r8180_priv *)FUNC_3(VAR_1);
 struct pci_dev *VAR_11 = VAR_10->pdev;
 void *VAR_12;

 if((VAR_2 & 0xfff) != VAR_2) {
  FUNC_0 ("TX buffer allocation too large");
  return 0;
 }
 VAR_6 = (u32*)FUNC_4(VAR_11,
       sizeof(u32)*8*VAR_3+256, &VAR_8);
 if (VAR_6 == ((void*)0))
  return -1;

 if (VAR_8 & 0xff)




  FUNC_1(1, "DMA buffer is not aligned\n");

 VAR_7 = VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_12 = (void *)FUNC_4(VAR_11, VAR_2, &VAR_9);
  if (VAR_12 == ((void*)0))
   return -VAR_0;

  switch(VAR_4) {
  case 130:
   if(-1 == FUNC_2(&(VAR_10->txmapbufs),VAR_12,VAR_9,((void*)0))){
    FUNC_0("Unable to allocate mem for buffer NP");
    return -VAR_0;
   }
   break;
  case 132:
   if(-1 == FUNC_2(&(VAR_10->txbkpbufs),VAR_12,VAR_9,((void*)0))){
    FUNC_0("Unable to allocate mem for buffer LP");
    return -VAR_0;
   }
   break;
  case 133:
   if(-1 == FUNC_2(&(VAR_10->txbepbufs),VAR_12,VAR_9,((void*)0))){
    FUNC_0("Unable to allocate mem for buffer NP");
    return -VAR_0;
   }
   break;
  case 129:
   if(-1 == FUNC_2(&(VAR_10->txvipbufs),VAR_12,VAR_9,((void*)0))){
    FUNC_0("Unable to allocate mem for buffer LP");
    return -VAR_0;
   }
   break;
  case 128:
   if(-1 == FUNC_2(&(VAR_10->txvopbufs),VAR_12,VAR_9,((void*)0))){
    FUNC_0("Unable to allocate mem for buffer NP");
    return -VAR_0;
   }
   break;
  case 131:
   if(-1 == FUNC_2(&(VAR_10->txhpbufs),VAR_12,VAR_9,((void*)0))){
    FUNC_0("Unable to allocate mem for buffer HP");
    return -VAR_0;
   }
   break;
  case 134:
          if(-1 == FUNC_2(&(VAR_10->txbeaconbufs),VAR_12,VAR_9,((void*)0))){
   FUNC_0("Unable to allocate mem for buffer BP");
    return -VAR_0;
   }
   break;
  }
  *VAR_7 = *VAR_7 &~ (1<<31);
  *(VAR_7+2) = (u32)VAR_9;
  *(VAR_7+3) = VAR_2;

  if(VAR_5+1<VAR_3)
   *(VAR_7+4) = (u32)VAR_8+((VAR_5+1)*8*4);
  else
   *(VAR_7+4) = (u32)VAR_8;

  VAR_7=VAR_7+8;
 }

 switch(VAR_4) {
 case 130:
  VAR_10->txmapringdma=VAR_8;
  VAR_10->txmapring=VAR_6;
  break;
 case 132:
  VAR_10->txbkpringdma=VAR_8;
  VAR_10->txbkpring=VAR_6;
  break;
 case 133:
  VAR_10->txbepringdma=VAR_8;
  VAR_10->txbepring=VAR_6;
  break;
 case 129:
  VAR_10->txvipringdma=VAR_8;
  VAR_10->txvipring=VAR_6;
  break;
 case 128:
  VAR_10->txvopringdma=VAR_8;
  VAR_10->txvopring=VAR_6;
  break;
 case 131:
  VAR_10->txhpringdma=VAR_8;
  VAR_10->txhpring=VAR_6;
  break;
 case 134:
  VAR_10->txbeaconringdma=VAR_8;
  VAR_10->txbeaconring=VAR_6;
  break;

 }

 return 0;
}
