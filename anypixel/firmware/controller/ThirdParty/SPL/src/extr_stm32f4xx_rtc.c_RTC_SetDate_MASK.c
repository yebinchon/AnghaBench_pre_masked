
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int WPR; scalar_t__ DR; } ;
struct TYPE_4__ {int RTC_Month; scalar_t__ RTC_Year; scalar_t__ RTC_Date; scalar_t__ RTC_WeekDay; } ;
typedef TYPE_1__ RTC_DateTypeDef ;
typedef scalar_t__ ErrorStatus ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int ) ;

ErrorStatus FUNC_11(uint32_t VAR_5, RTC_DateTypeDef* VAR_6)
{
  uint32_t VAR_7 = 0;
  ErrorStatus VAR_8 = VAR_0;


  FUNC_10(FUNC_1(VAR_5));

  if ((VAR_5 == VAR_3) && ((VAR_6->RTC_Month & 0x10) == 0x10))
  {
    VAR_6->RTC_Month = (VAR_6->RTC_Month & (uint32_t)~(0x10)) + 0x0A;
  }
  if (VAR_5 == VAR_3)
  {
    FUNC_10(FUNC_4(VAR_6->RTC_Year));
    FUNC_10(FUNC_2(VAR_6->RTC_Month));
    FUNC_10(FUNC_0(VAR_6->RTC_Date));
  }
  else
  {
    FUNC_10(FUNC_4(FUNC_5(VAR_6->RTC_Year)));
    VAR_7 = FUNC_5(VAR_6->RTC_Month);
    FUNC_10(FUNC_2(VAR_7));
    VAR_7 = FUNC_5(VAR_6->RTC_Date);
    FUNC_10(FUNC_0(VAR_7));
  }
  FUNC_10(FUNC_3(VAR_6->RTC_WeekDay));


  if (VAR_5 != VAR_3)
  {
    VAR_7 = ((((uint32_t)VAR_6->RTC_Year) << 16) | (((uint32_t)VAR_6->RTC_Month) << 8) | ((uint32_t)VAR_6->RTC_Date) | (((uint32_t)VAR_6->RTC_WeekDay) << 13));



  }
  else
  {
    VAR_7 = (((uint32_t)FUNC_6(VAR_6->RTC_Year) << 16) | ((uint32_t)FUNC_6(VAR_6->RTC_Month) << 8) | ((uint32_t)FUNC_6(VAR_6->RTC_Date)) | ((uint32_t)VAR_6->RTC_WeekDay << 13));



  }


  VAR_1->WPR = 0xCA;
  VAR_1->WPR = 0x53;


  if (FUNC_7() == VAR_0)
  {
    VAR_8 = VAR_0;
  }
  else
  {

    VAR_1->DR = (uint32_t)(VAR_7 & VAR_2);


    FUNC_8();

    if(FUNC_9() == VAR_0)
    {
      VAR_8 = VAR_0;
    }
    else
    {
      VAR_8 = VAR_4;
    }
  }

  VAR_1->WPR = 0xFF;

  return VAR_8;
}
