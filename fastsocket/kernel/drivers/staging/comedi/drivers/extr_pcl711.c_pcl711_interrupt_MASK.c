
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; int attached; struct comedi_subdevice* subdevices; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int ntrig; } ;
struct TYPE_5__ {scalar_t__ is_8112; } ;
struct TYPE_4__ {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_3__* VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 TYPE_2__* VAR_7 ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_8, void *VAR_9)
{
 int VAR_10, VAR_11;
 int VAR_12;
 struct comedi_device *VAR_13 = VAR_9;
 struct comedi_subdevice *VAR_14 = VAR_13->subdevices + 0;

 if (!VAR_13->attached) {
  FUNC_0(VAR_13, "spurious interrupt");
  return VAR_1;
 }

 VAR_11 = FUNC_2(VAR_13->iobase + VAR_2);
 VAR_10 = FUNC_2(VAR_13->iobase + VAR_3);
 FUNC_3(0, VAR_13->iobase + VAR_4);

 VAR_12 = (VAR_11 << 8) | VAR_10;


 if (!(--VAR_6->ntrig)) {
  if (VAR_7->is_8112) {
   FUNC_3(1, VAR_13->iobase + VAR_5);
  } else {
   FUNC_3(0, VAR_13->iobase + VAR_5);
  }

  VAR_14->async->events |= VAR_0;
 }
 FUNC_1(VAR_13, VAR_14);
 return VAR_1;
}
