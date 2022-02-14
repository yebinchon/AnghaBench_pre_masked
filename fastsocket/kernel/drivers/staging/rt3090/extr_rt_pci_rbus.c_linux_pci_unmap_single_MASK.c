
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int dma_addr_t ;
struct TYPE_4__ {int pci_dev; } ;
struct TYPE_3__ {scalar_t__ OS_Cookie; } ;
typedef TYPE_1__* PRTMP_ADAPTER ;
typedef TYPE_2__* POS_COOKIE ;


 int FUNC_0 (int ,int ,size_t,int) ;

void FUNC_1(void *VAR_0, dma_addr_t VAR_1, size_t VAR_2, int VAR_3)
{
 PRTMP_ADAPTER VAR_4;
 POS_COOKIE VAR_5;

 VAR_4=(PRTMP_ADAPTER)VAR_0;
 VAR_5 = (POS_COOKIE)VAR_4->OS_Cookie;

 FUNC_0(VAR_5->pci_dev, VAR_1, VAR_2, VAR_3);

}
