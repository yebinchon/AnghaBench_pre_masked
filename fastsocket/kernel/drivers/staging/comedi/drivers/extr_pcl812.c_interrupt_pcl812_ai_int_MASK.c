
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {scalar_t__ iobase; int board_name; int minor; struct comedi_subdevice* subdevices; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int events; scalar_t__ cur_chan; } ;
struct TYPE_3__ {scalar_t__ ai_act_scan; scalar_t__ ai_scans; int ai_neverending; scalar_t__ ai_is16b; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (char*,int ,int ,scalar_t__) ;
 int FUNC_6 (int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_10, void *VAR_11)
{
 char VAR_12 = 1;
 unsigned int VAR_13, VAR_14;
 struct comedi_device *VAR_15 = VAR_11;
 struct comedi_subdevice *VAR_16 = VAR_15->subdevices + 0;

 VAR_16->async->events = 0;

 VAR_14 = 50;
 if (VAR_9->ai_is16b) {
  VAR_13 = 0xffff;
  while (VAR_14--) {
   if (!(FUNC_2(VAR_15->iobase + VAR_1) & VAR_0)) {
    VAR_12 = 0;
    break;
   }
   FUNC_6(1);
  }
 } else {
  VAR_13 = 0x0fff;
  while (VAR_14--) {
   if (!(FUNC_2(VAR_15->iobase + VAR_5) & VAR_8)) {
    VAR_12 = 0;
    break;
   }
   FUNC_6(1);
  }
 }

 if (VAR_12) {
  FUNC_5
      ("comedi%d: pcl812: (%s at 0x%lx) A/D cmd IRQ without DRDY!\n",
       VAR_15->minor, VAR_15->board_name, VAR_15->iobase);
  FUNC_4(VAR_15, VAR_16);
  VAR_16->async->events |= VAR_2 | VAR_3;
  FUNC_1(VAR_15, VAR_16);
  return VAR_4;
 }

 FUNC_0(VAR_16->async,
         ((FUNC_2(VAR_15->iobase + VAR_5) << 8) |
   FUNC_2(VAR_15->iobase + VAR_6)) & VAR_13);

 FUNC_3(0, VAR_15->iobase + VAR_7);

 if (VAR_16->async->cur_chan == 0) {
  VAR_9->ai_act_scan++;
  if (!(VAR_9->ai_neverending))
   if (VAR_9->ai_act_scan >= VAR_9->ai_scans) {
    FUNC_4(VAR_15, VAR_16);
    VAR_16->async->events |= VAR_2;
   }
 }

 FUNC_1(VAR_15, VAR_16);
 return VAR_4;
}
