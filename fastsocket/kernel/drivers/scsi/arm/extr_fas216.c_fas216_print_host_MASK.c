
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* type; int irq; int dma; int io_base; } ;
struct TYPE_5__ {TYPE_1__ scsi; } ;
typedef TYPE_2__ FAS216_Info ;


 int FUNC_0 (char*,char*,char*,int ,int,int) ;

int FUNC_1(FAS216_Info *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_1,
   "\n"
   "Chip    : %s\n"
   " Address: 0x%p\n"
   " IRQ    : %d\n"
   " DMA    : %d\n",
   VAR_0->scsi.type, VAR_0->scsi.io_base,
   VAR_0->scsi.irq, VAR_0->scsi.dma);
}
