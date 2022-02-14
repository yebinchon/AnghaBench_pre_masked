
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; } ;
typedef int filename ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 struct tm* FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,char*) ;
 int FUNC_4 (char*,int,char*,int,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(void *VAR_2, const char *VAR_3, const char *VAR_4)
{
    char VAR_5[40];
    time_t VAR_6 = FUNC_6(((void*)0));
    struct tm *VAR_7 = FUNC_2(&VAR_6);

    if (!VAR_7) {
        FUNC_0(((void*)0), VAR_0, "Unable to get current time: %s\n", FUNC_5(VAR_1));
        FUNC_1(1);
    }

    FUNC_4(VAR_5, sizeof(VAR_5), "vstats_%02d%02d%02d.log", VAR_7->tm_hour, VAR_7->tm_min,
             VAR_7->tm_sec);
    return FUNC_3(((void*)0), VAR_3, VAR_5);
}
