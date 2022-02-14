
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ,int ,int ) ;

int FUNC_2(struct rtc_time *VAR_0)
{
 u64 VAR_1;
 VAR_1 = FUNC_1(VAR_0->tm_year+1900,
       VAR_0->tm_mon+1, VAR_0->tm_mday,
       VAR_0->tm_hour, VAR_0->tm_min, VAR_0->tm_sec);
 if (FUNC_0(VAR_1))
  return -1;
 return 0;
}
