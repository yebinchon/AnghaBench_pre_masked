
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {scalar_t__ dma1; scalar_t__ dma0; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5)
{
 FUNC_1(0x0, VAR_4->iobase + VAR_2);
 FUNC_1(0x0, VAR_4->iobase + VAR_1);
 FUNC_1(0x0, VAR_4->iobase + VAR_0);
 if (VAR_3->dma0)
  FUNC_0(VAR_3->dma0);
 if (VAR_3->dma1)
  FUNC_0(VAR_3->dma1);
 return 0;
}
