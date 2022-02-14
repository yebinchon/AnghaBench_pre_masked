
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int interrupt_lock; } ;
struct TYPE_3__ {int mite_chan; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 TYPE_1__* FUNC_5 (struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1)
{
 unsigned long VAR_2;

 FUNC_3(&FUNC_2(VAR_0)->interrupt_lock, VAR_2);
 FUNC_1(FUNC_5(VAR_1)->mite_chan, VAR_1->async);
 FUNC_4(&FUNC_2(VAR_0)->interrupt_lock, VAR_2);
 return FUNC_0(VAR_1->async);
}
