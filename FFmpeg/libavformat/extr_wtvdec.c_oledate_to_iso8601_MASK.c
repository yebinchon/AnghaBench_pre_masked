
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double time_t ;
struct tm {int dummy; } ;
typedef int int64_t ;


 double FUNC_0 (int ) ;
 struct tm* FUNC_1 (double*,struct tm*) ;
 int FUNC_2 (char*,int,char*,struct tm*) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, int VAR_1, int64_t VAR_2)
{
    time_t VAR_3 = (FUNC_0(VAR_2) - 25569.0) * 86400;
    struct tm VAR_4;
    struct tm *VAR_5= FUNC_1(&VAR_3, &VAR_4);
    if (!VAR_5)
        return -1;
    if (!FUNC_2(VAR_0, VAR_1, "%Y-%m-%d %H:%M:%S", VAR_5))
        return -1;
    return 0;
}
