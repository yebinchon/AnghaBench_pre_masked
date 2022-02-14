
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OptionsContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,char*) ;
 int VAR_2 ;
 int FUNC_4 (int *,char*,char const*,int ) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(void *VAR_3, const char *VAR_4, const char *VAR_5)
{
    OptionsContext *VAR_6 = VAR_3;
    char *VAR_7;
    int VAR_8;
    if(!FUNC_5(VAR_4, "qscale")){
        FUNC_3(((void*)0), VAR_0, "Please use -q:a or -q:v, -qscale is ambiguous\n");
        return FUNC_4(VAR_6, "q:v", VAR_5, VAR_2);
    }
    VAR_7 = FUNC_1("q%s", VAR_4 + 6);
    if (!VAR_7)
        return FUNC_0(VAR_1);
    VAR_8 = FUNC_4(VAR_6, VAR_7, VAR_5, VAR_2);
    FUNC_2(VAR_7);
    return VAR_8;
}
