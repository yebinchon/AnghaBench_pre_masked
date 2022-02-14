
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_paused; int pcm; scalar_t__ can_pause; } ;
typedef TYPE_1__ alsa_qsa_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0, bool VAR_1)
{
   alsa_qsa_t *VAR_2 = (alsa_qsa_t*)VAR_0;

   if (VAR_2->can_pause && VAR_2->is_paused)
   {
      int VAR_3 = FUNC_1(VAR_2->pcm);

      if (VAR_3 < 0)
      {
         FUNC_0("[ALSA QSA]: Failed to unpause: %s.\n",
               FUNC_2(VAR_3));
         return 0;
      }

      VAR_2->is_paused = 0;
   }

   return 1;
}
