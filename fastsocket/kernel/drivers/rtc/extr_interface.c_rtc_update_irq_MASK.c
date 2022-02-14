
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_device {unsigned long irq_data; int async_queue; int irq_queue; int irq_task_lock; TYPE_1__* irq_task; int irq_lock; } ;
struct TYPE_2__ {int private_data; int (* func ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct rtc_device *VAR_2,
  unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;

 FUNC_1(&VAR_2->irq_lock, VAR_5);
 VAR_2->irq_data = (VAR_2->irq_data + (VAR_3 << 8)) | VAR_4;
 FUNC_2(&VAR_2->irq_lock, VAR_5);

 FUNC_1(&VAR_2->irq_task_lock, VAR_5);
 if (VAR_2->irq_task)
  VAR_2->irq_task->func(VAR_2->irq_task->private_data);
 FUNC_2(&VAR_2->irq_task_lock, VAR_5);

 FUNC_4(&VAR_2->irq_queue);
 FUNC_0(&VAR_2->async_queue, VAR_1, VAR_0);
}
