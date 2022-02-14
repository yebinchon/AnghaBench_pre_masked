
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_hour; int tm_min; int tm_sec; scalar_t__ tm_mday; scalar_t__ tm_mon; } ;
typedef int WORD ;
typedef int DWORD ;


 int FUNC_0 (int *,struct tm*) ;
 int FUNC_1 (int *) ;

DWORD FUNC_2(void)
{
    time_t VAR_0 = FUNC_1(((void*)0));
    struct tm VAR_1;
    FUNC_0(&VAR_0, &VAR_1);
    int VAR_2 = VAR_1.tm_year < 80 ? 0 : VAR_1.tm_year - 80;
    return ((DWORD)(VAR_2) << 25)
            | ((DWORD)(VAR_1.tm_mon + 1) << 21)
            | ((DWORD)VAR_1.tm_mday << 16)
            | (WORD)(VAR_1.tm_hour << 11)
            | (WORD)(VAR_1.tm_min << 5)
            | (WORD)(VAR_1.tm_sec >> 1);
}
