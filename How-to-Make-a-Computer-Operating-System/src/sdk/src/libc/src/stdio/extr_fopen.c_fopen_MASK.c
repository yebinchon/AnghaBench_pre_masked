
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (int,int,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int,int) ;

FILE* FUNC_3( const char* VAR_0, const char* VAR_1 ) {
    int VAR_2;
    int VAR_3;

    VAR_3 = FUNC_1( VAR_1 );

    VAR_2 = FUNC_2( VAR_0, VAR_3, 0666 );

    if ( VAR_2 < 0 ) {
        return ((void*)0);
    }

    return FUNC_0( VAR_2, 1, VAR_3 );
}
