
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtc_time*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 void* FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct device *VAR_6, struct rtc_time *VAR_7)
{

 FUNC_1();
 FUNC_4();

 VAR_7->tm_sec = FUNC_3(VAR_4);
 VAR_7->tm_min = FUNC_3(VAR_2);
 VAR_7->tm_hour = FUNC_3(VAR_1);
 VAR_7->tm_mday = FUNC_3(VAR_0);
 VAR_7->tm_mon = FUNC_3(VAR_3);
 VAR_7->tm_year = FUNC_3(VAR_5);

 FUNC_2();

 FUNC_0(VAR_7);
 return 0;
}
