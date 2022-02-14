
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dpad; } ;
struct ps4 {TYPE_1__ btn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





__attribute__((used)) static bool FUNC_0(struct ps4 *VAR_8, unsigned VAR_9)
{
   switch (VAR_9)
   {
      case 128:
         return (VAR_8->btn.dpad == VAR_3) || (VAR_8->btn.dpad == VAR_6) || (VAR_8->btn.dpad == VAR_7);
      case 129:
         return (VAR_8->btn.dpad == VAR_7) || (VAR_8->btn.dpad == VAR_4) || (VAR_8->btn.dpad == VAR_5);
      case 131:
         return (VAR_8->btn.dpad == VAR_5) || (VAR_8->btn.dpad == VAR_0) || (VAR_8->btn.dpad == VAR_1);
      case 130:
         return (VAR_8->btn.dpad == VAR_1) || (VAR_8->btn.dpad == VAR_2) || (VAR_8->btn.dpad == VAR_3);
   }

   return 0;
}
