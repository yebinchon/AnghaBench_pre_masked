
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char const*,char const*,int *) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*) ;

bool FUNC_4(const char *VAR_1, const char *VAR_2, char *VAR_3, int *VAR_4)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_2 != ((void*)0));
    FUNC_0(VAR_3 != ((void*)0));
    FUNC_0(VAR_4 != ((void*)0));

    const char *VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, ((void*)0));

    if (!VAR_5) {
        return 0;
    }

    FUNC_2(VAR_3, VAR_5, *VAR_4);
    *VAR_4 = FUNC_3(VAR_3) + 1;

    return 1;
}
