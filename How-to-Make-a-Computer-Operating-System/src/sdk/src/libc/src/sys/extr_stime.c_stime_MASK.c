
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

int FUNC_1( time_t *VAR_2 ) {
    int VAR_3;

    VAR_3 = FUNC_0( VAR_0, ( int )VAR_2 );

    if ( VAR_3 < 0 ) {
        VAR_1 = -VAR_3;
        return -1;
    }

    return 0;
}
