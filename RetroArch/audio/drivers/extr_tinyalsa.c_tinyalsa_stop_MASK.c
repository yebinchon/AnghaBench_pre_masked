
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_paused; int pcm; scalar_t__ can_pause; } ;
typedef TYPE_1__ tinyalsa_t ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static bool
FUNC_1(void *VAR_0)
{
 tinyalsa_t *VAR_1 = (tinyalsa_t*)VAR_0;

 if (VAR_1->can_pause && !VAR_1->is_paused)
   {
  int VAR_2 = FUNC_0(VAR_1->pcm, 1);
  if (VAR_2 < 0)
   return 0;

  VAR_1->is_paused = 1;
 }

 return 1;
}
