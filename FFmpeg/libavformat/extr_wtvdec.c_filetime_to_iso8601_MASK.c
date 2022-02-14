
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long time_t ;
struct tm {int dummy; } ;
typedef long long int64_t ;


 struct tm* FUNC_0 (long long*,struct tm*) ;
 int FUNC_1 (char*,int,char*,struct tm*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, int VAR_1, int64_t VAR_2)
{
    time_t VAR_3 = (VAR_2 / 10000000LL) - 11644473600LL;
    struct tm VAR_4;
    struct tm *VAR_5 = FUNC_0(&VAR_3, &VAR_4);
    if (!VAR_5)
        return -1;
    if (!FUNC_1(VAR_0, VAR_1, "%Y-%m-%d %H:%M:%S", VAR_5))
        return -1;
    return 0;
}
