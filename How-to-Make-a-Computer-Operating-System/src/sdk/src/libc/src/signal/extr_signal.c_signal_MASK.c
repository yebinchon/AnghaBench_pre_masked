
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_handler; int sa_flags; int sa_mask; } ;
typedef scalar_t__ sighandler_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,struct sigaction*,struct sigaction*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

sighandler_t FUNC_3( int VAR_5, sighandler_t VAR_6 ) {
    int VAR_7;
    struct sigaction VAR_8;
    struct sigaction VAR_9;

    if ( ( VAR_6 == VAR_2 ) ||
         ( VAR_5 < 0 ) ||
         ( VAR_5 >= VAR_3 ) ) {
        VAR_4 = -VAR_0;
        return VAR_2;
    }

    VAR_8.sa_handler = VAR_6;

    VAR_7 = FUNC_2( &VAR_8.sa_mask );

    if ( VAR_7 < 0 ) {
        return VAR_2;
    }

    VAR_7 = FUNC_1( &VAR_8.sa_mask, VAR_5 );

    if ( VAR_7 < 0 ) {
        return VAR_2;
    }

    VAR_8.sa_flags = VAR_1;

    if ( FUNC_0( VAR_5, &VAR_8, &VAR_9 ) < 0 ) {
        return VAR_2;
    }

    return VAR_9.sa_handler;
}
