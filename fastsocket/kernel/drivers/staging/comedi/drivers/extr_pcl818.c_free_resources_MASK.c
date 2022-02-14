
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; scalar_t__ irq; scalar_t__ private; } ;
struct TYPE_2__ {int io_range; scalar_t__ dma_rtc; int rtc_iosize; scalar_t__ rtc_iobase; scalar_t__ rtc_irq; int * dmapages; scalar_t__* dmabuf; scalar_t__ dma; int sub_ai; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,struct comedi_device*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_2)
{

 if (VAR_2->private) {
  FUNC_3(VAR_2, VAR_1->sub_ai);
  FUNC_4(VAR_2);
  if (VAR_1->dma)
   FUNC_0(VAR_1->dma);
  if (VAR_1->dmabuf[0])
   FUNC_2(VAR_1->dmabuf[0], VAR_1->dmapages[0]);
  if (VAR_1->dmabuf[1])
   FUNC_2(VAR_1->dmabuf[1], VAR_1->dmapages[1]);
 }

 if (VAR_2->irq)
  FUNC_1(VAR_2->irq, VAR_2);
 if (VAR_2->iobase)
  FUNC_5(VAR_2->iobase, VAR_1->io_range);

}
