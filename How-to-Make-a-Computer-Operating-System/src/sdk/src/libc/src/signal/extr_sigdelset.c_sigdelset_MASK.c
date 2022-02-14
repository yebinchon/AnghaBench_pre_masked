
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0( sigset_t* VAR_3, int VAR_4 ) {
    if ( ( VAR_3 == ((void*)0) ) ||
         ( VAR_4 < 1 ) ||
         ( VAR_4 >= VAR_1 ) ) {
        VAR_2 = -VAR_0;
        return -1;
    }

    *VAR_3 &= ~( 1ULL << ( VAR_4 - 1 ) );

    return 0;
}
