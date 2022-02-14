
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp_exec ;


 int VAR_0 ;
 int FUNC_0 (char const*,char* const*,int ) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char*,int,char*,char*,char const*) ;
 char* FUNC_4 (char*,char) ;
 size_t FUNC_5 (char*) ;

int FUNC_6( const char* VAR_1, char* const VAR_2[] ) {
    char* VAR_3;
    char* VAR_4;
    char VAR_5[ 128 ];
    char VAR_6[ 128 ];

    FUNC_0( VAR_1, VAR_2, VAR_0 );

    VAR_3 = FUNC_1( "PATH" );

    if ( VAR_3 == ((void*)0) ) {
        return -1;
    }

    do {
        VAR_4 = FUNC_4( VAR_3, ':' );

        if ( VAR_4 == ((void*)0) ) {
            FUNC_2( VAR_5, VAR_3, FUNC_5( VAR_3 ) + 1 );
        } else {
            size_t VAR_7 = ( VAR_4 - VAR_3 );

            FUNC_2( VAR_5, VAR_3, VAR_7 );
            VAR_5[ VAR_7 ] = 0;
        }

        FUNC_3( VAR_6, sizeof( VAR_6 ), "%s/%s", VAR_5, VAR_1 );
        FUNC_0( VAR_6, VAR_2, VAR_0 );

        VAR_3 = VAR_4 + 1;
    } while ( VAR_4 != ((void*)0) );

    return -1;
}
