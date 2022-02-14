
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct comedi_subdevice {int * private; } ;
struct comedi_device {int n_subdevices; scalar_t__ iobase; struct comedi_subdevice* subdevices; scalar_t__ private; } ;
struct TYPE_14__ {TYPE_4__* prev; TYPE_6__* next; scalar_t__ pcidev; scalar_t__ valid; } ;
struct TYPE_13__ {TYPE_4__* prev; } ;
struct TYPE_12__ {TYPE_3__* sdio; TYPE_2__* sdo; TYPE_1__* sdi; } ;
struct TYPE_11__ {TYPE_6__* next; } ;
struct TYPE_10__ {int regs; } ;
struct TYPE_9__ {scalar_t__ chans; } ;
struct TYPE_8__ {scalar_t__ chans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_7__* VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct comedi_device*) ;
 TYPE_6__* VAR_4 ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_5__* VAR_5 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_6)
{
 int VAR_7, VAR_8;
 struct comedi_subdevice *VAR_9;
 int VAR_10;

 if (VAR_6->private) {
  if (VAR_3->valid) {
   FUNC_2(VAR_6);
  }



  VAR_10 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   if (VAR_5->sdi[VAR_7].chans) {
    VAR_10++;
   }
  }
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
   if (VAR_5->sdo[VAR_7].chans) {
    VAR_10++;
   }
  }
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   for (VAR_8 = 0; VAR_8 < VAR_5->sdio[VAR_7].regs; VAR_8++) {
    VAR_9 = VAR_6->subdevices + VAR_10;
    FUNC_3(VAR_6, VAR_9);
    VAR_10++;
   }
  }

  for (VAR_7 = 0; VAR_7 < VAR_6->n_subdevices; VAR_7++) {
   VAR_9 = VAR_6->subdevices + VAR_7;
   VAR_9->private = ((void*)0);
  }

  if (VAR_3->pcidev) {
   if (VAR_6->iobase) {
    FUNC_0(VAR_3->pcidev);
   }
   FUNC_1(VAR_3->pcidev);
  }

  if (VAR_3->prev) {
   VAR_3->prev->next = VAR_3->next;
  } else {
   VAR_4 = VAR_3->next;
  }
  if (VAR_3->next) {
   VAR_3->next->prev = VAR_3->prev;
  }
 }

 return 0;
}
