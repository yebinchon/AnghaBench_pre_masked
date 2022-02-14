
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_paused; } ;
typedef TYPE_1__ audio_thread_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0)
{
   audio_thread_t *VAR_1 = (audio_thread_t*)VAR_0;

   if (!VAR_1)
      return 0;

   FUNC_1(VAR_1);
   VAR_1->is_paused = 1;

   FUNC_0();

   return 1;
}
