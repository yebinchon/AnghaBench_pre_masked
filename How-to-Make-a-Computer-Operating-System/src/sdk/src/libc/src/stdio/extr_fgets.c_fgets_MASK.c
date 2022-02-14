
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

char* FUNC_2( char* VAR_1, int VAR_2, FILE* VAR_3 ) {
    char* VAR_4 = VAR_1;
    int VAR_5;

    for ( VAR_5 = VAR_2; VAR_5 > 1; ) {
        register int VAR_6 = FUNC_1( VAR_3 );

        if ( VAR_6 == VAR_0 ) {
            break;
        }

        *VAR_1 = VAR_6;
        ++VAR_1;
        --VAR_5;

        if ( VAR_6 == '\n' ) {
            break;
        }
    }

    if ( ( VAR_5 == VAR_2 ) || ( FUNC_0( VAR_3 ) ) ) {
        return 0;
    }

    *VAR_1 = 0;

    return VAR_4;
}
