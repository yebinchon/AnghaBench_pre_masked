
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int,int) ;

int FUNC_1(
    const char* VAR_2,
    const char* VAR_3,
    const char* VAR_4,
    unsigned long VAR_5,
    const void* VAR_6
) {
    int VAR_7;

    VAR_7 = FUNC_0(
        VAR_0,
        ( int )VAR_2,
        ( int )VAR_3,
        ( int )VAR_4,
        ( int )VAR_5
    );

    if ( VAR_7 < 0 ) {
        VAR_1 = -VAR_7;
        return -1;
    }

    return 0;
}
