
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; scalar_t__ tm_wday; } ;
struct TYPE_2__ {int adb_type; } ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 TYPE_1__* VAR_0 ;
 unsigned long FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 unsigned long FUNC_5 () ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (unsigned long,int ,int *,int *,int *,int *,int *,int *) ;
 unsigned long FUNC_9 () ;
 int FUNC_10 (unsigned long) ;

int FUNC_11(int VAR_1, struct rtc_time *VAR_2)
{
 unsigned long VAR_3;

 if (!VAR_1) {
  switch (VAR_0->adb_type) {
  case 132:
  case 130:
   VAR_3 = FUNC_9();
   break;
  case 131:
   VAR_3 = FUNC_2();
   break;
  case 129:
  case 128:
   VAR_3 = FUNC_5();
   break;
  case 133:
   VAR_3 = FUNC_0();
   break;
  default:
   VAR_3 = 0;
  }

  VAR_2->tm_wday = 0;
  FUNC_8(VAR_3, 0,
    &VAR_2->tm_year, &VAR_2->tm_mon, &VAR_2->tm_mday,
    &VAR_2->tm_hour, &VAR_2->tm_min, &VAR_2->tm_sec);





 } else {






  VAR_3 = FUNC_4(VAR_2->tm_year + 1900, VAR_2->tm_mon + 1, VAR_2->tm_mday,
        VAR_2->tm_hour, VAR_2->tm_min, VAR_2->tm_sec);

  switch (VAR_0->adb_type) {
  case 132:
  case 130:
   FUNC_10(VAR_3);
   break;
  case 133:
   FUNC_1(VAR_3);
   break;
  case 129:
  case 128:
   FUNC_6(VAR_3);
   break;
  case 131:
   FUNC_3(VAR_3);
  }
 }
 return 0;
}
