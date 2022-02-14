
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; int member_0; } ;
typedef int int64_t ;


 void* FUNC_0 (int,int,int) ;
 scalar_t__ FUNC_1 (struct tm*) ;

__attribute__((used)) static int64_t FUNC_2(uint64_t VAR_0)
{
    struct tm VAR_1 = { 0 };
    int VAR_2;
    VAR_1.tm_year = (VAR_0 >> 48) - 1900;
    VAR_1.tm_mon = (VAR_0 >> 40 & 0xFF) - 1;
    VAR_1.tm_mday = (VAR_0 >> 32 & 0xFF);
    VAR_1.tm_hour = (VAR_0 >> 24 & 0xFF);
    VAR_1.tm_min = (VAR_0 >> 16 & 0xFF);
    VAR_1.tm_sec = (VAR_0 >> 8 & 0xFF);
    VAR_2 = (VAR_0 & 0xFF) * 4;


    VAR_1.tm_mon = FUNC_0(VAR_1.tm_mon, 0, 11);
    VAR_1.tm_mday = FUNC_0(VAR_1.tm_mday, 1, 31);
    VAR_1.tm_hour = FUNC_0(VAR_1.tm_hour, 0, 23);
    VAR_1.tm_min = FUNC_0(VAR_1.tm_min, 0, 59);
    VAR_1.tm_sec = FUNC_0(VAR_1.tm_sec, 0, 59);
    VAR_2 = FUNC_0(VAR_2, 0, 999);

    return (int64_t)FUNC_1(&VAR_1) * 1000000 + VAR_2 * 1000;
}
