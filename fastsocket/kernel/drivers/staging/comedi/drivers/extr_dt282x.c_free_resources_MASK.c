
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ private; scalar_t__ iobase; scalar_t__ irq; } ;
struct TYPE_4__ {TYPE_1__* dma; } ;
struct TYPE_3__ {scalar_t__ buf; scalar_t__ chan; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,struct comedi_device*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_2)
{
 if (VAR_2->irq) {
  FUNC_1(VAR_2->irq, VAR_2);
 }
 if (VAR_2->iobase)
  FUNC_3(VAR_2->iobase, VAR_0);
 if (VAR_2->private) {
  if (VAR_1->dma[0].chan)
   FUNC_0(VAR_1->dma[0].chan);
  if (VAR_1->dma[1].chan)
   FUNC_0(VAR_1->dma[1].chan);
  if (VAR_1->dma[0].buf)
   FUNC_2((unsigned long)VAR_1->dma[0].buf);
  if (VAR_1->dma[1].buf)
   FUNC_2((unsigned long)VAR_1->dma[1].buf);
 }
}
