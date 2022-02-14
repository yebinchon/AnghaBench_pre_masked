
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtc_task {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct rtc_device {int irq_freq; TYPE_1__ dev; TYPE_2__* ops; int irq_task_lock; struct rtc_task* irq_task; } ;
struct TYPE_4__ {int (* irq_set_freq ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct rtc_device *VAR_3, struct rtc_task *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 unsigned long VAR_7;

 if (VAR_3->ops->irq_set_freq == ((void*)0))
  return -VAR_2;

 FUNC_0(&VAR_3->irq_task_lock, VAR_7);
 if (VAR_3->irq_task != ((void*)0) && VAR_4 == ((void*)0))
  VAR_6 = -VAR_1;
 if (VAR_3->irq_task != VAR_4)
  VAR_6 = -VAR_0;
 FUNC_1(&VAR_3->irq_task_lock, VAR_7);

 if (VAR_6 == 0) {
  VAR_6 = VAR_3->ops->irq_set_freq(VAR_3->dev.parent, VAR_5);
  if (VAR_6 == 0)
   VAR_3->irq_freq = VAR_5;
 }
 return VAR_6;
}
