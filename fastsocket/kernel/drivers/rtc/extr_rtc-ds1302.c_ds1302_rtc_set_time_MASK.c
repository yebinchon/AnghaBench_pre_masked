
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_7, struct rtc_time *VAR_8)
{

 FUNC_2(VAR_5, FUNC_1(VAR_5) | 0x80);

 FUNC_2(VAR_5, FUNC_0(VAR_8->tm_sec));
 FUNC_2(VAR_3, FUNC_0(VAR_8->tm_min));
 FUNC_2(VAR_2, FUNC_0(VAR_8->tm_hour));
 FUNC_2(VAR_1, FUNC_0(VAR_8->tm_wday));
 FUNC_2(VAR_0, FUNC_0(VAR_8->tm_mday));
 FUNC_2(VAR_4, FUNC_0(VAR_8->tm_mon + 1));
 FUNC_2(VAR_6, FUNC_0(VAR_8->tm_year % 100));


 FUNC_2(VAR_5, FUNC_1(VAR_5) & ~0x80);

 return 0;
}
