
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_2__ {int fd; } ;
typedef TYPE_1__ mbedtls_net_context ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (void*,unsigned char*,size_t) ;
 int FUNC_3 (int,int *,int *,int *,struct timeval*) ;

int FUNC_4( void *VAR_6, unsigned char *VAR_7, size_t VAR_8,
                              uint32_t VAR_9 )
{
    int VAR_10;
    struct timeval VAR_11;
    fd_set VAR_12;
    int VAR_13 = ((mbedtls_net_context *) VAR_6)->fd;

    if ( VAR_13 < 0 ) {
        return ( VAR_1 );
    }

    FUNC_1( &VAR_12 );
    FUNC_0( VAR_13, &VAR_12 );

    VAR_11.tv_sec = VAR_9 / 1000;
    VAR_11.tv_usec = ( VAR_9 % 1000 ) * 1000;

    VAR_10 = FUNC_3( VAR_13 + 1, &VAR_12, ((void*)0), ((void*)0), VAR_9 == 0 ? ((void*)0) : &VAR_11 );


    if ( VAR_10 == 0 ) {
        return ( VAR_3 );
    }

    if ( VAR_10 < 0 ) {
        if ( VAR_5 == VAR_0 ) {
            return ( VAR_4 );
        }

        return ( VAR_2 );
    }


    return ( FUNC_2( VAR_6, VAR_7, VAR_8 ) );
}
