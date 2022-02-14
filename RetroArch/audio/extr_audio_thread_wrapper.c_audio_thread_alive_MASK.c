
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int is_paused; } ;
typedef TYPE_1__ audio_thread_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0)
{
   bool VAR_1 = 0;
   audio_thread_t *VAR_2 = (audio_thread_t*)VAR_0;

   if (!VAR_2)
      return 0;

   FUNC_0(VAR_2);
   VAR_1 = !VAR_2->is_paused;
   FUNC_1(VAR_2);

   return VAR_1;
}
