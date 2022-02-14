
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int hwver; int ao_stop_spinlock; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_4,
     struct comedi_subdevice *VAR_5,
     unsigned int VAR_6)
{
 unsigned long VAR_7;

 if (VAR_6 != 0)
  return -VAR_1;

 FUNC_3(&VAR_3->ao_stop_spinlock, VAR_7);
 if (FUNC_5(VAR_0, &VAR_3->state)) {

  if (VAR_3->hwver < 2) {

   FUNC_4(&VAR_3->ao_stop_spinlock,
            VAR_7);
   FUNC_2(VAR_4, VAR_5);
   FUNC_0(VAR_4, VAR_5);
  } else {


   FUNC_1(VAR_4->iobase + VAR_2);
   FUNC_4(&VAR_3->ao_stop_spinlock,
            VAR_7);
  }


  FUNC_6(8);
 }

 return 1;
}
