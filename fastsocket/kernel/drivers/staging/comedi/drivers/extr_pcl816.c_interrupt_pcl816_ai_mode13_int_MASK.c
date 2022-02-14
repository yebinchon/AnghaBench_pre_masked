
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
struct TYPE_3__ {scalar_t__ ai_act_chanlist_pos; scalar_t__ ai_act_chanlist_len; scalar_t__ ai_act_scan; scalar_t__ ai_scans; int ai_neverending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (struct comedi_device*,char*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_8 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_9, void *VAR_10)
{
 struct comedi_device *VAR_11 = VAR_10;
 struct comedi_subdevice *VAR_12 = VAR_11->subdevices + 0;
 int VAR_13, VAR_14;
 int VAR_15 = 50;

 while (VAR_15--) {
  if (!(FUNC_3(VAR_11->iobase + VAR_6) &
        VAR_7))
   break;
  FUNC_6(1);
 }
 if (!VAR_15) {
  FUNC_4(0, VAR_11->iobase + VAR_5);
  FUNC_1(VAR_11, "A/D mode1/3 IRQ without DRDY!");
  FUNC_5(VAR_11, VAR_12);
  VAR_12->async->events |= VAR_0 | VAR_1;
  FUNC_2(VAR_11, VAR_12);
  return VAR_2;

 }


 VAR_13 = FUNC_3(VAR_11->iobase + VAR_4);
 VAR_14 = FUNC_3(VAR_11->iobase + VAR_3);

 FUNC_0(VAR_12->async, (VAR_14 << 8) | VAR_13);

 FUNC_4(0, VAR_11->iobase + VAR_5);

 if (++VAR_8->ai_act_chanlist_pos >= VAR_8->ai_act_chanlist_len)
  VAR_8->ai_act_chanlist_pos = 0;

 if (VAR_12->async->cur_chan == 0) {
  VAR_8->ai_act_scan++;
 }

 if (!VAR_8->ai_neverending)
  if (VAR_8->ai_act_scan >= VAR_8->ai_scans) {

   FUNC_5(VAR_11, VAR_12);
   VAR_12->async->events |= VAR_0;
  }
 FUNC_2(VAR_11, VAR_12);
 return VAR_2;
}
