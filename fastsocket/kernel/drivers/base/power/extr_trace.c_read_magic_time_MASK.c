
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_hour; int tm_min; int tm_mon; int tm_mday; int tm_year; int tm_sec; } ;


 int FUNC_0 (struct rtc_time*) ;
 int FUNC_1 (char*,int,int,int ,int,int,int) ;

__attribute__((used)) static unsigned int FUNC_2(void)
{
 struct rtc_time VAR_0;
 unsigned int VAR_1;

 FUNC_0(&VAR_0);
 FUNC_1("Time: %2d:%02d:%02d  Date: %02d/%02d/%02d\n",
  VAR_0.tm_hour, VAR_0.tm_min, VAR_0.tm_sec,
  VAR_0.tm_mon + 1, VAR_0.tm_mday, VAR_0.tm_year % 100);
 VAR_1 = VAR_0.tm_year;
 if (VAR_1 > 100)
  VAR_1 -= 100;
 VAR_1 += VAR_0.tm_mon * 100;
 VAR_1 += (VAR_0.tm_mday-1) * 100 * 12;
 VAR_1 += VAR_0.tm_hour * 100 * 12 * 28;
 VAR_1 += (VAR_0.tm_min / 3) * 100 * 12 * 28 * 24;
 return VAR_1;
}
