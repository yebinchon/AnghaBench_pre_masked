
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int spinlock; } ;
struct TYPE_2__ {scalar_t__ ai_cmd_running; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*) ;
 TYPE_1__* FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_0, struct comedi_subdevice *VAR_1)
{
 unsigned long VAR_2;

 FUNC_4(&VAR_0->spinlock, VAR_2);
 if (FUNC_3(VAR_0)->ai_cmd_running == 0) {
  FUNC_5(&VAR_0->spinlock, VAR_2);
  return 0;
 }
 FUNC_3(VAR_0)->ai_cmd_running = 0;
 FUNC_5(&VAR_0->spinlock, VAR_2);

 FUNC_2(VAR_0);

 FUNC_1(VAR_0, 1);

 FUNC_0("ai canceled\n");
 return 0;
}
