
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int (* cancel ) (struct comedi_device*,struct comedi_subdevice*) ;TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int events; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;

unsigned int FUNC_2(struct comedi_device *VAR_3,
          struct comedi_subdevice *VAR_4)
{
 unsigned int VAR_5 = VAR_4->async->events;

 if (VAR_5 == 0)
  return VAR_5;

 if (VAR_5 & (VAR_0 | VAR_1 | VAR_2))
  VAR_4->cancel(VAR_3, VAR_4);

 FUNC_0(VAR_3, VAR_4);

 return VAR_5;
}
