
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const char *VAR_1, int VAR_2)
{
    char *VAR_3 = FUNC_1(VAR_2 + 1);
    if (VAR_3) {
        FUNC_2(VAR_3, VAR_1, VAR_2);
        VAR_3[VAR_2] = 0;
        if (*(void **)VAR_0)
            FUNC_0(*(void **)VAR_0);
        *(char **)VAR_0 = VAR_3;
    }
    return !VAR_3;
}
