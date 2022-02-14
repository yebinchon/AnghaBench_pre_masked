
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 short FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,short) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;

void FUNC_3(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4)
{
 short VAR_5;

 VAR_5 = FUNC_0(0, VAR_2, 0, VAR_0);

 FUNC_1(VAR_4->async, VAR_5);
 VAR_4->async->events |= VAR_1;

 FUNC_2(VAR_3, VAR_4);
}
