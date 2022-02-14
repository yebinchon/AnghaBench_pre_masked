
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char const*) ;

char * FUNC_3(const char *VAR_0)
{
    int VAR_1, VAR_2;
    int VAR_3 = FUNC_2(VAR_0);
    int VAR_4 = 40;
    int VAR_5 = VAR_3 + VAR_4;
    char *VAR_6 = FUNC_0(VAR_5);

    for (VAR_1 = 0, VAR_2 = 0; VAR_1 < VAR_3; VAR_1++)
    {
        if (VAR_2 > VAR_5 - 8)
        {
            VAR_5 += VAR_4;
            char *VAR_7 = FUNC_1(VAR_6, VAR_5);
            if (VAR_7 == ((void*)0))
            {
                VAR_6[VAR_2] = 0;
                return VAR_6;
            }
            VAR_6 = VAR_7;
        }
        switch (VAR_0[VAR_1])
        {
            case '<':
                VAR_6[VAR_2++] = '&';
                VAR_6[VAR_2++] = 'l';
                VAR_6[VAR_2++] = 't';
                VAR_6[VAR_2++] = ';';
                break;
            case '>':
                VAR_6[VAR_2++] = '&';
                VAR_6[VAR_2++] = 'g';
                VAR_6[VAR_2++] = 't';
                VAR_6[VAR_2++] = ';';
                break;
            case '\'':
                VAR_6[VAR_2++] = '&';
                VAR_6[VAR_2++] = 'a';
                VAR_6[VAR_2++] = 'p';
                VAR_6[VAR_2++] = 'o';
                VAR_6[VAR_2++] = 's';
                VAR_6[VAR_2++] = ';';
                break;
            case '"':
                VAR_6[VAR_2++] = '&';
                VAR_6[VAR_2++] = 'q';
                VAR_6[VAR_2++] = 'u';
                VAR_6[VAR_2++] = 'o';
                VAR_6[VAR_2++] = 't';
                VAR_6[VAR_2++] = ';';
                break;
            case '&':
                VAR_6[VAR_2++] = '&';
                VAR_6[VAR_2++] = 'a';
                VAR_6[VAR_2++] = 'm';
                VAR_6[VAR_2++] = 'p';
                VAR_6[VAR_2++] = ';';
                break;
            default:
                VAR_6[VAR_2++] = VAR_0[VAR_1];
                break;
        }
        VAR_6[VAR_2] = 0;
    }
    return VAR_6;
}
