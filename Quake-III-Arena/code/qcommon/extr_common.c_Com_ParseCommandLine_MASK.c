
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 char** VAR_1 ;
 size_t VAR_2 ;

void FUNC_0( char *VAR_3 ) {
    int VAR_4 = 0;
    VAR_1[0] = VAR_3;
    VAR_2 = 1;

    while ( *VAR_3 ) {
        if (*VAR_3 == '"') {
            VAR_4 = !VAR_4;
        }


        if ( (*VAR_3 == '+' && !VAR_4) || *VAR_3 == '\n' || *VAR_3 == '\r' ) {
            if ( VAR_2 == VAR_0 ) {
                return;
            }
            VAR_1[VAR_2] = VAR_3 + 1;
            VAR_2++;
            *VAR_3 = 0;
        }
        VAR_3++;
    }
}
