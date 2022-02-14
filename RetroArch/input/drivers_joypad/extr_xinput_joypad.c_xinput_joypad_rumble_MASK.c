
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint16_t ;
typedef enum retro_rumble_effect { ____Placeholder_retro_rumble_effect } retro_rumble_effect ;
struct TYPE_5__ {int (* set_rumble ) (unsigned int,int,void*) ;} ;
struct TYPE_4__ {void* wRightMotorSpeed; void* wLeftMotorSpeed; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 scalar_t__ FUNC_0 (int,TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int,void*) ;

__attribute__((used)) static bool FUNC_3(unsigned VAR_4,
      enum retro_rumble_effect VAR_5, uint16_t VAR_6)
{
   int VAR_7 = FUNC_1(VAR_4);

   if (VAR_7 == -1)
   {




      return 0;
   }


   if (VAR_5 == VAR_0)
      VAR_3[VAR_7].wLeftMotorSpeed = VAR_6;
   else if (VAR_5 == VAR_1)
      VAR_3[VAR_7].wRightMotorSpeed = VAR_6;

   if (!&FUNC_0)
      return 0;

   return (FUNC_0(VAR_7, &VAR_3[VAR_7])
      == 0);
}
