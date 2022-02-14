
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef void* uint16_t ;
struct tm {int tm_isdst; void* tm_sec; void* tm_min; void* tm_hour; void* tm_year; void* tm_mon; void* tm_mday; } ;



__attribute__((used)) static void FUNC_0(uint64_t VAR_0, struct tm *VAR_1)
{
    uint64_t VAR_2 = (uint64_t)(VAR_0 >> 16);

    VAR_1->tm_mday = (uint16_t)(VAR_2 & 0x1f);
    VAR_1->tm_mon = (uint16_t)(((VAR_2 & 0x1E0) / 0x20) - 1);
    VAR_1->tm_year = (uint16_t)(((VAR_2 & 0x0FE00) / 0x0200) + 80);
    VAR_1->tm_hour = (uint16_t)((VAR_0 & 0xF800) / 0x800);
    VAR_1->tm_min = (uint16_t)((VAR_0 & 0x7E0) / 0x20);
    VAR_1->tm_sec = (uint16_t)(2 * (VAR_0 & 0x1f));
    VAR_1->tm_isdst = -1;
}
