
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8180_priv {int* rxring; int rxringdma; int rxbufferhead; int rxbuffer; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,void*,int,int *) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 void* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int,int*) ;
 int FUNC_6 (struct pci_dev*,void*,int,int ) ;

short FUNC_7(struct net_device *VAR_2, u16 VAR_3, int VAR_4)
{
 int VAR_5;
 u32 *VAR_6;
 u32 *VAR_7;
 dma_addr_t VAR_8,VAR_9;
 struct r8180_priv *VAR_10 = (struct r8180_priv *)FUNC_3(VAR_2);
 struct pci_dev *VAR_11=VAR_10->pdev;
 void *VAR_12;
 u8 VAR_13;

 VAR_13 = 8;

 if((VAR_3 & 0xfff) != VAR_3){
  FUNC_0 ("RX buffer allocation too large");
  return -1;
 }

 VAR_6 = (u32*)FUNC_5(VAR_11,sizeof(u32)*VAR_13*VAR_4+256,
       &VAR_8);

 if (VAR_8 & 0xff)




  FUNC_1(1, "DMA buffer is not aligned\n");

 VAR_10->rxring=VAR_6;
 VAR_10->rxringdma=VAR_8;
 VAR_7=VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if ((VAR_12= FUNC_4(VAR_3 * sizeof(u8),VAR_0)) == ((void*)0)){
   FUNC_0("Failed to kmalloc RX buffer");
   return -1;
  }

  VAR_9 = FUNC_6(VAR_11,VAR_12,VAR_3 * sizeof(u8),
      VAR_1);

  if(-1 == FUNC_2(&(VAR_10->rxbuffer), VAR_12,VAR_9,
      &(VAR_10->rxbufferhead))){
      FUNC_0("Unable to allocate mem RX buf");
      return -1;
  }
  *VAR_7 = 0;
  *VAR_7 = *VAR_7 |( VAR_3&0xfff);
  *(VAR_7+2) = (u32)VAR_9;
  *VAR_7 = *VAR_7 |(1<<31);

  VAR_7=VAR_7+VAR_13;
 }

 *(VAR_7-VAR_13) = *(VAR_7-VAR_13) | (1<<30);

 return 0;
}
