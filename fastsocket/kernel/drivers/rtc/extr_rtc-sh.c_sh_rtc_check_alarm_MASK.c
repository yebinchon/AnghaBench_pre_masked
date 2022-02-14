
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; int tm_mon; int tm_mday; int tm_wday; int tm_hour; int tm_min; int tm_sec; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct rtc_time *VAR_1)
{






 if (VAR_1->tm_year == 0xffff)
  VAR_1->tm_year = -1;
 if (VAR_1->tm_mon >= 0xff)
  VAR_1->tm_mon = -1;
 if (VAR_1->tm_mday >= 0xff)
  VAR_1->tm_mday = -1;
 if (VAR_1->tm_wday >= 0xff)
  VAR_1->tm_wday = -1;
 if (VAR_1->tm_hour >= 0xff)
  VAR_1->tm_hour = -1;
 if (VAR_1->tm_min >= 0xff)
  VAR_1->tm_min = -1;
 if (VAR_1->tm_sec >= 0xff)
  VAR_1->tm_sec = -1;

 if (VAR_1->tm_year > 9999 ||
  VAR_1->tm_mon >= 12 ||
  VAR_1->tm_mday == 0 || VAR_1->tm_mday >= 32 ||
  VAR_1->tm_wday >= 7 ||
  VAR_1->tm_hour >= 24 ||
  VAR_1->tm_min >= 60 ||
  VAR_1->tm_sec >= 60)
  return -VAR_0;

 return 0;
}
