
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OptionsContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (char*,char const*,char const) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (int *,char*,char const*,int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, const char *VAR_3, const char *VAR_4)
{
    OptionsContext *VAR_5 = VAR_2;
    int VAR_6;
    char *VAR_7 = FUNC_1("%s:%c", VAR_3 + 1, *VAR_3);
    if (!VAR_7)
        return FUNC_0(VAR_0);
    VAR_6 = FUNC_3(VAR_5, VAR_7, VAR_4, VAR_1);
    FUNC_2(VAR_7);
    return VAR_6;
}
