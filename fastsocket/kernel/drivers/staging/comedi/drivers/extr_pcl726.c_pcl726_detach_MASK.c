
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; scalar_t__ irq; } ;
struct TYPE_2__ {int io_range; } ;


 int FUNC_0 (scalar_t__,struct comedi_device*) ;
 int FUNC_1 (scalar_t__,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1)
{
 if (VAR_1->iobase)
  FUNC_1(VAR_1->iobase, VAR_0->io_range);

 return 0;
}
