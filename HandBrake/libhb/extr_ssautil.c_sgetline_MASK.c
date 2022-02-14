
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static char * FUNC_3(char * VAR_0)
{
    char * VAR_1;

    if (VAR_0 == ((void*)0))
    {
        return ((void*)0);
    }


    VAR_1 = FUNC_1(VAR_0, '\n');
    if (VAR_1 != ((void*)0))
    {
        if (VAR_1 > VAR_0 && *(VAR_1 - 1) == '\r')
        {
            VAR_1--;
        }
    }
    if (VAR_1 != ((void*)0))
    {
        return FUNC_0(VAR_0, VAR_1 - VAR_0);
    }
    else
    {
        return FUNC_2(VAR_0);
    }
}
