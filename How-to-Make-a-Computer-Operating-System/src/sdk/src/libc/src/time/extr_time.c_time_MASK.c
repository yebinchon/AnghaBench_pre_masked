
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int time_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

time_t FUNC_1( time_t* VAR_1 ) {
    int VAR_2;
    uint64_t VAR_3;

    VAR_2 = FUNC_0( VAR_0, ( int )&VAR_3 );

    if ( VAR_2 < 0 ) {
        VAR_3 = 0;
    } else {
        VAR_3 /= 1000000;
    }

    if ( VAR_1 != ((void*)0) ) {
        *VAR_1 = VAR_3;
    }

    return VAR_3;
}
