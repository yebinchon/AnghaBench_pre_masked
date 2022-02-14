
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tv_sec; } ;
typedef TYPE_1__ timeval_t ;
struct utimbuf {int modtime; int actime; } ;


 int FUNC_0 (char const*,struct utimbuf*) ;

int FUNC_1( const char* VAR_0, const timeval_t VAR_1[2] ) {
    struct utimbuf VAR_2;


    VAR_2.actime = VAR_1[ 0 ].tv_sec;
    VAR_2.modtime = VAR_1[ 1 ].tv_sec;


    return FUNC_0( VAR_0, &VAR_2 );
}
