
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int FUNC_0 (char const*,char const*) ;

int FUNC_1( const char *VAR_1 )
{
    const char **VAR_2 = VAR_0;

    if( *VAR_2 == ((void*)0) )
        return( -2 );

    if( VAR_1 == ((void*)0) )
        return( -1 );

    while( *VAR_2 != ((void*)0) )
    {
        if( !FUNC_0( *VAR_2, VAR_1 ) )
            return( 0 );
        VAR_2++;
    }
    return( -1 );
}
