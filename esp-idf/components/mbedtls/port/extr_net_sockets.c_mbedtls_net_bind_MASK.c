
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct addrinfo {int ai_addrlen; scalar_t__ ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int n ;
struct TYPE_5__ {int fd; } ;
typedef TYPE_2__ mbedtls_net_context ;
typedef int hints ;


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
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct addrinfo*) ;
 scalar_t__ FUNC_3 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (struct addrinfo*,int ,int) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int,int ,int ,char const*,int) ;
 int FUNC_9 (int ,int ,int ) ;

int FUNC_10( mbedtls_net_context *VAR_15, const char *VAR_16, const char *VAR_17, int VAR_18 )
{
    int VAR_19;
    struct addrinfo VAR_20, *VAR_21, *VAR_22;
    struct sockaddr_in *VAR_23 = ((void*)0);




    if ( ( VAR_19 = FUNC_7() ) != 0 ) {
        return ( VAR_19 );
    }


    FUNC_6( &VAR_20, 0, sizeof( VAR_20 ) );
    VAR_20.ai_family = VAR_0;
    VAR_20.ai_socktype = VAR_18 == VAR_10 ? VAR_11 : VAR_12;
    VAR_20.ai_protocol = VAR_18 == VAR_10 ? VAR_3 : VAR_2;

    if ( FUNC_3( VAR_16, VAR_17, &VAR_20, &VAR_21 ) != 0 ) {
        return ( VAR_7 );
    }


    VAR_19 = VAR_7;
    for ( VAR_22 = VAR_21; VAR_22 != ((void*)0); VAR_22 = VAR_22->ai_next ) {
        int VAR_24 = FUNC_9( VAR_22->ai_family, VAR_22->ai_socktype, VAR_22->ai_protocol );
        if ( VAR_24 < 0 ) {
            VAR_19 = VAR_6;
            continue;
        }
        VAR_23 = (struct sockaddr_in *)VAR_22->ai_addr;
        VAR_23->sin_addr.s_addr = FUNC_4(VAR_1);
        if ( FUNC_0( VAR_24, (struct sockaddr *)VAR_23, VAR_22->ai_addrlen ) != 0 ) {
            FUNC_1( VAR_24 );
            VAR_19 = VAR_4;
            continue;
        }


        if ( VAR_18 == VAR_9 ) {
            if ( FUNC_5( VAR_24, VAR_8 ) != 0 ) {
                FUNC_1( VAR_24 );
                VAR_19 = VAR_5;
                continue;
            }
        }


        VAR_15->fd = VAR_24;
        VAR_19 = 0;
        break;
    }

    FUNC_2( VAR_21 );

    return ( VAR_19 );

}
