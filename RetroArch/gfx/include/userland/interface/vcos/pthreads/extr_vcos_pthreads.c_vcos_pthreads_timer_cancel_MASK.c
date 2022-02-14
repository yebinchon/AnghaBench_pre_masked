
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int settings_changed; int expires; } ;
typedef TYPE_1__ VCOS_TIMER_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(VCOS_TIMER_T *VAR_0)
{
   FUNC_4(VAR_0);

   FUNC_2(&VAR_0->lock);

   FUNC_0(&VAR_0->expires);
   FUNC_1(&VAR_0->settings_changed);

   FUNC_3(&VAR_0->lock);
}
