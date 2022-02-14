
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timezone {int dummy; } ;
struct timeval {int tv_sec; int tv_usec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

int FUNC_1( struct timeval* VAR_1, struct timezone* VAR_2 ) {
    int VAR_3;
    uint64_t VAR_4;

    VAR_3 = FUNC_0( VAR_0, ( int )&VAR_4 );

    if ( VAR_3 >= 0 ) {
        if ( VAR_1 != ((void*)0) ) {
            VAR_1->tv_sec = VAR_4 / 1000000;
            VAR_1->tv_usec = VAR_4 % 1000000;
        }
    }

    return VAR_3;
}
