
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int,int) ;

int FUNC_1( sigset_t* VAR_2 ) {
    if ( VAR_2 == ((void*)0) ) {
        VAR_1 = -VAR_0;
        return -1;
    }

    FUNC_0( ( void* )VAR_2, 0xFF, sizeof( sigset_t ) );

    return 0;
}
