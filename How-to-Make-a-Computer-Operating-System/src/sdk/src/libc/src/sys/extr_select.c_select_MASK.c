
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
typedef int fd_set ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int,int,int) ;

int FUNC_1( int VAR_2, fd_set* VAR_3, fd_set* VAR_4, fd_set* VAR_5, struct timeval* VAR_6 ) {
    int VAR_7;

    VAR_7 = FUNC_0(
        VAR_0,
        VAR_2,
        ( int )VAR_3,
        ( int )VAR_4,
        ( int )VAR_5,
        ( int )VAR_6
    );

    if ( VAR_7 < 0 ) {
        VAR_1 = -VAR_7;
        return -1;
    }

    return VAR_7;
}
