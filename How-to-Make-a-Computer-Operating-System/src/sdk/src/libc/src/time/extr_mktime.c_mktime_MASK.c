
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tm_year; int tm_hour; int tm_min; int tm_sec; int tm_mday; int tm_mon; } ;
typedef TYPE_1__ tm_t ;
typedef int time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ) ;

time_t FUNC_1( tm_t* VAR_3 ) {
    if ( VAR_3->tm_year > 2100 ) {
        return -1;
    }

    return FUNC_0( VAR_3->tm_year, VAR_3->tm_mon, VAR_3->tm_mday ) * VAR_0 +
           VAR_3->tm_hour * VAR_1 + VAR_3->tm_min * VAR_2 + VAR_3->tm_sec;
}
