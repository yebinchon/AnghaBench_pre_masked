
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nonblock; int pcm; } ;
typedef TYPE_1__ alsa_qsa_t ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, bool VAR_1)
{
   alsa_qsa_t *VAR_2 = (alsa_qsa_t*)VAR_0;

   int VAR_3;

   if((VAR_3 = FUNC_1(VAR_2->pcm, VAR_1)) < 0)
   {
      FUNC_0("Can't set blocking mode to %d: %s\n", VAR_1,
            FUNC_2(VAR_3));
      return;
   }

   VAR_2->nonblock = VAR_1;
}
