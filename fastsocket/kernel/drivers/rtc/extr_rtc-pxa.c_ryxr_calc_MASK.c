
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct rtc_time *VAR_2)
{
 return ((VAR_2->tm_year + 1900) << VAR_1)
  | ((VAR_2->tm_mon + 1) << VAR_0)
  | VAR_2->tm_mday;
}
