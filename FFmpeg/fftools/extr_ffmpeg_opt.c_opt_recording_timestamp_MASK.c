
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int int64_t ;
typedef int buf ;
typedef int OptionsContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,char const*) ;
 struct tm* FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,char*,int ) ;
 int FUNC_3 (char const*,char const*,int ) ;
 int FUNC_4 (char*,int,char*,struct tm*) ;

__attribute__((used)) static int FUNC_5(void *VAR_2, const char *VAR_3, const char *VAR_4)
{
    OptionsContext *VAR_5 = VAR_2;
    char VAR_6[128];
    int64_t VAR_7 = FUNC_3(VAR_3, VAR_4, 0) / 1E6;
    struct tm VAR_8 = *FUNC_1((time_t*)&VAR_7);
    if (!FUNC_4(VAR_6, sizeof(VAR_6), "creation_time=%Y-%m-%dT%H:%M:%S%z", &VAR_8))
        return -1;
    FUNC_2(VAR_5, "metadata", VAR_6, VAR_1);

    FUNC_0(((void*)0), VAR_0, "%s is deprecated, set the 'creation_time' metadata "
                                 "tag instead.\n", VAR_3);
    return 0;
}
