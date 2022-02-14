
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;
typedef int int32_t ;


 int FUNC_0 (int,int,int ) ;

__attribute__((used)) static int32_t FUNC_1(const struct tm *VAR_0)
{

    return (!((0) <= (VAR_0->tm_year) && (VAR_0->tm_year) <= (127 + 80)) ||
            !((0) <= (VAR_0->tm_mon) && (VAR_0->tm_mon) <= (11)) ||
            !((1) <= (VAR_0->tm_mday) && (VAR_0->tm_mday) <= (31)) ||
            !((0) <= (VAR_0->tm_hour) && (VAR_0->tm_hour) <= (23)) ||
            !((0) <= (VAR_0->tm_min) && (VAR_0->tm_min) <= (59)) ||
            !((0) <= (VAR_0->tm_sec) && (VAR_0->tm_sec) <= (59)));

}
