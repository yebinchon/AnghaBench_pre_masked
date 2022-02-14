
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm_t ;
typedef int time_t ;


 scalar_t__ FUNC_0 (int const,int *) ;

tm_t* FUNC_1( const time_t* VAR_0, tm_t* VAR_1 ) {
    if ( FUNC_0( *VAR_0, VAR_1 ) < 0 ) {
        return ((void*)0);
    }

    return VAR_1;
}
