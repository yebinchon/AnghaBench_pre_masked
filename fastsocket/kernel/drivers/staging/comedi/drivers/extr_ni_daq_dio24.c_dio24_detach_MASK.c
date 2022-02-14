
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ irq; scalar_t__ iobase; scalar_t__ subdevices; int minor; } ;
struct TYPE_2__ {scalar_t__ bustype; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct comedi_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct comedi_device*,scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_3)
{
 FUNC_1("comedi%d: ni_daq_dio24: remove\n", VAR_3->minor);

 if (VAR_3->subdevices)
  FUNC_3(VAR_3, VAR_3->subdevices + 0);

 if (VAR_2->bustype != VAR_1 && VAR_3->iobase)
  FUNC_2(VAR_3->iobase, VAR_0);
 if (VAR_3->irq)
  FUNC_0(VAR_3->irq, VAR_3);

 return 0;
}
