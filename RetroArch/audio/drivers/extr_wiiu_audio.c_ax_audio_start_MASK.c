
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ written; scalar_t__ pos; int mvoice; } ;
typedef TYPE_1__ ax_audio_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static bool FUNC_3(void* VAR_2, bool VAR_3)
{
   ax_audio_t* VAR_4 = (ax_audio_t*)VAR_2;



   if (VAR_3)
      return 1;


   if(VAR_4->written > VAR_0)
   {
      FUNC_0(VAR_4->mvoice, FUNC_2(VAR_4->pos - VAR_4->written));
      FUNC_1(VAR_4->mvoice, VAR_1);
   }
   return 1;
}
