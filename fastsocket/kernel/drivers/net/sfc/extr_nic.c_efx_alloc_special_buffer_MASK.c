
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct efx_special_buffer {unsigned int dma_addr; unsigned int len; unsigned int entries; scalar_t__ index; int addr; } ;
struct efx_nic {scalar_t__ next_buffer_table; scalar_t__ vf_buftbl_base; int net_dev; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned int,unsigned int*,int ) ;
 scalar_t__ FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*,int ,int ,char*,scalar_t__,scalar_t__,int ,unsigned int,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct efx_nic *VAR_4,
        struct efx_special_buffer *VAR_5,
        unsigned int VAR_6)
{
 VAR_6 = FUNC_0(VAR_6, VAR_0);

 VAR_5->addr = FUNC_2(&VAR_4->pci_dev->dev, VAR_6,
       &VAR_5->dma_addr, VAR_2);
 if (!VAR_5->addr)
  return -VAR_1;
 VAR_5->len = VAR_6;
 VAR_5->entries = VAR_6 / VAR_0;
 FUNC_1(VAR_5->dma_addr & (VAR_0 - 1));


 VAR_5->index = VAR_4->next_buffer_table;
 VAR_4->next_buffer_table += VAR_5->entries;





 FUNC_4(VAR_4, VAR_3, VAR_4->net_dev,
    "allocating special buffers %d-%d at %llx+%x "
    "(virt %p phys %llx)\n", VAR_5->index,
    VAR_5->index + VAR_5->entries - 1,
    (u64)VAR_5->dma_addr, VAR_6,
    VAR_5->addr, (u64)FUNC_5(VAR_5->addr));

 return 0;
}
