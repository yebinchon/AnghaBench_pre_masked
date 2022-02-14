
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,char const*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (char const*,char**,int) ;

int FUNC_4(void *VAR_1, const char *VAR_2, const char *VAR_3)
{
    char *VAR_4;
    size_t VAR_5;

    VAR_5 = FUNC_3(VAR_3, &VAR_4, 10);
    if (*VAR_4) {
        FUNC_0(((void*)0), VAR_0, "Invalid max_alloc \"%s\".\n", VAR_3);
        FUNC_2(1);
    }
    FUNC_1(VAR_5);
    return 0;
}
