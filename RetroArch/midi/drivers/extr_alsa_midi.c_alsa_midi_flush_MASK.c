
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seq; } ;
typedef TYPE_1__ alsa_midi_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0)
{
   int VAR_1;
   alsa_midi_t *VAR_2 = (alsa_midi_t*)VAR_0;

   VAR_1 = FUNC_1(VAR_2->seq);





   return VAR_1 == 0;
}
