
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; int tm_mday; scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mon; } ;



__attribute__((used)) static inline int FUNC_0(struct rtc_time *VAR_0)
{
 return (VAR_0->tm_year == -1) ||
  ((unsigned)VAR_0->tm_mon >= 12) ||
  ((unsigned)(VAR_0->tm_mday - 1) >= 31) ||
  ((unsigned)VAR_0->tm_hour > 23) ||
  ((unsigned)VAR_0->tm_min > 59) ||
  ((unsigned)VAR_0->tm_sec > 59);
}
