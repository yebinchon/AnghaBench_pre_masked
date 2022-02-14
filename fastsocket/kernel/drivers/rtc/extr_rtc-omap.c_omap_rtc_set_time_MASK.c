
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_7, struct rtc_time *VAR_8)
{
 if (FUNC_4(VAR_8) < 0)
  return -VAR_0;
 FUNC_0();
 FUNC_2();

 FUNC_3(VAR_8->tm_year, VAR_6);
 FUNC_3(VAR_8->tm_mon, VAR_4);
 FUNC_3(VAR_8->tm_mday, VAR_1);
 FUNC_3(VAR_8->tm_hour, VAR_2);
 FUNC_3(VAR_8->tm_min, VAR_3);
 FUNC_3(VAR_8->tm_sec, VAR_5);

 FUNC_1();

 return 0;
}
