
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* pci_dev; } ;
struct efx_buffer {unsigned int len; int addr; int dma_addr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned int,int *,int) ;

int FUNC_1(struct efx_nic *VAR_3, struct efx_buffer *VAR_4,
    unsigned int VAR_5)
{
 VAR_4->addr = FUNC_0(&VAR_3->pci_dev->dev, VAR_5,
       &VAR_4->dma_addr,
       VAR_1 | VAR_2);
 if (!VAR_4->addr)
  return -VAR_0;
 VAR_4->len = VAR_5;
 return 0;
}
