
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_paused; int data; } ;
typedef TYPE_1__ gx_audio_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0)
{
   gx_audio_t *VAR_1 = (gx_audio_t*)VAR_0;

   if (!VAR_1)
      return 0;

   FUNC_0();
   FUNC_2(VAR_1->data, 0, sizeof(VAR_1->data));
   FUNC_1(VAR_1->data, sizeof(VAR_1->data));
   VAR_1->is_paused = 1;
   return 1;
}
