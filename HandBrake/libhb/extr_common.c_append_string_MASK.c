
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static char * FUNC_3(char * VAR_0, const char * VAR_1)
{
    int VAR_2 = 0, VAR_3, VAR_4;

    if (VAR_1 == ((void*)0))
    {
        return VAR_0;
    }

    VAR_3 = VAR_4 = FUNC_2(VAR_1) + 1;
    if (VAR_0 != ((void*)0))
    {
        VAR_2 = FUNC_2(VAR_0);
        VAR_4 += VAR_2;
    }
    char * VAR_5 = FUNC_1(VAR_0, VAR_4);
    if (VAR_5 == ((void*)0))
    {

        return VAR_0;
    }
    VAR_0 = VAR_5;
    FUNC_0(VAR_0 + VAR_2, VAR_1, VAR_3);
    return VAR_0;
}
