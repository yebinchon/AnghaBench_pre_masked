
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int int64_t ;


 int FUNC_0 () ;
 struct tm* FUNC_1 (int const*,struct tm*) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*,int,char*,struct tm*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(char *VAR_0, int VAR_1)
{
    struct tm *VAR_2, VAR_3;
    int64_t VAR_4 = FUNC_0();
    int64_t VAR_5 = VAR_4 / 1000;
    const time_t VAR_6 = VAR_5 / 1000;
    int VAR_7 = VAR_5 - (VAR_6 * 1000);
    VAR_2 = FUNC_1(&VAR_6, &VAR_3);
    if (VAR_2) {
        int VAR_8;
        if (!FUNC_3(VAR_0, VAR_1, "%Y-%m-%dT%H:%M:%S", VAR_2)) {
            VAR_0[0] = '\0';
            return;
        }
        VAR_8 = FUNC_4(VAR_0);
        FUNC_2(VAR_0 + VAR_8, VAR_1 - VAR_8, ".%03dZ", VAR_7);
    }
}
