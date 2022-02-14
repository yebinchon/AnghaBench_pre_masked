
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int,int) ;
 char** FUNC_1 (int) ;
 char* FUNC_2 (char const*,int) ;
 char* FUNC_3 (char const*,char const*,char) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static char** FUNC_5( const char *VAR_0, int VAR_1 )
{
    const char * VAR_2;
    const char * VAR_3;
    char ** VAR_4;
    int VAR_5, VAR_6;
    int VAR_7;
    char VAR_8 = ' ';

    if ( VAR_0 == ((void*)0) || VAR_0[0] == 0 )
    {
        VAR_4 = FUNC_1( sizeof(char*) );
        if ( VAR_4 == ((void*)0) ) return VAR_4;
        *VAR_4 = ((void*)0);
        return VAR_4;
    }

    VAR_7 = FUNC_4(VAR_0);


    VAR_5 = 1;
    VAR_2 = VAR_0;
    VAR_3 = VAR_2 + VAR_1;
    while (VAR_3 < VAR_0 + VAR_7)
    {
        VAR_3 = FUNC_3(VAR_2, VAR_3, VAR_8);
        if (VAR_3 == VAR_2)
        {

            break;
        }
        VAR_5++;
        VAR_2 = VAR_3 + 1;
        VAR_3 = VAR_2 + VAR_1;
    }
    VAR_5++;
    VAR_4 = FUNC_0( ( VAR_5 + 1 ), sizeof(char*) );
    if ( VAR_4 == ((void*)0) ) return VAR_4;

    VAR_2 = VAR_0;
    VAR_3 = VAR_2 + VAR_1;
    for (VAR_6 = 0; VAR_6 < VAR_5 - 1 && VAR_3 < VAR_0 + VAR_7; VAR_6++)
    {
        VAR_3 = FUNC_3(VAR_2, VAR_3, VAR_8);
        if (VAR_3 == VAR_2)
        {
            break;
        }
        VAR_4[VAR_6] = FUNC_2(VAR_2, VAR_3 - VAR_2);
        VAR_2 = VAR_3 + 1;
        VAR_3 = VAR_2 + VAR_1;
    }
    if (*VAR_2 != 0 && VAR_6 < VAR_5 - 1)
    {
        VAR_4[VAR_6] = FUNC_2(VAR_2, VAR_1);
    }

    return VAR_4;
}
