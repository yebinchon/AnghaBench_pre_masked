
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int irq_dma_bits; int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_5, struct comedi_subdevice *VAR_6)
{

 VAR_4->irq_dma_bits &= ~VAR_1 & ~VAR_0;
 FUNC_1(VAR_4->irq_dma_bits, VAR_5->iobase + VAR_3);


 FUNC_0(VAR_4->dma);


 FUNC_1(0, VAR_5->iobase + VAR_2);

 return 0;
}
