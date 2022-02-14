
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4)
{
 if (VAR_4->
     async->events & (VAR_1 | VAR_2 |
        VAR_0)) {
  switch (VAR_4 - VAR_3->subdevices) {
  case 132:
   FUNC_1(VAR_3, VAR_4);
   break;
  case 131:
   FUNC_2(VAR_3, VAR_4);
   break;
  case 129:
  case 128:
   FUNC_4(VAR_3, VAR_4);
   break;
  case 130:
   FUNC_3(VAR_3, VAR_4);
   break;
  default:
   break;
  }
 }
 FUNC_0(VAR_3, VAR_4);
}
