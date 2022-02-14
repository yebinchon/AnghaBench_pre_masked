
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_task {int dummy; } ;
struct rtc_device {int irq_task_lock; struct rtc_task* irq_task; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct rtc_device *VAR_0, struct rtc_task *VAR_1)
{
 FUNC_0(&VAR_0->irq_task_lock);
 if (VAR_0->irq_task == VAR_1)
  VAR_0->irq_task = ((void*)0);
 FUNC_1(&VAR_0->irq_task_lock);
}
