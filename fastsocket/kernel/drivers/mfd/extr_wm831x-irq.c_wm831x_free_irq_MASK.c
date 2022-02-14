
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm831x {int irq_lock; } ;
struct TYPE_2__ {int * handler_data; int * handler; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct wm831x*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_1 ;

void FUNC_3(struct wm831x *VAR_2, unsigned int VAR_3, void *VAR_4)
{
 if (VAR_3 < 0 || VAR_3 >= VAR_0)
  return;

 FUNC_1(&VAR_2->irq_lock);

 VAR_1[VAR_3].handler = ((void*)0);
 VAR_1[VAR_3].handler_data = ((void*)0);

 FUNC_0(VAR_2, VAR_3);

 FUNC_2(&VAR_2->irq_lock);
}
