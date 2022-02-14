
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,size_t,int) ;

ssize_t FUNC_1( int VAR_2, void* VAR_3, size_t VAR_4, off_t VAR_5 ) {
    int VAR_6;

    VAR_6 = FUNC_0( VAR_0, VAR_2, ( int )VAR_3, VAR_4, ( int )&VAR_5 );

    if ( VAR_6 < 0 ) {
        VAR_1 = -VAR_6;
        return -1;
    }

    return VAR_6;
}
