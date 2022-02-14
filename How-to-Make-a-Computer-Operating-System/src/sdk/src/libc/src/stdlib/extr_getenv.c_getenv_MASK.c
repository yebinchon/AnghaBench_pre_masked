
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*,char const*,size_t) ;

char* FUNC_2( const char* VAR_1 ) {
 return ((void*)0);

    int VAR_2;
    size_t VAR_3;
    size_t VAR_4;

    VAR_4 = FUNC_0( VAR_1 );

    for ( VAR_2 = 0; VAR_0[ VAR_2 ] != ((void*)0); VAR_2++ ) {
        VAR_3 = FUNC_0( VAR_0[ VAR_2 ] );

        if ( VAR_3 < ( VAR_4 + 1 ) ) {
            continue;
        }

        if ( ( FUNC_1( VAR_0[ VAR_2 ], VAR_1, VAR_4 ) == 0 ) &&
             ( VAR_0[ VAR_2 ][ VAR_4 ] == '=' ) ) {
            return &VAR_0[ VAR_2 ][ VAR_4 + 1 ];
        }
    }

    return ((void*)0);
}
