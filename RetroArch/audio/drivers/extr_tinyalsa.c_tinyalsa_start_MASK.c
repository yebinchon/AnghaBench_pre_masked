
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_paused; int pcm; scalar_t__ can_pause; } ;
typedef TYPE_1__ tinyalsa_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool
FUNC_2(void *VAR_0, bool VAR_1)
{
 tinyalsa_t *VAR_2 = (tinyalsa_t*)VAR_0;

 if (VAR_2->can_pause && VAR_2->is_paused)
   {
  int VAR_3 = FUNC_1(VAR_2->pcm, 0);

  if (VAR_3 < 0)
      {
   FUNC_0("[TINYALSA]: Failed to unpause.\n");
   return 0;
  }

  VAR_2->is_paused = 0;
 }

 return 1;
}
