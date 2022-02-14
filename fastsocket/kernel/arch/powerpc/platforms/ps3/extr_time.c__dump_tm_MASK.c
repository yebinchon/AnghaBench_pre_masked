
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_wday; int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 int FUNC_0 (char*,char const*,int,int ) ;

__attribute__((used)) static void FUNC_1(const struct rtc_time *VAR_0, const char* VAR_1, int VAR_2)
{
 FUNC_0("%s:%d tm_sec  %d\n", VAR_1, VAR_2, VAR_0->tm_sec);
 FUNC_0("%s:%d tm_min  %d\n", VAR_1, VAR_2, VAR_0->tm_min);
 FUNC_0("%s:%d tm_hour %d\n", VAR_1, VAR_2, VAR_0->tm_hour);
 FUNC_0("%s:%d tm_mday %d\n", VAR_1, VAR_2, VAR_0->tm_mday);
 FUNC_0("%s:%d tm_mon  %d\n", VAR_1, VAR_2, VAR_0->tm_mon);
 FUNC_0("%s:%d tm_year %d\n", VAR_1, VAR_2, VAR_0->tm_year);
 FUNC_0("%s:%d tm_wday %d\n", VAR_1, VAR_2, VAR_0->tm_wday);
}
