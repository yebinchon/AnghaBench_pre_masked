
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__,size_t) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,size_t) ;

char * FUNC_5( const char * VAR_0, const char * VAR_1, size_t VAR_2 )
{
    size_t VAR_3;
    char * VAR_4;

    VAR_3 = 0;
    if( VAR_0 )
        VAR_3 += FUNC_3( VAR_0 );
    if( VAR_1 )
        VAR_3 += FUNC_0( FUNC_3( VAR_1 ), VAR_2 );
    if( !VAR_3 )
        return ((void*)0);

    VAR_4 = FUNC_1( VAR_3 + 1 );
    if( !VAR_4 )
        return ((void*)0);

    if( VAR_0 )
        FUNC_2( VAR_4, VAR_0 );
    else
        FUNC_2( VAR_4, "" );

    if (VAR_1)
    {
        FUNC_4( VAR_4, VAR_1, VAR_2 );
    }

    return VAR_4;
}
