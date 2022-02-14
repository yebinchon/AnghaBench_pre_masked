
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rusage {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int,int) ;

pid_t FUNC_1( pid_t VAR_2, int* VAR_3, int VAR_4, struct rusage* VAR_5 ) {
    int VAR_6;

    VAR_6 = FUNC_0(
        VAR_0,
        VAR_2,
        ( int )VAR_3,
        VAR_4,
        ( int )VAR_5
    );

    if ( VAR_6 < 0 ) {
        VAR_1 = -VAR_6;
        return -1;
    }

    return VAR_6;
}
