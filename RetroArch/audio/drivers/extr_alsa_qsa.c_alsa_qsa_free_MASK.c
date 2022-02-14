
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* buffer_chunk; struct TYPE_3__* buffer; int * pcm; } ;
typedef TYPE_1__ alsa_qsa_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
   alsa_qsa_t *VAR_1 = (alsa_qsa_t*)VAR_0;

   if (VAR_1)
   {
      if (VAR_1->pcm)
      {
         FUNC_1(VAR_1->pcm);
         VAR_1->pcm = ((void*)0);
      }
      FUNC_0(VAR_1->buffer);
      FUNC_0(VAR_1->buffer_chunk);
      FUNC_0(VAR_1);
   }
}
