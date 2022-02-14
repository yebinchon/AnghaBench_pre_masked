
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int timer; scalar_t__ timer_running; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
         struct comedi_subdevice *VAR_2)
{
 VAR_0->timer_running = 0;
 FUNC_0(&VAR_0->timer);
 return 0;
}
