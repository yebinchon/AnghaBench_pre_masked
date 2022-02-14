
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int int64_t ;
typedef int buf ;
typedef int AVDictionary ;


 int VAR_0 ;
 int FUNC_0 (int **,char const*,char*,int ) ;
 int FUNC_1 (char*,int,char*,int) ;
 struct tm* FUNC_2 (int*,struct tm*) ;
 int FUNC_3 (char*,int,char*,struct tm*) ;

int FUNC_4(AVDictionary **VAR_1, const char *VAR_2, int64_t VAR_3)
{
    time_t VAR_4 = VAR_3 / 1000000;
    struct tm *VAR_5, VAR_6;
    VAR_5 = FUNC_2(&VAR_4, &VAR_6);
    if (VAR_5) {
        char VAR_7[32];
        if (!FUNC_3(VAR_7, sizeof(VAR_7), "%Y-%m-%dT%H:%M:%S", VAR_5))
            return VAR_0;
        FUNC_1(VAR_7, sizeof(VAR_7), ".%06dZ", (int)(VAR_3 % 1000000));
        return FUNC_0(VAR_1, VAR_2, VAR_7, 0);
    } else {
        return VAR_0;
    }
}
