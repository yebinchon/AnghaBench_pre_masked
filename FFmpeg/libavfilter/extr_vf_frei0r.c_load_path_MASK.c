
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (char*,char const*,char const*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,char*,char*) ;
 void* FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_5, void **VAR_6, const char *VAR_7, const char *VAR_8)
{
    char *VAR_9 = FUNC_1("%s%s%s", VAR_7, VAR_8, VAR_4);
    if (!VAR_9)
        return FUNC_0(VAR_1);
    FUNC_3(VAR_5, VAR_0, "Looking for frei0r effect in '%s'.\n", VAR_9);
    *VAR_6 = FUNC_4(VAR_9, VAR_3|VAR_2);
    FUNC_2(VAR_9);
    return 0;
}
