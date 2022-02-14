
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mon; } ;


 struct tm* FUNC_0 (int *,struct tm*) ;

struct tm *FUNC_1(time_t VAR_0, struct tm *VAR_1)
{
    VAR_1 = FUNC_0(&VAR_0, VAR_1);

    VAR_1->tm_year += 1900;
    VAR_1->tm_mon += 1;

    return VAR_1;
}
