
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct comedi_subdevice* subdevices; int attached; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {scalar_t__ io_addr; } ;
struct TYPE_3__ {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (unsigned int) ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_4 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_11, void *VAR_12)
{
 struct comedi_device *VAR_13 = VAR_12;
 struct comedi_subdevice *VAR_14;
 unsigned int VAR_15;

 if (!VAR_13->attached) {
  return VAR_8;
 }

 VAR_14 = VAR_13->subdevices + 0;
 VAR_15 = FUNC_4(VAR_10->io_addr + VAR_3);




 if (VAR_15 & VAR_4) {
  FUNC_3(VAR_13, VAR_14);
  VAR_14->async->events |= VAR_0;
 }

 if (VAR_15 & (VAR_6 | VAR_5)) {
  VAR_14->async->events |= VAR_2 | VAR_1;
 }

 VAR_9++;
 if (VAR_9 >= 10) {
  FUNC_2(VAR_13, VAR_14);
  VAR_14->async->events |= VAR_1;
 }

 FUNC_0(VAR_13, VAR_14);
 return VAR_7;
}
