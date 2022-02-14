
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_5__ {int spinlock; scalar_t__ active; } ;
struct TYPE_6__ {TYPE_2__ intr; } ;
struct TYPE_4__ {scalar_t__ inttrig; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
     unsigned int VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = 0;

 if (VAR_4 != 0)
  return -VAR_0;

 FUNC_2(&VAR_1->intr.spinlock, VAR_5);
 VAR_3->async->inttrig = 0;
 if (VAR_1->intr.active) {
  VAR_6 = FUNC_1(VAR_2, VAR_3);
 }
 FUNC_3(&VAR_1->intr.spinlock, VAR_5);

 if (VAR_6) {
  FUNC_0(VAR_2, VAR_3);
 }

 return 1;
}
