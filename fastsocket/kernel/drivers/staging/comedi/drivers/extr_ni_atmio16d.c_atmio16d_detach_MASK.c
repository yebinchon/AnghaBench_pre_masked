
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; scalar_t__ irq; scalar_t__ subdevices; int minor; } ;
struct TYPE_2__ {scalar_t__ has_8255; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (scalar_t__,struct comedi_device*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_2)
{
 FUNC_1("comedi%d: atmio16d: remove\n", VAR_2->minor);

 if (VAR_2->subdevices && VAR_1->has_8255)
  FUNC_4(VAR_2, VAR_2->subdevices + 3);

 if (VAR_2->irq)
  FUNC_0(VAR_2->irq, VAR_2);

 FUNC_3(VAR_2);

 if (VAR_2->iobase)
  FUNC_2(VAR_2->iobase, VAR_0);

 return 0;
}
