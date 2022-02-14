
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm831x {int irq_lock; int dev; } ;
typedef scalar_t__ irq_handler_t ;
struct TYPE_2__ {void* handler_data; scalar_t__ handler; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct wm831x*,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_2 ;

int FUNC_4(struct wm831x *VAR_3,
         unsigned int VAR_4, irq_handler_t VAR_5,
         unsigned long VAR_6, const char *VAR_7,
         void *VAR_8)
{
 int VAR_9 = 0;

 if (VAR_4 < 0 || VAR_4 >= VAR_1)
  return -VAR_0;

 FUNC_2(&VAR_3->irq_lock);

 if (VAR_2[VAR_4].handler) {
  FUNC_1(VAR_3->dev, "Already have handler for IRQ %d\n", VAR_4);
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_2[VAR_4].handler = VAR_5;
 VAR_2[VAR_4].handler_data = VAR_8;

 FUNC_0(VAR_3, VAR_4);

out:
 FUNC_3(&VAR_3->irq_lock);

 return VAR_9;
}
