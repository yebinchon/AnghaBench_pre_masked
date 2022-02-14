
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct rtc_device {int ops_lock; TYPE_2__ dev; TYPE_1__* ops; scalar_t__ uie_irq_active; } ;
struct TYPE_3__ {int (* update_irq_enable ) (int ,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtc_device*,unsigned int) ;
 int FUNC_3 (int ,unsigned int) ;

int FUNC_4(struct rtc_device *VAR_2, unsigned int VAR_3)
{
 int VAR_4 = FUNC_0(&VAR_2->ops_lock);
 if (VAR_4)
  return VAR_4;
 if (!VAR_2->ops)
  VAR_4 = -VAR_1;
 else if (!VAR_2->ops->update_irq_enable)
  VAR_4 = -VAR_0;
 else
  VAR_4 = VAR_2->ops->update_irq_enable(VAR_2->dev.parent, VAR_3);

 FUNC_1(&VAR_2->ops_lock);
 return VAR_4;
}
