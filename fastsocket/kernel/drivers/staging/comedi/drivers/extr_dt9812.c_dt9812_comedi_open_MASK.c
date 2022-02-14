
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {int n_chan; int maxdata; int * range_table; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct TYPE_6__ {TYPE_2__* slot; } ;
struct TYPE_5__ {int mutex; TYPE_1__* usb; } ;
struct TYPE_4__ {int device; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_5)
{
 FUNC_0(&VAR_0->slot->mutex);
 if (VAR_0->slot->usb) {

  struct comedi_subdevice *VAR_6;

  VAR_6 = &VAR_5->subdevices[0];
  VAR_6->n_chan = 8;
  VAR_6->maxdata = 1;

  VAR_6 = &VAR_5->subdevices[1];
  VAR_6->n_chan = 8;
  VAR_6->maxdata = 1;

  VAR_6 = &VAR_5->subdevices[2];
  VAR_6->n_chan = 8;
  switch (VAR_0->slot->usb->device) {
  case 0:{
    VAR_6->maxdata = 4095;
    VAR_6->range_table = &VAR_1;
   }
   break;
  case 1:{
    VAR_6->maxdata = 4095;
    VAR_6->range_table = &VAR_3;
   }
   break;
  }

  VAR_6 = &VAR_5->subdevices[3];
  VAR_6->n_chan = 2;
  switch (VAR_0->slot->usb->device) {
  case 0:{
    VAR_6->maxdata = 4095;
    VAR_6->range_table = &VAR_2;
   }
   break;
  case 1:{
    VAR_6->maxdata = 4095;
    VAR_6->range_table = &VAR_4;
   }
   break;
  }
 }
 FUNC_1(&VAR_0->slot->mutex);
}
