
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_device {unsigned int n_subdevices; TYPE_1__* subdevices; scalar_t__ irq; } ;
struct TYPE_6__ {scalar_t__ daq_io_addr; } ;
struct TYPE_5__ {TYPE_3__* mite; } ;
struct TYPE_4__ {int * private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,struct comedi_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_2__* FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_1)
{
 if (FUNC_3(VAR_1) && FUNC_3(VAR_1)->mite
     && FUNC_3(VAR_1)->mite->daq_io_addr) {
  FUNC_4(0x00,
         FUNC_3(VAR_1)->mite->daq_io_addr +
         VAR_0);
 }

 if (VAR_1->irq) {
  FUNC_0(VAR_1->irq, VAR_1);
 }

 if (FUNC_3(VAR_1)) {
  unsigned VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1->n_subdevices; ++VAR_2) {
   if (VAR_1->subdevices[VAR_2].private) {
    FUNC_1(VAR_1->subdevices[VAR_2].private);
    VAR_1->subdevices[VAR_2].private = ((void*)0);
   }
  }
  if (FUNC_3(VAR_1)->mite) {
   FUNC_2(FUNC_3(VAR_1)->mite);
  }
 }
 return 0;
}
