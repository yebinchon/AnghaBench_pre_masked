
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; scalar_t__ irq; scalar_t__ subdevices; int minor; } ;
struct TYPE_4__ {scalar_t__ mite; scalar_t__ dma_chan; scalar_t__ dma_buffer; } ;
struct TYPE_3__ {scalar_t__ bustype; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,struct comedi_device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct comedi_device*,scalar_t__) ;
 TYPE_1__* VAR_3 ;

int FUNC_7(struct comedi_device *VAR_4)
{
 FUNC_4("comedi%d: ni_labpc: detach\n", VAR_4->minor);

 if (VAR_4->subdevices)
  FUNC_6(VAR_4, VAR_4->subdevices + 2);


 if (VAR_1->dma_buffer)
  FUNC_2(VAR_1->dma_buffer);
 if (VAR_1->dma_chan)
  FUNC_0(VAR_1->dma_chan);
 if (VAR_4->irq)
  FUNC_1(VAR_4->irq, VAR_4);
 if (VAR_3->bustype == VAR_2 && VAR_4->iobase)
  FUNC_5(VAR_4->iobase, VAR_0);





 return 0;
}
