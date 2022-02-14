
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int timer; scalar_t__ timer_running; } ;


 int FUNC_0 (struct comedi_device*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct comedi_device *VAR_3 = (struct comedi_device *)VAR_2;

 FUNC_0(VAR_3);

 if (VAR_0->timer_running)
  FUNC_1(&VAR_0->timer, VAR_1 + FUNC_2());
}
