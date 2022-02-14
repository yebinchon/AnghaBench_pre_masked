
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {scalar_t__ CR; int WPR; scalar_t__ ALRMAR; } ;
struct TYPE_5__ {scalar_t__ RTC_Hours; int RTC_H12; scalar_t__ RTC_Minutes; scalar_t__ RTC_Seconds; } ;
struct TYPE_6__ {scalar_t__ RTC_AlarmDateWeekDaySel; scalar_t__ RTC_AlarmDateWeekDay; scalar_t__ RTC_AlarmMask; TYPE_1__ RTC_AlarmTime; } ;
typedef TYPE_2__ RTC_AlarmTypeDef ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 TYPE_4__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_13 (int ) ;

void FUNC_14(uint32_t VAR_5, uint32_t VAR_6, RTC_AlarmTypeDef* VAR_7)
{
  uint32_t VAR_8 = 0;


  FUNC_13(FUNC_5(VAR_5));
  FUNC_13(FUNC_0(VAR_6));
  FUNC_13(FUNC_4(VAR_7->RTC_AlarmMask));
  FUNC_13(FUNC_2(VAR_7->RTC_AlarmDateWeekDaySel));

  if (VAR_5 == VAR_4)
  {
    if ((VAR_1->CR & VAR_3) != (uint32_t)VAR_0)
    {
      FUNC_13(FUNC_7(VAR_7->RTC_AlarmTime.RTC_Hours));
      FUNC_13(FUNC_6(VAR_7->RTC_AlarmTime.RTC_H12));
    }
    else
    {
      VAR_7->RTC_AlarmTime.RTC_H12 = 0x00;
      FUNC_13(FUNC_8(VAR_7->RTC_AlarmTime.RTC_Hours));
    }
    FUNC_13(FUNC_9(VAR_7->RTC_AlarmTime.RTC_Minutes));
    FUNC_13(FUNC_10(VAR_7->RTC_AlarmTime.RTC_Seconds));

    if(VAR_7->RTC_AlarmDateWeekDaySel == VAR_2)
    {
      FUNC_13(FUNC_1(VAR_7->RTC_AlarmDateWeekDay));
    }
    else
    {
      FUNC_13(FUNC_3(VAR_7->RTC_AlarmDateWeekDay));
    }
  }
  else
  {
    if ((VAR_1->CR & VAR_3) != (uint32_t)VAR_0)
    {
      VAR_8 = FUNC_11(VAR_7->RTC_AlarmTime.RTC_Hours);
      FUNC_13(FUNC_7(VAR_8));
      FUNC_13(FUNC_6(VAR_7->RTC_AlarmTime.RTC_H12));
    }
    else
    {
      VAR_7->RTC_AlarmTime.RTC_H12 = 0x00;
      FUNC_13(FUNC_8(FUNC_11(VAR_7->RTC_AlarmTime.RTC_Hours)));
    }

    FUNC_13(FUNC_9(FUNC_11(VAR_7->RTC_AlarmTime.RTC_Minutes)));
    FUNC_13(FUNC_10(FUNC_11(VAR_7->RTC_AlarmTime.RTC_Seconds)));

    if(VAR_7->RTC_AlarmDateWeekDaySel == VAR_2)
    {
      VAR_8 = FUNC_11(VAR_7->RTC_AlarmDateWeekDay);
      FUNC_13(FUNC_1(VAR_8));
    }
    else
    {
      VAR_8 = FUNC_11(VAR_7->RTC_AlarmDateWeekDay);
      FUNC_13(FUNC_3(VAR_8));
    }
  }


  if (VAR_5 != VAR_4)
  {
    VAR_8 = (((uint32_t)(VAR_7->RTC_AlarmTime.RTC_Hours) << 16) | ((uint32_t)(VAR_7->RTC_AlarmTime.RTC_Minutes) << 8) | ((uint32_t)VAR_7->RTC_AlarmTime.RTC_Seconds) | ((uint32_t)(VAR_7->RTC_AlarmTime.RTC_H12) << 16) | ((uint32_t)(VAR_7->RTC_AlarmDateWeekDay) << 24) | ((uint32_t)VAR_7->RTC_AlarmDateWeekDaySel) | ((uint32_t)VAR_7->RTC_AlarmMask));






  }
  else
  {
    VAR_8 = (((uint32_t)FUNC_12(VAR_7->RTC_AlarmTime.RTC_Hours) << 16) | ((uint32_t)FUNC_12(VAR_7->RTC_AlarmTime.RTC_Minutes) << 8) | ((uint32_t)FUNC_12(VAR_7->RTC_AlarmTime.RTC_Seconds)) | ((uint32_t)(VAR_7->RTC_AlarmTime.RTC_H12) << 16) | ((uint32_t)FUNC_12(VAR_7->RTC_AlarmDateWeekDay) << 24) | ((uint32_t)VAR_7->RTC_AlarmDateWeekDaySel) | ((uint32_t)VAR_7->RTC_AlarmMask));






  }


  VAR_1->WPR = 0xCA;
  VAR_1->WPR = 0x53;


  VAR_1->ALRMAR = (uint32_t)VAR_8;


  VAR_1->WPR = 0xFF;
}
