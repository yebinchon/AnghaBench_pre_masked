
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; int tm_mday; int tm_mon; int tm_year; scalar_t__ tm_isdst; } ;


 int FUNC_0 (struct tm*) ;

time_t FUNC_1 (uint16_t VAR_0, uint16_t VAR_1)
{
 struct tm VAR_2;

 VAR_2.tm_hour = VAR_0 >> 11;
 VAR_2.tm_min = (VAR_0 >> 5) & 0x3F;
 VAR_2.tm_sec = (VAR_0 & 0x1F) << 1;

 VAR_2.tm_mday = VAR_1 & 0x1F;
 VAR_2.tm_mon = ((VAR_1 >> 5) & 0x0F) - 1;
 VAR_2.tm_year = (VAR_1 >> 9) + 80;

 VAR_2.tm_isdst = 0;

 return FUNC_0(&VAR_2);
}
