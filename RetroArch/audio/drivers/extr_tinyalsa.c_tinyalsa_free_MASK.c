
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pcm; } ;
typedef TYPE_1__ tinyalsa_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
   tinyalsa_t *VAR_1 = (tinyalsa_t*)VAR_0;

   if (VAR_1)
   {
      if (VAR_1->pcm)
         FUNC_1(VAR_1->pcm);

      VAR_1->pcm = ((void*)0);
      FUNC_0(VAR_1);
   }
}
