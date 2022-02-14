
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timespec {int tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;

int FUNC_1( const struct timespec* VAR_2, struct timespec* VAR_3 ) {
    int VAR_4;
    uint64_t VAR_5;
    uint64_t VAR_6;

    VAR_5 = ( uint64_t )VAR_2->tv_sec * 1000000 + ( uint64_t )VAR_2->tv_nsec / 1000;

    if ( VAR_5 == 0 ) {
        VAR_5 = 1;
    }

    VAR_4 = FUNC_0( VAR_0, ( int )&VAR_5, ( int )&VAR_6 );

    if ( VAR_4 < 0 ) {
        VAR_1 = -VAR_4;

        if ( VAR_3 != ((void*)0) ) {
            VAR_3->tv_sec = VAR_6 / 1000000;
            VAR_3->tv_nsec = ( VAR_6 % 1000000 ) * 1000;
        }

        return -1;
    }

    return 0;
}
