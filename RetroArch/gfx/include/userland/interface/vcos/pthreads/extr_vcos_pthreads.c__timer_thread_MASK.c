
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_2__ {int lock; int orig_context; int (* orig_expiration_routine ) (int ) ;int expires; int settings_changed; int quit; } ;
typedef TYPE_1__ VCOS_TIMER_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct timespec*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct timespec*) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void* FUNC_9(void *VAR_1)
{
   VCOS_TIMER_T *VAR_2 = (VCOS_TIMER_T*)VAR_1;

   FUNC_6(&VAR_2->lock);
   while (!VAR_2->quit)
   {
      struct timespec VAR_3;


      if (FUNC_1(&VAR_2->expires))
         FUNC_5(&VAR_2->settings_changed, &VAR_2->lock);
      else
         FUNC_4(&VAR_2->settings_changed, &VAR_2->lock, &VAR_2->expires);


      FUNC_3(VAR_0, &VAR_3);
      if (FUNC_1(&VAR_2->expires) || FUNC_0(&VAR_2->expires, &VAR_3))
         continue;




      FUNC_2(&VAR_2->expires);
      VAR_2->orig_expiration_routine(VAR_2->orig_context);
   }
   FUNC_7(&VAR_2->lock);

   return ((void*)0);
}
