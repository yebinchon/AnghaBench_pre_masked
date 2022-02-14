
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_isdst; scalar_t__ tm_yday; scalar_t__ tm_wday; scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
typedef int lua_State ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2 (lua_State *VAR_0, struct tm *VAR_1) {
  FUNC_1(VAR_0, "sec", VAR_1->tm_sec);
  FUNC_1(VAR_0, "min", VAR_1->tm_min);
  FUNC_1(VAR_0, "hour", VAR_1->tm_hour);
  FUNC_1(VAR_0, "day", VAR_1->tm_mday);
  FUNC_1(VAR_0, "month", VAR_1->tm_mon + 1);
  FUNC_1(VAR_0, "year", VAR_1->tm_year + 1900);
  FUNC_1(VAR_0, "wday", VAR_1->tm_wday + 1);
  FUNC_1(VAR_0, "yday", VAR_1->tm_yday + 1);
  FUNC_0(VAR_0, "isdst", VAR_1->tm_isdst);
}
