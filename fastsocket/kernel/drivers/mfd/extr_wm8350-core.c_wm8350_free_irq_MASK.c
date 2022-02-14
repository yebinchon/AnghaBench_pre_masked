
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8350 {int irq_mutex; TYPE_1__* irq; } ;
struct TYPE_2__ {int * handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct wm8350 *VAR_2, int VAR_3)
{
 if (VAR_3 < 0 || VAR_3 > VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_2->irq_mutex);
 VAR_2->irq[VAR_3].handler = ((void*)0);
 FUNC_1(&VAR_2->irq_mutex);
 return 0;
}
