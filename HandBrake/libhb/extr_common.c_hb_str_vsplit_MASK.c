
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int,int) ;
 char** FUNC_1 (int) ;
 char* FUNC_2 (char const*,char,char) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,char,int) ;

char** FUNC_5( const char *VAR_0, char VAR_1 )
{
    const char * VAR_2;
    const char * VAR_3;
    char ** VAR_4;
    int VAR_5, VAR_6;
    char VAR_7 = '"';

    if (VAR_1 == '"')
    {
        VAR_7 = '\'';
    }
    if ( VAR_0 == ((void*)0) || VAR_0[0] == 0 )
    {
        VAR_4 = FUNC_1( sizeof(char*) );
        if ( VAR_4 == ((void*)0) ) return VAR_4;
        *VAR_4 = ((void*)0);
        return VAR_4;
    }


    VAR_5 = 1;
    VAR_2 = VAR_0;
    while ( ( VAR_2 = FUNC_2( VAR_2, VAR_1, VAR_7 ) ) != ((void*)0) )
    {
        VAR_5++;
        VAR_2++;
    }

    VAR_4 = FUNC_0( ( VAR_5 + 1 ), sizeof(char*) );
    if ( VAR_4 == ((void*)0) ) return VAR_4;

    VAR_2 = VAR_0;
    for ( VAR_6 = 0; VAR_6 < VAR_5 - 1; VAR_6++ )
    {
        VAR_3 = FUNC_2( VAR_2, VAR_1, VAR_7 );
        VAR_4[VAR_6] = FUNC_4(VAR_2, VAR_7, VAR_3 - VAR_2);
        VAR_2 = VAR_3 + 1;
    }
    VAR_4[VAR_6] = FUNC_4(VAR_2, VAR_7, FUNC_3(VAR_2));

    return VAR_4;
}
