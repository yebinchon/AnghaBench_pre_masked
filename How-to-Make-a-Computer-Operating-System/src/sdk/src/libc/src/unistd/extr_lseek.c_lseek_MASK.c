
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int,int) ;

off_t FUNC_1( int VAR_2, off_t VAR_3, int VAR_4 ) {
    int VAR_5;
    off_t VAR_6;

    VAR_5 = FUNC_0( VAR_0, VAR_2, ( int )&VAR_3, VAR_4, ( int )&VAR_6 );

    if ( VAR_5 < 0 ) {
        VAR_1 = -VAR_5;
        return ( off_t )-1;
    }

    return VAR_6;
}
