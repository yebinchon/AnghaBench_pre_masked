
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int video_smooth; } ;
struct TYPE_5__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;



 TYPE_2__* FUNC_0 () ;

int32_t FUNC_1(unsigned VAR_2)
{
   switch (VAR_2)
   {
      case 128:
         {
            settings_t *VAR_3 = FUNC_0();
            if (!VAR_3->bools.video_smooth)
               break;
         }

      case 130:
         return (int32_t)VAR_0;
      case 129:
         break;
   }

   return (int32_t)VAR_1;
}
