
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; scalar_t__ irq; scalar_t__ private; } ;
struct TYPE_4__ {scalar_t__ dma; int * dmapages; scalar_t__* dmabuf; } ;
struct TYPE_3__ {int io_range; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,struct comedi_device*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_2)
{

 if (VAR_2->private) {
  if (VAR_0->dmabuf[0])
   FUNC_2(VAR_0->dmabuf[0], VAR_0->dmapages[0]);
  if (VAR_0->dmabuf[1])
   FUNC_2(VAR_0->dmabuf[1], VAR_0->dmapages[1]);
  if (VAR_0->dma)
   FUNC_0(VAR_0->dma);
 }
 if (VAR_2->irq)
  FUNC_1(VAR_2->irq, VAR_2);
 if (VAR_2->iobase)
  FUNC_3(VAR_2->iobase, VAR_1->io_range);
}
