
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;

int FUNC_1( const char* VAR_2, mode_t VAR_3 ) {
    int VAR_4;

    VAR_4 = FUNC_0( VAR_0, ( int )VAR_2, ( int )VAR_3 );

    if ( VAR_4 < 0 ) {
        VAR_1 = -VAR_4;
        return -1;
    }

    return 0;
}
