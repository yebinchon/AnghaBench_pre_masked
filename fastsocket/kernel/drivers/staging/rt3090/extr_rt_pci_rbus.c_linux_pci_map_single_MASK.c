
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dma_addr_t ;
struct TYPE_6__ {int pci_dev; } ;
struct TYPE_5__ {scalar_t__ OS_Cookie; } ;
struct TYPE_4__ {void* pSrcBufData; size_t SrcBufLen; } ;
typedef TYPE_1__* PTX_BLK ;
typedef TYPE_2__* PRTMP_ADAPTER ;
typedef TYPE_3__* POS_COOKIE ;


 int FUNC_0 (int ,void*,size_t,int) ;

dma_addr_t FUNC_1(void *VAR_0, void *VAR_1, size_t VAR_2, int VAR_3, int VAR_4)
{
 PRTMP_ADAPTER VAR_5;
 POS_COOKIE VAR_6;
 VAR_5 = (PRTMP_ADAPTER)VAR_0;
 VAR_6 = (POS_COOKIE)VAR_5->OS_Cookie;

 if (VAR_3 == 1)
 {
  PTX_BLK VAR_7;
  VAR_7 = (PTX_BLK)VAR_1;
  return FUNC_0(VAR_6->pci_dev, VAR_7->pSrcBufData, VAR_7->SrcBufLen, VAR_4);
 }
 else
 {
  return FUNC_0(VAR_6->pci_dev, VAR_1, VAR_2, VAR_4);
 }

}
