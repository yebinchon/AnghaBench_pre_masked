
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,char const*,char const*) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_5, const char *VAR_6, const char *VAR_7)
{
    if (!FUNC_2(VAR_7, "audio"))
        VAR_4 = VAR_1;
    else if (!FUNC_2(VAR_7, "video"))
        VAR_4 = VAR_3;
    else if (!FUNC_2(VAR_7, "ext"))
        VAR_4 = VAR_2;
    else {
        FUNC_0(((void*)0), VAR_0, "Unknown value for %s: %s\n", VAR_6, VAR_7);
        FUNC_1(1);
    }
    return 0;
}
