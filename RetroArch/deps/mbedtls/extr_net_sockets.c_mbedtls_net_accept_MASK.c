
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int type ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct TYPE_8__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_2__ sin6_addr; } ;
struct TYPE_7__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int one ;
struct TYPE_9__ {int fd; } ;
typedef TYPE_3__ mbedtls_net_context ;
typedef int client_addr ;
typedef int buf ;


 scalar_t__ VAR_0 ;
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
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_5 (int,int ,int ,void*,int*) ;
 int FUNC_6 (void*,int *,size_t) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (int,char*,int,int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_9 (int,int ,int ,char const*,int) ;
 scalar_t__ FUNC_10 (scalar_t__,int,int ) ;

int FUNC_11( mbedtls_net_context *VAR_15,
                        mbedtls_net_context *VAR_16,
                        void *VAR_17, size_t VAR_18, size_t *VAR_19 )
{
    int VAR_20;
    int VAR_21;

    struct sockaddr_storage VAR_22;






    int VAR_23 = (int) sizeof( VAR_22 );
    int VAR_24 = (int) sizeof( VAR_21 );



    if( FUNC_5( VAR_15->fd, VAR_11, VAR_13,
                    (void *) &VAR_21, &VAR_24 ) != 0 ||
        ( VAR_21 != VAR_10 && VAR_21 != VAR_9 ) )
    {
        return( VAR_2 );
    }

    if( VAR_21 == VAR_10 )
    {

        VAR_20 = VAR_16->fd = (int) FUNC_1( VAR_15->fd,
                                             (struct sockaddr *) &VAR_22, &VAR_23 );
    }
    else
    {

        char VAR_25[1] = { 0 };

        VAR_20 = (int) FUNC_8( VAR_15->fd, VAR_25, sizeof( VAR_25 ), VAR_7,
                        (struct sockaddr *) &VAR_22, &VAR_23 );
    }

    if( VAR_20 < 0 )
    {
        if( FUNC_7( VAR_15 ) != 0 )
            return( VAR_6 );

        return( VAR_2 );
    }



    if( VAR_21 != VAR_10 )
    {
        struct sockaddr_storage VAR_26;
        int VAR_27 = 1;

        if( FUNC_3( VAR_15->fd, (struct sockaddr *) &VAR_22, VAR_23 ) != 0 )
            return( VAR_2 );

        VAR_16->fd = VAR_15->fd;
        VAR_15->fd = -1;

        VAR_23 = sizeof( struct sockaddr_storage );
        if( FUNC_4( VAR_16->fd,
                         (struct sockaddr *) &VAR_26, &VAR_23 ) != 0 ||
            ( VAR_15->fd = (int) FUNC_10( VAR_26.ss_family,
                                           VAR_9, VAR_1 ) ) < 0 ||
            FUNC_9( VAR_15->fd, VAR_11, VAR_12,
                        (const char *) &VAR_27, sizeof( VAR_27 ) ) != 0 )
        {
            return( VAR_5 );
        }

        if( FUNC_2( VAR_15->fd, (struct sockaddr *) &VAR_26, VAR_23 ) != 0 )
        {
            return( VAR_3 );
        }
    }

    if( VAR_17 != ((void*)0) )
    {
        if( VAR_22.ss_family == VAR_0 )
        {
            struct sockaddr_in *VAR_28 = (struct sockaddr_in *) &VAR_22;
            *VAR_19 = sizeof( VAR_28->sin_addr.s_addr );

            if( VAR_18 < *VAR_19 )
                return( VAR_4 );

            FUNC_6( VAR_17, &VAR_28->sin_addr.s_addr, *VAR_19 );
        }
        else
        {
            struct sockaddr_in6 *VAR_29 = (struct sockaddr_in6 *) &VAR_22;
            *VAR_19 = sizeof( VAR_29->sin6_addr.s6_addr );

            if( VAR_18 < *VAR_19 )
                return( VAR_4 );

            FUNC_6( VAR_17, &VAR_29->sin6_addr.s6_addr, *VAR_19);
        }
    }

    return( 0 );
}
