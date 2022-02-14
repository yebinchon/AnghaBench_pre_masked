
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ written; int spinlock; int mvoice; } ;
typedef TYPE_1__ ax_audio_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_3 ;

void FUNC_4(void)
{

   if(VAR_3 == ((void*)0))
      return;

   ax_audio_t *VAR_4 = (ax_audio_t*)VAR_3;
   if(FUNC_0(VAR_4->mvoice))
   {
      if(FUNC_2(&VAR_4->spinlock))
      {

         if(VAR_4->written < VAR_1)
            FUNC_1(VAR_4->mvoice, VAR_2);
         VAR_4->written -= VAR_0;
         FUNC_3(&VAR_4->spinlock);
      }
   }
}
