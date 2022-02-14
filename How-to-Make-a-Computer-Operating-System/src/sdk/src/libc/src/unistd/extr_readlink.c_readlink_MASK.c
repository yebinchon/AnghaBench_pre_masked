
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,size_t) ;

ssize_t FUNC_1( const char* VAR_2, char* VAR_3, size_t VAR_4 ) {
    int VAR_5;

    VAR_5 = FUNC_0( VAR_0, ( int )VAR_2, ( int )VAR_3, VAR_4 );

    if ( VAR_5 < 0 ) {
        VAR_1 = -VAR_5;
        return -1;
    }

    return VAR_5;
}
