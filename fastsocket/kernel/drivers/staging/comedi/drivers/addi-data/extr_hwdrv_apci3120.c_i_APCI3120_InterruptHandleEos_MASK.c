
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* subdevices; } ;
struct TYPE_4__ {int events; } ;
struct TYPE_3__ {int ui_AiNbrofChannels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(struct comedi_device *VAR_3)
{
 int VAR_4, VAR_5;
 struct comedi_subdevice *VAR_6 = VAR_3->subdevices + 0;
 int VAR_7 = 1;

 VAR_4 = VAR_2->ui_AiNbrofChannels;

 VAR_6->async->events = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_7 &= FUNC_0(VAR_6->async, FUNC_2(VAR_3->iobase + 0));

 VAR_6->async->events |= VAR_0;

 if (VAR_7 == 0)
  VAR_6->async->events |= VAR_1;

 FUNC_1(VAR_3, VAR_6);

 return 0;
}
