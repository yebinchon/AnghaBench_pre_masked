
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*,void const*) ;

void* FUNC_1( const void* VAR_0, const void* VAR_1, size_t VAR_2, size_t VAR_3, int ( *VAR_4 )( const void*, const void* ) ) {
    size_t VAR_5;

    while ( VAR_2 ) {
        int VAR_6;
        void* VAR_7;

        VAR_5 = VAR_2 / 2;
        VAR_7 = ( void* )( ( ( const char* )VAR_1 ) + ( VAR_5 * VAR_3 ) );

        if ( ( VAR_6 = ( *VAR_4 )( VAR_0, VAR_7 ) ) < 0 ) {
            VAR_2 = VAR_5;
        } else if ( VAR_6 > 0 ) {
            VAR_1 = VAR_7 + VAR_3;
            VAR_2 -= VAR_5 + 1;
        } else {
          return VAR_7;
        }
    }

    return ((void*)0);
}
