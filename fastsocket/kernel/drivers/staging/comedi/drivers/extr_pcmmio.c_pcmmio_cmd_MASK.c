
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int stop_src; int start_src; int stop_arg; } ;
struct TYPE_6__ {int active; int continuous; int spinlock; int stop_count; } ;
struct TYPE_7__ {TYPE_2__ intr; } ;
struct TYPE_8__ {TYPE_3__ dio; } ;
struct TYPE_5__ {int inttrig; struct comedi_cmd cmd; } ;




 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int VAR_0 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 TYPE_4__* VAR_1 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3)
{
 struct comedi_cmd *VAR_4 = &VAR_3->async->cmd;
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_2(&VAR_1->dio.intr.spinlock, VAR_5);
 VAR_1->dio.intr.active = 1;


 switch (VAR_4->stop_src) {
 case 129:
  VAR_1->dio.intr.continuous = 0;
  VAR_1->dio.intr.stop_count = VAR_4->stop_arg;
  break;
 default:

  VAR_1->dio.intr.continuous = 1;
  VAR_1->dio.intr.stop_count = 0;
  break;
 }


 switch (VAR_4->start_src) {
 case 128:
  VAR_3->async->inttrig = VAR_0;
  break;
 default:

  VAR_6 = FUNC_1(VAR_2, VAR_3);
  break;
 }
 FUNC_3(&VAR_1->dio.intr.spinlock, VAR_5);

 if (VAR_6) {
  FUNC_0(VAR_2, VAR_3);
 }

 return 0;
}
