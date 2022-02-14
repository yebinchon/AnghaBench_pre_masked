
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; scalar_t__ tm_sec; } ;



time_t FUNC_0(struct tm *VAR_0)
{
    time_t VAR_1;

    int VAR_2 = VAR_0->tm_year + 1900, VAR_3 = VAR_0->tm_mon + 1, VAR_4 = VAR_0->tm_mday;

    if (VAR_3 < 3) {
        VAR_3 += 12;
        VAR_2--;
    }

    VAR_1 = 86400LL *
        (VAR_4 + (153 * VAR_3 - 457) / 5 + 365 * VAR_2 + VAR_2 / 4 - VAR_2 / 100 + VAR_2 / 400 - 719469);

    VAR_1 += 3600 * VAR_0->tm_hour + 60 * VAR_0->tm_min + VAR_0->tm_sec;

    return VAR_1;
}
