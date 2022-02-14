
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ioctl_len; scalar_t__ mem_addr; int * mem_ptr; int * ioremap_ptr; int max_cmds; scalar_t__ ioctl_datasize; TYPE_2__* ioctl_data; int ioctl_busaddr; int pcidev; int * subsys; int * nvram; TYPE_2__* logical_drive_info; int logical_drive_info_dma_addr; TYPE_2__* adapt; int * conf; TYPE_2__* enq; int enq_busaddr; } ;
typedef TYPE_1__ ips_ha_t ;
struct TYPE_6__ {int hw_status_start; } ;
typedef int IPS_LD_INFO ;
typedef int IPS_IO_CMD ;
typedef int IPS_ENQ ;
typedef int IPS_ADAPTER ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_5(ips_ha_t * VAR_0)
{

 FUNC_0("ips_free", 1);

 if (VAR_0) {
  if (VAR_0->enq) {
   FUNC_4(VAR_0->pcidev, sizeof(IPS_ENQ),
         VAR_0->enq, VAR_0->enq_busaddr);
   VAR_0->enq = ((void*)0);
  }

  FUNC_3(VAR_0->conf);
  VAR_0->conf = ((void*)0);

  if (VAR_0->adapt) {
   FUNC_4(VAR_0->pcidev,
         sizeof (IPS_ADAPTER) +
         sizeof (IPS_IO_CMD), VAR_0->adapt,
         VAR_0->adapt->hw_status_start);
   VAR_0->adapt = ((void*)0);
  }

  if (VAR_0->logical_drive_info) {
   FUNC_4(VAR_0->pcidev,
         sizeof (IPS_LD_INFO),
         VAR_0->logical_drive_info,
         VAR_0->logical_drive_info_dma_addr);
   VAR_0->logical_drive_info = ((void*)0);
  }

  FUNC_3(VAR_0->nvram);
  VAR_0->nvram = ((void*)0);

  FUNC_3(VAR_0->subsys);
  VAR_0->subsys = ((void*)0);

  if (VAR_0->ioctl_data) {
   FUNC_4(VAR_0->pcidev, VAR_0->ioctl_len,
         VAR_0->ioctl_data, VAR_0->ioctl_busaddr);
   VAR_0->ioctl_data = ((void*)0);
   VAR_0->ioctl_datasize = 0;
   VAR_0->ioctl_len = 0;
  }
  FUNC_2(VAR_0, VAR_0->max_cmds);


  if (VAR_0->mem_ptr) {
   FUNC_1(VAR_0->ioremap_ptr);
   VAR_0->ioremap_ptr = ((void*)0);
   VAR_0->mem_ptr = ((void*)0);
  }

  VAR_0->mem_addr = 0;

 }
}
