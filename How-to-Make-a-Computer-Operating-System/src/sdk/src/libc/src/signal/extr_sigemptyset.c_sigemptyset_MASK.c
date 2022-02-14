
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sigset_t ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0( sigset_t* VAR_2 ) {
    if ( VAR_2 == ((void*)0) ) {
        VAR_1 = -VAR_0;
        return -1;
    }

    *VAR_2 = 0;

    return 0;
}
