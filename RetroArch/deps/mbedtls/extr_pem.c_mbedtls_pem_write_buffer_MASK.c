
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,size_t,size_t*,unsigned char const*,size_t) ;
 scalar_t__ FUNC_1 (int,size_t) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*,...) ;
 size_t FUNC_4 (char const*) ;

int FUNC_5( const char *VAR_2, const char *VAR_3,
                      const unsigned char *VAR_4, size_t VAR_5,
                      unsigned char *VAR_6, size_t VAR_7, size_t *VAR_8 )
{
    int VAR_9;
    unsigned char *VAR_10, *VAR_11, *VAR_12 = VAR_6;
    size_t VAR_13 = 0, VAR_14, VAR_15 = 0;

    FUNC_0( ((void*)0), 0, &VAR_14, VAR_4, VAR_5 );
    VAR_15 = FUNC_4( VAR_2 ) + FUNC_4( VAR_3 ) + ( VAR_14 / 64 ) + 1;

    if( VAR_14 + VAR_15 > VAR_7 )
    {
        *VAR_8 = VAR_14 + VAR_15;
        return( VAR_0 );
    }

    if( ( VAR_10 = (unsigned char*)FUNC_1( 1, VAR_14 ) ) == ((void*)0) )
        return( VAR_1 );

    if( ( VAR_9 = FUNC_0( VAR_10, VAR_14, &VAR_14, VAR_4,
                               VAR_5 ) ) != 0 )
    {
        FUNC_2( VAR_10 );
        return( VAR_9 );
    }

    FUNC_3( VAR_12, VAR_2, FUNC_4( VAR_2 ) );
    VAR_12 += FUNC_4( VAR_2 );
    VAR_11 = VAR_10;

    while( VAR_14 )
    {
        VAR_13 = ( VAR_14 > 64 ) ? 64 : VAR_14;
        FUNC_3( VAR_12, VAR_11, VAR_13 );
        VAR_14 -= VAR_13;
        VAR_12 += VAR_13;
        VAR_11 += VAR_13;
        *VAR_12++ = '\n';
    }

    FUNC_3( VAR_12, VAR_3, FUNC_4( VAR_3 ) );
    VAR_12 += FUNC_4( VAR_3 );

    *VAR_12++ = '\0';
    *VAR_8 = VAR_12 - VAR_6;

    FUNC_2( VAR_10 );
    return( 0 );
}
