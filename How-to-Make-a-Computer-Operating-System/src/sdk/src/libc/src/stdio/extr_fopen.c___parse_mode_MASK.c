
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_0( const char* VAR_6 ) {
    int VAR_7 = 0;

    for ( ;; ) {
        switch ( *VAR_6 ) {
            case 0 : return VAR_7;
            case 'b': break;
            case 'r': VAR_7 = VAR_2; break;
            case 'w': VAR_7 = VAR_5 | VAR_1 | VAR_4; break;
            case 'a': VAR_7 = VAR_5 | VAR_1 | VAR_0; break;
            case '+': VAR_7 = ( VAR_7 & ( ~VAR_5 ) ) | VAR_3; break;
            default : break;
        }

        ++VAR_6;
    }
}
