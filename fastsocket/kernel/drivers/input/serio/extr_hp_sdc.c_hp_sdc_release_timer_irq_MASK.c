
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int hp_sdc_irqhook ;
struct TYPE_2__ {int set_im; int task; int hook_lock; int im; int * timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(hp_sdc_irqhook *VAR_5)
{
 FUNC_1(&VAR_4.hook_lock);
 if ((VAR_5 != VAR_4.timer) ||
     (VAR_4.timer == ((void*)0))) {
  FUNC_2(&VAR_4.hook_lock);
  return -VAR_0;
 }


 VAR_4.timer = ((void*)0);
 VAR_4.im |= VAR_3;
 VAR_4.im |= VAR_1;
 VAR_4.im |= VAR_2;
 VAR_4.set_im = 1;
 FUNC_2(&VAR_4.hook_lock);
 FUNC_0(&VAR_4.task);

 return 0;
}
