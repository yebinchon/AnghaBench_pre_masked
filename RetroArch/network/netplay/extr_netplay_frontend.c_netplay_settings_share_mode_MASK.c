
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int netplay_share_digital; int netplay_share_analog; } ;
struct TYPE_5__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 TYPE_2__* FUNC_0 () ;

uint8_t FUNC_1(void)
{
   settings_t *VAR_6 = FUNC_0();
   uint8_t VAR_7 = 0;

   if (VAR_6->uints.netplay_share_digital
         || VAR_6->uints.netplay_share_analog)
   {
      switch (VAR_6->uints.netplay_share_digital)
      {
         case 130:
            VAR_7 |= VAR_2;
            break;
         case 128:
            VAR_7 |= VAR_4;
            break;
         case 129:
            VAR_7 |= VAR_3;
            break;
         default:
            VAR_7 |= VAR_5;
      }
      switch (VAR_6->uints.netplay_share_analog)
      {
         case 131:
            VAR_7 |= VAR_1;
            break;
         case 132:
            VAR_7 |= VAR_0;
            break;
         default:
            VAR_7 |= VAR_5;
      }
   }

   return VAR_7;
}
