
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_3__ {int spinlock; scalar_t__ active; } ;
struct TYPE_4__ {TYPE_1__ intr; } ;


 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->intr.spinlock, VAR_3);
 if (VAR_0->intr.active)
  FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_0->intr.spinlock, VAR_3);

 return 0;
}
