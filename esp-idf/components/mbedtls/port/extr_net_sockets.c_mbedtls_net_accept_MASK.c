
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int type ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int one ;
struct TYPE_7__ {int fd; } ;
typedef TYPE_2__ mbedtls_net_context ;
typedef int client_addr ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_4 (int,int ,int ,void*,int*) ;
 int FUNC_5 (void*,int *,size_t) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int,char*,int,int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_8 (int,int ,int ,char const*,int) ;
 scalar_t__ FUNC_9 (int ,int,int ) ;

int FUNC_10( mbedtls_net_context *VAR_13,
                        mbedtls_net_context *VAR_14,
                        void *VAR_15, size_t VAR_16, size_t *VAR_17 )
{
    int VAR_18;
    int VAR_19;

    struct sockaddr_in VAR_20;

    socklen_t VAR_21 = (socklen_t) sizeof( VAR_20 );
    socklen_t VAR_22 = (socklen_t) sizeof( VAR_19 );


    if ( FUNC_4( VAR_13->fd, VAR_10, VAR_12,
                     (void *) &VAR_19, (socklen_t *) &VAR_22 ) != 0 ||
            ( VAR_19 != VAR_9 && VAR_19 != VAR_8 ) ) {
        return ( VAR_2 );
    }

    if ( VAR_19 == VAR_9 ) {

        VAR_18 = VAR_14->fd = (int) FUNC_0( VAR_13->fd,
                                             (struct sockaddr *) &VAR_20, &VAR_21 );
    } else {

        char VAR_23[1] = { 0 };

        VAR_18 = FUNC_7( VAR_13->fd, VAR_23, sizeof( VAR_23 ), VAR_7,
                        (struct sockaddr *) &VAR_20, &VAR_21 );

    }

    if ( VAR_18 < 0 ) {
        if ( FUNC_6( VAR_13 ) != 0 ) {
            return ( VAR_6 );
        }

        return ( VAR_2 );
    }



    if ( VAR_19 != VAR_9 ) {
        struct sockaddr_in VAR_24;
        int VAR_25 = 1;

        if ( FUNC_2( VAR_13->fd, (struct sockaddr *) &VAR_20, VAR_21 ) != 0 ) {
            return ( VAR_2 );
        }

        VAR_14->fd = VAR_13->fd;
        VAR_13->fd = -1;

        VAR_21 = sizeof( struct sockaddr_in );
        if ( FUNC_3( VAR_14->fd,
                          (struct sockaddr *) &VAR_24, &VAR_21 ) != 0 ||
                ( VAR_13->fd = (int) FUNC_9( VAR_0,
                                               VAR_8, VAR_1 ) ) < 0 ||
                FUNC_8( VAR_13->fd, VAR_10, VAR_11,
                            (const char *) &VAR_25, sizeof( VAR_25 ) ) != 0 ) {
            return ( VAR_5 );
        }

        if ( FUNC_1( VAR_13->fd, (struct sockaddr *) &VAR_24, VAR_21 ) != 0 ) {
            return ( VAR_3 );
        }
    }

    if ( VAR_15 != ((void*)0) ) {
        struct sockaddr_in *VAR_26 = (struct sockaddr_in *) &VAR_20;
        *VAR_17 = sizeof( VAR_26->sin_addr.s_addr );

        if ( VAR_16 < *VAR_17 ) {
            return ( VAR_4 );
        }

        FUNC_5( VAR_15, &VAR_26->sin_addr.s_addr, *VAR_17 );
    }

    return ( 0 );
}
