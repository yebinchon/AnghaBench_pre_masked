
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,char*,char const*,char const*) ;
 int FUNC_4 (void*,char const*,char*) ;

__attribute__((used)) static int FUNC_5(void *VAR_2, const char *VAR_3, const char *VAR_4)
{
    char *VAR_5 = FUNC_1("format=%s", VAR_4);
    int VAR_6;

    if (!VAR_5)
        return FUNC_0(VAR_1);

    FUNC_3(((void*)0), VAR_0,
           "Option '%s' is deprecated, use '-show_entries format=%s' instead\n",
           VAR_3, VAR_4);
    VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_5);
    FUNC_2(VAR_5);
    return VAR_6;
}
