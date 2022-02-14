
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int buf ;
typedef int AVBPrint ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *,struct tm*) ;
 scalar_t__ FUNC_2 (char*,int,char const*,struct tm*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVBPrint *VAR_0, const char *VAR_1, const char *VAR_2)
{
    char VAR_3[16] = {0};
    time_t VAR_4 = FUNC_3(0);
    struct tm VAR_5;

    FUNC_1(&VAR_4, &VAR_5);
    if (FUNC_2(VAR_3, sizeof(VAR_3), VAR_2, &VAR_5))
        FUNC_0(VAR_0, "%s", VAR_3);
    return 0;
}
