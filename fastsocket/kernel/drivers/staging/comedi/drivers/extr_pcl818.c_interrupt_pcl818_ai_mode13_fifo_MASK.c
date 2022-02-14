
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* subdevices; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int events; scalar_t__ cur_chan; } ;
struct TYPE_3__ {int* act_chanlist; size_t act_chanlist_pos; scalar_t__ ai_act_scan; int neverending_ai; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (struct comedi_device*,char*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (char*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_8, void *VAR_9)
{
 struct comedi_device *VAR_10 = VAR_9;
 struct comedi_subdevice *VAR_11 = VAR_10->subdevices + 0;
 int VAR_12, VAR_13, VAR_14;

 FUNC_4(0, VAR_10->iobase + VAR_5);

 VAR_14 = FUNC_3(VAR_10->iobase + VAR_6);

 if (VAR_14 & 4) {
  FUNC_1(VAR_10, "A/D mode1/3 FIFO overflow!");
  FUNC_5(VAR_10, VAR_11);
  VAR_11->async->events |= VAR_0 | VAR_1;
  FUNC_2(VAR_10, VAR_11);
  return VAR_2;
 }

 if (VAR_14 & 1) {
  FUNC_1(VAR_10, "A/D mode1/3 FIFO interrupt without data!");
  FUNC_5(VAR_10, VAR_11);
  VAR_11->async->events |= VAR_0 | VAR_1;
  FUNC_2(VAR_10, VAR_11);
  return VAR_2;
 }

 if (VAR_14 & 2) {
  VAR_13 = 512;
 } else {
  VAR_13 = 0;
 }

 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  VAR_14 = FUNC_3(VAR_10->iobase + VAR_4);
  if ((VAR_14 & 0xf) != VAR_7->act_chanlist[VAR_7->act_chanlist_pos]) {
   FUNC_6
       ("comedi: A/D mode1/3 FIFO - channel dropout %d!=%d !\n",
        (VAR_14 & 0xf),
        VAR_7->act_chanlist[VAR_7->act_chanlist_pos]);
   FUNC_5(VAR_10, VAR_11);
   VAR_11->async->events |= VAR_0 | VAR_1;
   FUNC_2(VAR_10, VAR_11);
   return VAR_2;
  }

  FUNC_0(VAR_11->async, (VAR_14 >> 4) | (FUNC_3(VAR_10->iobase + VAR_3) << 4));

  if (VAR_11->async->cur_chan == 0) {
   VAR_7->ai_act_scan--;
  }

  if (!VAR_7->neverending_ai)
   if (VAR_7->ai_act_scan == 0) {
    FUNC_5(VAR_10, VAR_11);
    VAR_11->async->events |= VAR_0;
    FUNC_2(VAR_10, VAR_11);
    return VAR_2;
   }
 }

 if (VAR_13 > 0)
  FUNC_2(VAR_10, VAR_11);
 return VAR_2;
}
