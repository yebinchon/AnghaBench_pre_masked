
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_task {int * func; } ;
struct rtc_device {int flags; int irq_task_lock; struct rtc_task* irq_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

int FUNC_4(struct rtc_device *VAR_3, struct rtc_task *VAR_4)
{
 int VAR_5 = -VAR_0;

 if (VAR_4 == ((void*)0) || VAR_4->func == ((void*)0))
  return -VAR_1;


 if (FUNC_3(VAR_2, &VAR_3->flags))
  return -VAR_0;

 FUNC_1(&VAR_3->irq_task_lock);
 if (VAR_3->irq_task == ((void*)0)) {
  VAR_3->irq_task = VAR_4;
  VAR_5 = 0;
 }
 FUNC_2(&VAR_3->irq_task_lock);

 FUNC_0(VAR_2, &VAR_3->flags);

 return VAR_5;
}
