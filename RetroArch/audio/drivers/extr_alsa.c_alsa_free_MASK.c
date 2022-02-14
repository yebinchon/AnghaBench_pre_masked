
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pcm; } ;
typedef TYPE_1__ alsa_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
   alsa_t *VAR_1 = (alsa_t*)VAR_0;

   if (VAR_1)
   {
      if (VAR_1->pcm)
      {
         FUNC_3(VAR_1->pcm);
         FUNC_2(VAR_1->pcm);
         FUNC_1();
      }

      FUNC_0(VAR_1);
   }
}
