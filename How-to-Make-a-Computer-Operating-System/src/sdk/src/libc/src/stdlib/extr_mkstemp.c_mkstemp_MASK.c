
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int,int) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (char*) ;

int FUNC_3( char* VAR_7 ) {
    int VAR_8;
    char* VAR_9;
    int VAR_10;
    unsigned int VAR_11;

    VAR_9 = VAR_7 + FUNC_2( VAR_7 ) - 6;

    if ( VAR_9 < VAR_7 ) {
        VAR_6 = VAR_1;
        return -1;
    }

    for ( VAR_8 = 0; VAR_8 < 6; VAR_8++ ) {
        if ( VAR_9[ VAR_8 ] != 'X' ) {
            VAR_6 = VAR_1;
            return -1;
        }
    }

    for ( ;; ) {
        for ( VAR_8 = 0; VAR_8 < 6; VAR_8++ ) {
            int VAR_12;

            VAR_11 = FUNC_1();
            VAR_12 = ( VAR_11 >> ( VAR_8 * 5 ) ) & 0x1F;
            VAR_9[ VAR_8 ] = VAR_12 > 9 ? ( VAR_12 + 'a' - 10 ) : ( VAR_12 + '0' );
        }

        VAR_10 = FUNC_0( VAR_7, VAR_2 | VAR_5 | VAR_3 | VAR_4, 0600 );

        if ( ( VAR_10 >= 0 ) ||
             ( VAR_6 != VAR_0 ) ) {
            break;
        }
    }

    return VAR_10;
}
