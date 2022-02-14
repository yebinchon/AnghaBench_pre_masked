
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

size_t FUNC_1( const char* VAR_0, const char* VAR_1 ) {
    size_t VAR_2 = 0;
    int VAR_3 = 1;
    int VAR_4;
    int VAR_5 = FUNC_0( VAR_1 );

    while ( ( VAR_3 ) && ( *VAR_0 ) ) {
        for ( VAR_4 = 0; ( VAR_3 ) && ( VAR_4 < VAR_5 ); VAR_4++ ) {
            if ( *VAR_0 == VAR_1[ VAR_4 ] ) {
                VAR_3 = 0;
            }
        }

        if ( VAR_3 ) {
            VAR_2++;
        }

        VAR_0++;
    }

    return VAR_2;
}
