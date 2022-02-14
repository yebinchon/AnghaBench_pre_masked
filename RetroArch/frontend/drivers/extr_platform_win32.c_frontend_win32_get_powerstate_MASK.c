
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum frontend_powerstate { ____Placeholder_frontend_powerstate } frontend_powerstate ;
struct TYPE_3__ {int BatteryFlag; int ACLineStatus; scalar_t__ BatteryLifeTime; scalar_t__ BatteryLifePercent; } ;
typedef TYPE_1__ SYSTEM_POWER_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;

enum frontend_powerstate FUNC_1(int *VAR_5, int *VAR_6)
{
   SYSTEM_POWER_STATUS VAR_7;
   enum frontend_powerstate VAR_8 = VAR_2;

   if (!FUNC_0(&VAR_7))
      return VAR_8;

   if (VAR_7.BatteryFlag == 0xFF)
      VAR_8 = VAR_2;
   else if (VAR_7.BatteryFlag & (1 << 7))
      VAR_8 = VAR_3;
   else if (VAR_7.BatteryFlag & (1 << 3))
      VAR_8 = VAR_1;
   else if (VAR_7.ACLineStatus == 1)
      VAR_8 = VAR_0;
   else
      VAR_8 = VAR_4;

   *VAR_6 = (int)VAR_7.BatteryLifePercent;
   *VAR_5 = (int)VAR_7.BatteryLifeTime;






   return VAR_8;
}
