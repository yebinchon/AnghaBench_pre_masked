
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ aimode; int ai_cmd2; } ;
struct TYPE_3__ {int events; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5)
{
 if (VAR_3->aimode == VAR_0) {
  FUNC_0(VAR_4);
  VAR_5->async->events |= VAR_2;

 }

 if ((VAR_3->ai_cmd2 & VAR_1)) {
  FUNC_2(VAR_4);
 }
}
