
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;

long FUNC_1( FILE* VAR_3 ) {
    off_t VAR_4;

    VAR_4 = FUNC_0( VAR_3 );

    if ( VAR_4 > VAR_1 ) {
        VAR_2 = VAR_0;
        return -1;
    }

    return ( long )VAR_4;
}
