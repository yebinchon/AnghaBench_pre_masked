
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int WPR; int CR; scalar_t__ DR; } ;
struct TYPE_4__ {int RTC_Month; scalar_t__ RTC_Year; scalar_t__ RTC_Date; scalar_t__ RTC_WeekDay; } ;
typedef TYPE_1__ RTC_DateTypeDef ;
typedef scalar_t__ ErrorStatus ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (int ) ;

ErrorStatus FUNC_11(uint32_t VAR_7, RTC_DateTypeDef* VAR_8)
{
  uint32_t VAR_9 = 0;
  ErrorStatus VAR_10 = VAR_0;


  FUNC_10(FUNC_1(VAR_7));

  if ((VAR_7 == VAR_5) && ((VAR_8->RTC_Month & 0x10) == 0x10))
  {
    VAR_8->RTC_Month = (VAR_8->RTC_Month & (uint32_t)~(0x10)) + 0x0A;
  }
  if (VAR_7 == VAR_5)
  {
    FUNC_10(FUNC_4(VAR_8->RTC_Year));
    FUNC_10(FUNC_2(VAR_8->RTC_Month));
    FUNC_10(FUNC_0(VAR_8->RTC_Date));
  }
  else
  {
    FUNC_10(FUNC_4(FUNC_5(VAR_8->RTC_Year)));
    VAR_9 = FUNC_5(VAR_8->RTC_Month);
    FUNC_10(FUNC_2(VAR_9));
    VAR_9 = FUNC_5(VAR_8->RTC_Date);
    FUNC_10(FUNC_0(VAR_9));
  }
  FUNC_10(FUNC_3(VAR_8->RTC_WeekDay));


  if (VAR_7 != VAR_5)
  {
    VAR_9 = ((((uint32_t)VAR_8->RTC_Year) << 16) | (((uint32_t)VAR_8->RTC_Month) << 8) | ((uint32_t)VAR_8->RTC_Date) | (((uint32_t)VAR_8->RTC_WeekDay) << 13));



  }
  else
  {
    VAR_9 = (((uint32_t)FUNC_6(VAR_8->RTC_Year) << 16) | ((uint32_t)FUNC_6(VAR_8->RTC_Month) << 8) | ((uint32_t)FUNC_6(VAR_8->RTC_Date)) | ((uint32_t)VAR_8->RTC_WeekDay << 13));



  }


  VAR_2->WPR = 0xCA;
  VAR_2->WPR = 0x53;


  if (FUNC_7() == VAR_0)
  {
    VAR_10 = VAR_0;
  }
  else
  {

    VAR_2->DR = (uint32_t)(VAR_9 & VAR_4);


    FUNC_8();


    if ((VAR_2->CR & VAR_3) == VAR_1)
    {
      if (FUNC_9() == VAR_0)
      {
        VAR_10 = VAR_0;
      }
      else
      {
        VAR_10 = VAR_6;
      }
    }
    else
    {
      VAR_10 = VAR_6;
    }
  }

  VAR_2->WPR = 0xFF;

  return VAR_10;
}
