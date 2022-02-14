
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int AVFilterContext ;
typedef int AVBPrint ;


 int FUNC_0 (int *,char const*,struct tm*) ;
 struct tm* FUNC_1 (int *,struct tm*) ;
 int FUNC_2 (int *,struct tm*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_0, AVBPrint *VAR_1,
                         char *VAR_2, unsigned VAR_3, char **VAR_4, int VAR_5)
{
    const char *VAR_6 = VAR_3 ? VAR_4[0] : "%Y-%m-%d %H:%M:%S";
    time_t VAR_7;
    struct tm VAR_8;

    FUNC_3(&VAR_7);
    if (VAR_5 == 'L')
        FUNC_2(&VAR_7, &VAR_8);
    else
        VAR_8 = *FUNC_1(&VAR_7, &VAR_8);
    FUNC_0(VAR_1, VAR_6, &VAR_8);
    return 0;
}
