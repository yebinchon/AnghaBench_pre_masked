
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utimbuf {int actime; int modtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int *) ;

int FUNC_2( const char* VAR_2, const struct utimbuf* VAR_3 ) {
    int VAR_4;
    struct utimbuf VAR_5;

    if ( VAR_3 == ((void*)0) ) {
        VAR_5.actime = FUNC_1( ((void*)0) );
        VAR_5.modtime = VAR_5.actime;

        VAR_3 = ( const struct utimbuf* )&VAR_5;
    }

    VAR_4 = FUNC_0( VAR_0, ( int )VAR_2, ( int )VAR_3 );

    if ( VAR_4 < 0 ) {
        VAR_1 = -VAR_4;
        return -1;
    }

    return 0;
}
