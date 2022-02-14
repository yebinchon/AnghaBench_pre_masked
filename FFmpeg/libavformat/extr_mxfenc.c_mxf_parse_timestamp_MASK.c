
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef int int64_t ;


 struct tm* FUNC_0 (int*,struct tm*) ;

__attribute__((used)) static uint64_t FUNC_1(int64_t VAR_0)
{
    time_t VAR_1 = VAR_0 / 1000000;
    struct tm VAR_2;
    struct tm *VAR_3 = FUNC_0(&VAR_1, &VAR_2);
    if (!VAR_3)
        return 0;
    return (uint64_t)(VAR_3->tm_year+1900) << 48 |
           (uint64_t)(VAR_3->tm_mon+1) << 40 |
           (uint64_t) VAR_3->tm_mday << 32 |
                      VAR_3->tm_hour << 24 |
                      VAR_3->tm_min << 16 |
                      VAR_3->tm_sec << 8 |
                      (VAR_0 % 1000000) / 4000;
}
