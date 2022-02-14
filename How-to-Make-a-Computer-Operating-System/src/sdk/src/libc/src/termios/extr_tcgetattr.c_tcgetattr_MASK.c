
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,struct termios*) ;

int FUNC_1( int VAR_3, struct termios* VAR_4 ) {
    int VAR_5;

    if ( VAR_4 == ((void*)0) ) {
        VAR_2 = VAR_0;
        return -1;
    }

    VAR_5 = FUNC_0( VAR_3, VAR_1, VAR_4 );

    if ( VAR_5 < 0 ) {
        VAR_2 = -VAR_5;
        return -1;
    }

    return 0;
}
