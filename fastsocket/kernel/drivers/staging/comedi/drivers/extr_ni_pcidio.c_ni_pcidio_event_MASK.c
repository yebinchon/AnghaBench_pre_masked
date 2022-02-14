
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;

void FUNC_2(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4)
{
 if (VAR_4->
     async->events & (VAR_0 | VAR_1 |
        VAR_2)) {
  FUNC_1(VAR_3, VAR_4);
 }
 FUNC_0(VAR_3, VAR_4);
}
