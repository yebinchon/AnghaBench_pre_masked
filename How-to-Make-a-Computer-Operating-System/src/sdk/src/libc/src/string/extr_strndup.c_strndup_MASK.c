
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (size_t,size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

char* FUNC_4( const char* VAR_0, size_t VAR_1 ) {
    char* VAR_2;
    size_t VAR_3;

    VAR_3 = FUNC_3( VAR_0 );
    VAR_3 = FUNC_0( VAR_3, VAR_1 );

    VAR_2 = ( char* )FUNC_1( VAR_3 + 1 );

    if ( VAR_2 == ((void*)0) ) {
        return ((void*)0);
    }

    FUNC_2( VAR_2, VAR_0, VAR_3 );
    VAR_2[ VAR_3 ] = '\0';

    return VAR_2;
}
