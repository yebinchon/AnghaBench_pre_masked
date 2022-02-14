
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;

unsigned long long int FUNC_2( const char* VAR_4, char** VAR_5, int VAR_6 ) {
    int VAR_7 = 0, VAR_8 = 0;
    long long int VAR_9 = 0;
    const char* VAR_10;
    const char* VAR_11 = VAR_4;

    while ( FUNC_0( *VAR_11 ) ) {
        ++VAR_11;
    }

    if ( *VAR_11 == '-' ) {
        VAR_7=1;
        VAR_11++;
    } else if ( *VAR_11 == '+' ) {
        ++VAR_11;
    }

    VAR_10 = VAR_11;

    if ( ( VAR_6 == 16 ) && ( VAR_11[ 0 ] == '0' ) ) {
        goto skip0x;
    }

    if ( VAR_6 ) {
        register unsigned int VAR_12 = VAR_6 - 2;

        if ( VAR_12 > 34 ) {
            VAR_3 = VAR_0;
            return 0;
        }
    } else {
        if ( *VAR_11 == '0' ) {
            VAR_6 = 8;

skip0x:
            if ( ( ( *( VAR_11 + 1 ) == 'x' ) || ( *( VAR_11 + 1 ) == 'X' ) ) && FUNC_1( VAR_11[ 2 ] ) ) {
                VAR_11 += 2;
                VAR_6 = 16;
            }
        } else {
            VAR_6 = 10;
        }
    }

    while ( *VAR_11 ) {
        register unsigned char VAR_13 = *VAR_11;

        VAR_13 = ( VAR_13 >= 'a' ? VAR_13 - 'a' + 10 : VAR_13 >= 'A' ? VAR_13 - 'A' + 10 : VAR_13 <= '9' ? VAR_13 - '0' : 0xFF );

        if ( VAR_13 >= VAR_6 ) {
            break;
        }

        {
            register unsigned long VAR_14 = ( VAR_9 & 0xFF ) * VAR_6 + VAR_13;
            register unsigned long long VAR_15 = ( VAR_9 >> 8 ) * VAR_6 + ( VAR_14 >> 8 );

            if ( VAR_15 > ( VAR_2 >> 8 ) ) {
                VAR_8 = 1;
            }

            VAR_9 = ( VAR_15 << 8 ) + ( VAR_14 & 0xFF );
        }

        ++VAR_11;
    }

    if ( VAR_11 == VAR_10 ) {
        VAR_11 = VAR_4;
        VAR_3 = VAR_0;
        VAR_9 = 0;
    }

    if ( VAR_5 != ((void*)0) ) {
        *VAR_5 = (char *)VAR_11;
    }

    if ( VAR_8 ) {
        VAR_3 = VAR_1;
        return VAR_2;
    }

    return ( VAR_7 ? -VAR_9 : VAR_9 );
}
