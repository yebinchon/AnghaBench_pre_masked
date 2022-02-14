
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_year; int tm_yday; int tm_mon; int tm_mday; int tm_isdst; } ;
typedef TYPE_1__ tm_t ;
typedef int time_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;

int FUNC_0( time_t VAR_7, tm_t* VAR_8 ) {
    int VAR_9;

    VAR_8->tm_sec = VAR_7 % VAR_3;
    VAR_7 /= VAR_3;
    VAR_8->tm_min = VAR_7 % VAR_2;
    VAR_7 /= VAR_2;
    VAR_8->tm_hour = VAR_7 % VAR_1;
    VAR_7 /= VAR_1;






    VAR_8->tm_wday = (4 + VAR_7) % 7;


    VAR_8->tm_year = VAR_0;

    for ( VAR_9 = 0; VAR_9 < 60; VAR_9++ ) {
        if ( VAR_6[ VAR_9 ] > VAR_7 ) {
            VAR_8->tm_year = VAR_0 + VAR_9 - 1;
            VAR_7 -= VAR_6[ VAR_9 - 1 ];

            break;
        }
    }

    VAR_8->tm_yday = ( int )VAR_7;

    if ( VAR_8->tm_year % 4 == 0 ) {
        for ( VAR_8->tm_mon = 0; VAR_8->tm_mon < 12; VAR_8->tm_mon++ ) {
            if ( VAR_5[ VAR_8->tm_mon ] > VAR_7 ) {
                VAR_7 -= VAR_5[ --VAR_8->tm_mon ];
                break;
            }
        }
    } else {
        for ( VAR_8->tm_mon = 0; VAR_8->tm_mon < 12; VAR_8->tm_mon++ ) {
            if ( VAR_4[ VAR_8->tm_mon ] > VAR_7 ) {
                VAR_7 -= VAR_4[ --VAR_8->tm_mon ];
                break;
            }
        }
    }

    VAR_8->tm_mday = ( int )VAR_7 + 1;
    VAR_8->tm_isdst = -1;

    return 0;
}
