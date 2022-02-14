
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct Scsi_Host {int host_lock; int host_no; scalar_t__ hostdata; } ;
typedef long off_t ;
struct TYPE_4__ {TYPE_2__* icmb; TYPE_2__* ogmb; } ;
struct TYPE_6__ {int bus_on; int bus_off; int next_ogmb; int control; TYPE_1__ mb; int int_counter; int dma; int irq; int iobase; int rev2; int rev1; } ;
struct TYPE_5__ {scalar_t__ status; } ;
typedef TYPE_2__ Mailbox ;
typedef TYPE_3__ Adapter ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,...) ;
 size_t VAR_2 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (char*,int,struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_3, char *VAR_4, char **VAR_5, off_t VAR_6, int VAR_7, int VAR_8)
{
 Adapter *VAR_9 = (Adapter *)VAR_3->hostdata;
 unsigned long VAR_10;
 char *VAR_11 = VAR_4;
 if (VAR_8)
  return (FUNC_3(VAR_4, VAR_7, VAR_3));

 FUNC_1(VAR_3->host_lock, VAR_10);
 FUNC_0("Host scsi%d: Western Digital WD-7000 (rev %d.%d)\n", VAR_3->host_no, VAR_9->rev1, VAR_9->rev2);
 FUNC_0("  IO base:      0x%x\n", VAR_9->iobase);
 FUNC_0("  IRQ:          %d\n", VAR_9->irq);
 FUNC_0("  DMA channel:  %d\n", VAR_9->dma);
 FUNC_0("  Interrupts:   %d\n", VAR_9->int_counter);
 FUNC_0("  BUS_ON time:  %d nanoseconds\n", VAR_9->bus_on * 125);
 FUNC_0("  BUS_OFF time: %d nanoseconds\n", VAR_9->bus_off * 125);
 FUNC_2(VAR_3->host_lock, VAR_10);




 *VAR_5 = VAR_4 + VAR_6;

 if ((VAR_11 - VAR_4) < VAR_6)
  return (0);
 else if ((VAR_11 - VAR_4 - VAR_6) < VAR_7)
  return (VAR_11 - VAR_4 - VAR_6);
 else
  return (VAR_7);
}
