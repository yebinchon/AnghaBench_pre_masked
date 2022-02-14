
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ CR; int WPR; scalar_t__ TR; } ;
struct TYPE_4__ {scalar_t__ RTC_Hours; int RTC_H12; scalar_t__ RTC_Minutes; scalar_t__ RTC_Seconds; } ;
typedef TYPE_1__ RTC_TimeTypeDef ;
typedef scalar_t__ ErrorStatus ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (int ) ;

ErrorStatus FUNC_12(uint32_t VAR_8, RTC_TimeTypeDef* VAR_9)
{
  uint32_t VAR_10 = 0;
  ErrorStatus VAR_11 = VAR_0;


  FUNC_11(FUNC_0(VAR_8));

  if (VAR_8 == VAR_5)
  {
    if ((VAR_2->CR & VAR_4) != (uint32_t)VAR_1)
    {
      FUNC_11(FUNC_2(VAR_9->RTC_Hours));
      FUNC_11(FUNC_1(VAR_9->RTC_H12));
    }
    else
    {
      VAR_9->RTC_H12 = 0x00;
      FUNC_11(FUNC_3(VAR_9->RTC_Hours));
    }
    FUNC_11(FUNC_4(VAR_9->RTC_Minutes));
    FUNC_11(FUNC_5(VAR_9->RTC_Seconds));
  }
  else
  {
    if ((VAR_2->CR & VAR_4) != (uint32_t)VAR_1)
    {
      VAR_10 = FUNC_6(VAR_9->RTC_Hours);
      FUNC_11(FUNC_2(VAR_10));
      FUNC_11(FUNC_1(VAR_9->RTC_H12));
    }
    else
    {
      VAR_9->RTC_H12 = 0x00;
      FUNC_11(FUNC_3(FUNC_6(VAR_9->RTC_Hours)));
    }
    FUNC_11(FUNC_4(FUNC_6(VAR_9->RTC_Minutes)));
    FUNC_11(FUNC_5(FUNC_6(VAR_9->RTC_Seconds)));
  }


  if (VAR_8 != VAR_5)
  {
    VAR_10 = (((uint32_t)(VAR_9->RTC_Hours) << 16) | ((uint32_t)(VAR_9->RTC_Minutes) << 8) | ((uint32_t)VAR_9->RTC_Seconds) | ((uint32_t)(VAR_9->RTC_H12) << 16));



  }
  else
  {
    VAR_10 = (uint32_t)(((uint32_t)FUNC_7(VAR_9->RTC_Hours) << 16) | ((uint32_t)FUNC_7(VAR_9->RTC_Minutes) << 8) | ((uint32_t)FUNC_7(VAR_9->RTC_Seconds)) | (((uint32_t)VAR_9->RTC_H12) << 16));



  }


  VAR_2->WPR = 0xCA;
  VAR_2->WPR = 0x53;


  if (FUNC_8() == VAR_0)
  {
    VAR_11 = VAR_0;
  }
  else
  {

    VAR_2->TR = (uint32_t)(VAR_10 & VAR_6);


    FUNC_9();


    if ((VAR_2->CR & VAR_3) == VAR_1)
    {
      if (FUNC_10() == VAR_0)
      {
        VAR_11 = VAR_0;
      }
      else
      {
        VAR_11 = VAR_7;
      }
    }
    else
    {
      VAR_11 = VAR_7;
    }

  }

  VAR_2->WPR = 0xFF;

  return VAR_11;
}
