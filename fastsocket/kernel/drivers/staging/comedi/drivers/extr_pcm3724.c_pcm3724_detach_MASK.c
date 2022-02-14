
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int n_subdevices; scalar_t__ iobase; scalar_t__ subdevices; } ;
struct TYPE_2__ {int io_range; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct comedi_device*,scalar_t__) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1)
{
 int VAR_2;

 if (VAR_1->subdevices) {
  for (VAR_2 = 0; VAR_2 < VAR_1->n_subdevices; VAR_2++) {
   FUNC_1(VAR_1, VAR_1->subdevices + VAR_2);
  }
 }
 if (VAR_1->iobase) {
  FUNC_0(VAR_1->iobase, VAR_0->io_range);
 }

 return 0;
}
