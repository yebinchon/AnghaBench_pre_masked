
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_paused; int is_shutdown; } ;
typedef TYPE_1__ audio_thread_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0, bool VAR_1)
{
   audio_thread_t *VAR_2 = (audio_thread_t*)VAR_0;

   if (!VAR_2)
      return 0;

   FUNC_0();

   VAR_2->is_paused = 0;
   VAR_2->is_shutdown = VAR_1;
   FUNC_1(VAR_2);

   return 1;
}
