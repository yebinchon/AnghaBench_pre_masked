
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (unsigned char*,int,size_t,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 long FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,size_t) ;
 int FUNC_6 (unsigned char*) ;
 int * FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8( const char *VAR_4, unsigned char **VAR_5, size_t *VAR_6 )
{
    FILE *VAR_7;
    long VAR_8;

    if( ( VAR_7 = FUNC_1( VAR_4, "rb" ) ) == ((void*)0) )
        return( VAR_1 );

    FUNC_3( VAR_7, 0, VAR_2 );
    if( ( VAR_8 = FUNC_4( VAR_7 ) ) == -1 )
    {
        FUNC_0( VAR_7 );
        return( VAR_1 );
    }
    FUNC_3( VAR_7, 0, VAR_3 );

    *VAR_6 = (size_t) VAR_8;

    if( *VAR_6 + 1 == 0 ||
        ( *VAR_5 = (unsigned char*)FUNC_5( 1, *VAR_6 + 1 ) ) == ((void*)0) )
    {
        FUNC_0( VAR_7 );
        return( VAR_0 );
    }

    if( FUNC_2( *VAR_5, 1, *VAR_6, VAR_7 ) != *VAR_6 )
    {
        FUNC_0( VAR_7 );
        FUNC_6( *VAR_5 );
        return( VAR_1 );
    }

    FUNC_0( VAR_7 );

    (*VAR_5)[*VAR_6] = '\0';

    if( FUNC_7( (const char *) *VAR_5, "-----BEGIN " ) != ((void*)0) )
        ++*VAR_6;

    return( 0 );
}
