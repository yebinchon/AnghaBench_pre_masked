
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ attached; struct comedi_subdevice* subdevices; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct comedi_device *VAR_4 = VAR_3;
 struct comedi_subdevice *VAR_5 = VAR_4->subdevices + 1;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_4->attached && VAR_6) {
  FUNC_1(VAR_5->async, 0);
  VAR_5->async->events |= VAR_0 | VAR_1;
  FUNC_2(VAR_4, VAR_5);
 }
 return FUNC_0(VAR_6);
}
