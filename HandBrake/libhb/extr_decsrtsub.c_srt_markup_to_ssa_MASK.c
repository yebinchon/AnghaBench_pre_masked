
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int *,int) ;

__attribute__((used)) static char* FUNC_6(char *VAR_0, int *VAR_1)
{
    char VAR_2;
    char VAR_3[40];
    uint32_t VAR_4;

    *VAR_1 = 0;
    if (VAR_0[0] != '<' && VAR_0[0] != '{')
        return ((void*)0);

    if (VAR_0[0] == '<')
        VAR_2 = '>';
    else
        VAR_2 = '}';

    if (VAR_0[1] == 'i' && VAR_0[2] == VAR_2)
    {
        *VAR_1 = 3;
        return FUNC_2("{\\i1}");
    }
    else if (VAR_0[1] == 'b' && VAR_0[2] == VAR_2)
    {
        *VAR_1 = 3;
        return FUNC_2("{\\b1}");
    }
    else if (VAR_0[1] == 'u' && VAR_0[2] == VAR_2)
    {
        *VAR_1 = 3;
        return FUNC_2("{\\u1}");
    }
    else if (VAR_0[1] == '/' && VAR_0[2] == 'i' && VAR_0[3] == VAR_2)
    {
        *VAR_1 = 4;
        return FUNC_2("{\\i0}");
    }
    else if (VAR_0[1] == '/' && VAR_0[2] == 'b' && VAR_0[3] == VAR_2)
    {
        *VAR_1 = 4;
        return FUNC_2("{\\b0}");
    }
    else if (VAR_0[1] == '/' && VAR_0[2] == 'u' && VAR_0[3] == VAR_2)
    {
        *VAR_1 = 4;
        return FUNC_2("{\\u0}");
    }
    else if (VAR_0[0] == '<' && !FUNC_4(VAR_0 + 1, "font", 4))
    {
        int VAR_5;
        VAR_5 = FUNC_3(VAR_0 + 1, "font color=\"%39[^\"]\">", VAR_3);
        if (VAR_5 != 1)
        {
            return ((void*)0);
        }
        while (VAR_0[*VAR_1] != '>') (*VAR_1)++;
        (*VAR_1)++;
        if (VAR_3[0] == '#')
            VAR_4 = FUNC_5(VAR_3 + 1, ((void*)0), 16);
        else
            VAR_4 = FUNC_1(VAR_3);
        return FUNC_2("{\\1c&H%X&}", FUNC_0(VAR_4));
    }
    else if (VAR_0[0] == '<' && VAR_0[1] == '/' && !FUNC_4(VAR_0 + 2, "font", 4) &&
             VAR_0[6] == '>')
    {
        *VAR_1 = 7;
        return FUNC_2("{\\1c&HFFFFFF&}");
    }

    return ((void*)0);
}
