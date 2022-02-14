
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ml_device {int dummy; } ;
struct input_dev {int event_lock; TYPE_1__* ff; } ;
struct TYPE_2__ {struct ml_device* private; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ml_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct input_dev *VAR_1 = (struct input_dev *)VAR_0;
 struct ml_device *VAR_2 = VAR_1->ff->private;
 unsigned long VAR_3;

 FUNC_0("timer: updating effects");

 FUNC_2(&VAR_1->event_lock, VAR_3);
 FUNC_1(VAR_2);
 FUNC_3(&VAR_1->event_lock, VAR_3);
}
