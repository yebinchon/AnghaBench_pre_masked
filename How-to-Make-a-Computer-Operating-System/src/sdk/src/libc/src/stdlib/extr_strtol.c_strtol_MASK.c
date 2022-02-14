
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 unsigned long FUNC_2 (char const*,char**,int) ;

long int FUNC_3( const char* VAR_3, char** VAR_4, int VAR_5 ) {
    int VAR_6 = 0;
    unsigned long int VAR_7;
    const char* VAR_8 = VAR_3;

    while ( FUNC_1( *VAR_3 ) ) {
        VAR_3++;
    }

    if ( ( *VAR_3 == '-' ) && ( FUNC_0( VAR_3[ 1 ] ) ) ) {
        VAR_6 = -1;
        ++VAR_3;
    }

    VAR_7 = FUNC_2( VAR_3, VAR_4, VAR_5 );

    if ( ( VAR_4 ) && ( *VAR_4 == VAR_3) ) {
        *VAR_4 = ( char* )VAR_8;
    }

    if ( VAR_7 >= VAR_0 ) {
        if ( ( VAR_7 == VAR_0 ) && ( VAR_6 ) ) {
            return VAR_7;
        }

        return ( VAR_6 ? VAR_2 : VAR_1 );
    }

    return ( VAR_6 ? -VAR_7 : VAR_7 );
}
