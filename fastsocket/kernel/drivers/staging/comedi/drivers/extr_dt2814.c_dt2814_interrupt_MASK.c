
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* subdevices; int attached; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int ntrig; } ;
struct TYPE_3__ {int events; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 int VAR_9, VAR_10;
 struct comedi_device *VAR_11 = VAR_8;
 struct comedi_subdevice *VAR_12;
 int VAR_13;

 if (!VAR_11->attached) {
  FUNC_0(VAR_11, "spurious interrupt");
  return VAR_5;
 }

 VAR_12 = VAR_11->subdevices + 0;

 VAR_10 = FUNC_2(VAR_11->iobase + VAR_2);
 VAR_9 = FUNC_2(VAR_11->iobase + VAR_2);

 VAR_13 = (VAR_10 << 4) | (VAR_9 >> 4);

 if (!(--VAR_6->ntrig)) {
  int VAR_14;

  FUNC_3(0, VAR_11->iobase + VAR_1);



  for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
   if (FUNC_2(VAR_11->iobase + VAR_1) & VAR_3)
    break;
  }
  FUNC_2(VAR_11->iobase + VAR_2);
  FUNC_2(VAR_11->iobase + VAR_2);

  VAR_12->async->events |= VAR_0;
 }
 FUNC_1(VAR_11, VAR_12);
 return VAR_5;
}
