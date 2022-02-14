
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tm {int tm_year; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; scalar_t__ tm_mon; scalar_t__ tm_mday; } ;


 int FUNC_0 (struct tm*,struct tm const*,int) ;
 scalar_t__ FUNC_1 (struct tm*) ;

uint32_t FUNC_2(const struct tm *VAR_0)
{
    struct tm VAR_1;
    FUNC_0(&VAR_1, VAR_0, sizeof(struct tm));
    if (VAR_1.tm_year >= 1980)
        VAR_1.tm_year -= 1980;
    else if (VAR_1.tm_year >= 80)
        VAR_1.tm_year -= 80;
    else
        VAR_1.tm_year += 20;

    if (FUNC_1(&VAR_1))
        return 0;

    return (((uint32_t)VAR_1.tm_mday + (32 * ((uint32_t)VAR_1.tm_mon + 1)) + (512 * (uint32_t)VAR_1.tm_year)) << 16) |
        (((uint32_t)VAR_1.tm_sec / 2) + (32 * (uint32_t)VAR_1.tm_min) + (2048 * (uint32_t)VAR_1.tm_hour));
}
