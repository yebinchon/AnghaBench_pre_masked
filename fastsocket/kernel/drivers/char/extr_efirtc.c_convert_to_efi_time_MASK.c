
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rtc_time {scalar_t__ tm_isdst; int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct TYPE_3__ {int timezone; int daylight; scalar_t__ nanosecond; int second; int minute; int hour; int day; scalar_t__ month; scalar_t__ year; } ;
typedef TYPE_1__ efi_time_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct rtc_time *VAR_2, efi_time_t *VAR_3)
{

 VAR_3->year = VAR_2->tm_year + 1900;
 VAR_3->month = VAR_2->tm_mon + 1;
 VAR_3->day = VAR_2->tm_mday;
 VAR_3->hour = VAR_2->tm_hour;
 VAR_3->minute = VAR_2->tm_min;
 VAR_3->second = VAR_2->tm_sec;
 VAR_3->nanosecond = 0;
 VAR_3->daylight = VAR_2->tm_isdst ? VAR_0: 0;
 VAR_3->timezone = VAR_1;
}
