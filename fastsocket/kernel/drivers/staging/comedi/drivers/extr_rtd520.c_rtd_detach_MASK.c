
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct plx_dma_desc {int dummy; } ;
struct comedi_device {int minor; scalar_t__ irq; } ;
struct TYPE_2__ {long intCount; int fifoLen; scalar_t__ pci_dev; scalar_t__ got_regions; scalar_t__ lcfg; scalar_t__ las1; scalar_t__ las0; int * dma0Chain; int dma0ChainPhysAddr; int ** dma0Buff; int * dma0BuffPhysAddr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*,int ) ;
 int FUNC_6 (struct comedi_device*,int ) ;
 int FUNC_7 (struct comedi_device*) ;
 int FUNC_8 (struct comedi_device*) ;
 int FUNC_9 (struct comedi_device*) ;
 int FUNC_10 (struct comedi_device*,int) ;
 int FUNC_11 (struct comedi_device*) ;
 int FUNC_12 (scalar_t__) ;
 TYPE_1__* VAR_5 ;
 int FUNC_13 (scalar_t__,struct comedi_device*) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__,int,int *,int ) ;
 int FUNC_17 (char*,int ) ;

__attribute__((used)) static int FUNC_18(struct comedi_device *VAR_6)
{




 FUNC_0("comedi%d: rtd520: removing (%ld ints)\n",
  VAR_6->minor, (VAR_5 ? VAR_5->intCount : 0L));
 if (VAR_5 && VAR_5->lcfg) {
  FUNC_0
      ("(int status 0x%x, overrun status 0x%x, fifo status 0x%x)...\n",
       0xffff & FUNC_8(VAR_6),
       0xffff & FUNC_7(VAR_6),
       (0xffff & FUNC_3(VAR_6)) ^ 0x6666);
 }

 if (VAR_5) {
  if (VAR_5->las0) {
   FUNC_11(VAR_6);
   FUNC_6(VAR_6, 0);
   FUNC_5(VAR_6, ~0);
   FUNC_4(VAR_6);
  }
  if (VAR_6->irq) {

   FUNC_10(VAR_6, FUNC_9(VAR_6)
          & ~(VAR_4 | VAR_1 |
       VAR_2));
   FUNC_13(VAR_6->irq, VAR_6);
  }


  if (VAR_5->las0) {
   FUNC_14(VAR_5->las0);
  }
  if (VAR_5->las1) {
   FUNC_14(VAR_5->las1);
  }
  if (VAR_5->lcfg) {
   FUNC_14(VAR_5->lcfg);
  }
  if (VAR_5->pci_dev) {
   if (VAR_5->got_regions) {
    FUNC_12(VAR_5->pci_dev);
   }
   FUNC_15(VAR_5->pci_dev);
  }
 }

 FUNC_17("comedi%d: rtd520: removed.\n", VAR_6->minor);

 return 0;
}
