
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;

unsigned long int FUNC_2( const char* VAR_1, char** VAR_2, int VAR_3 ) {
    int VAR_4 = 0, VAR_5 = 0;
    unsigned long int VAR_6=0;
    const char* VAR_7;
    const char* VAR_8 = VAR_1;

    while ( FUNC_0( *VAR_8 ) ) {
        ++VAR_8;
    }

    if ( *VAR_8 == '-') {
        VAR_4 = 1;
        VAR_8++;
    } else if ( *VAR_8 == '+' ) {
        ++VAR_8;
    }

    VAR_7 = VAR_8;

    if ( ( VAR_3 == 16 ) && ( VAR_8[ 0 ] == '0' ) ) {
        goto skip0x;
    }

    if ( VAR_3 ) {
        register unsigned int VAR_9 = VAR_3 - 2;

        if ( VAR_9 > 34 ) {
            return 0;
        }
    } else {
        if ( *VAR_8 == '0' ) {
            VAR_3 = 8;

skip0x:
            if ( ( VAR_8[ 1 ] == 'x' || VAR_8[ 1 ] == 'X' ) && FUNC_1( VAR_8[ 2 ] ) ) {
                VAR_8 += 2;
                VAR_3 = 16;
            }
        } else {
            VAR_3 = 10;
        }
    }

    while ( *VAR_8 ) {
        register unsigned char VAR_10 = *VAR_8;

        VAR_10 = ( VAR_10 >= 'a' ? VAR_10 - 'a' + 10 : VAR_10 >= 'A' ? VAR_10 - 'A' + 10 : VAR_10 <= '9' ? VAR_10 - '0' : 0xFF );

        if ( VAR_10 >= VAR_3 ) break;

        {
            register unsigned long VAR_11=(VAR_6&0xff)*VAR_3+VAR_10;
            register unsigned long VAR_12=(VAR_6>>8)*VAR_3+(VAR_11>>8);

            if ( VAR_12 > ( VAR_0 >> 8 ) ) {
                VAR_5 = 1;
            }

            VAR_6 = ( VAR_12 << 8 ) + ( VAR_11 & 0xFF );
        }

        ++VAR_8;
    }

    if ( VAR_8 == VAR_7 ) {
        VAR_8 = VAR_1;
        VAR_6 = 0;
    }

    if ( VAR_2 != ((void*)0) ) {
        *VAR_2 = ( char* )VAR_8;
    }

    if ( VAR_5 ) {
        return VAR_0;
    }

    return ( VAR_4 ? -VAR_6 : VAR_6 );
}
