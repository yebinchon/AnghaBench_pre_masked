
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ mbedtls_net_context ;
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
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct addrinfo*) ;
 scalar_t__ FUNC_3 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_4 (struct addrinfo*,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ) ;

int FUNC_7( mbedtls_net_context *VAR_9, const char *VAR_10, const char *VAR_11, int VAR_12 )
{
    int VAR_13;
    struct addrinfo VAR_14, *VAR_15, *VAR_16;

    if ( ( VAR_13 = FUNC_5() ) != 0 ) {
        return ( VAR_13 );
    }


    FUNC_4( &VAR_14, 0, sizeof( VAR_14 ) );
    VAR_14.ai_family = VAR_0;
    VAR_14.ai_socktype = VAR_12 == VAR_6 ? VAR_7 : VAR_8;
    VAR_14.ai_protocol = VAR_12 == VAR_6 ? VAR_2 : VAR_1;

    if ( FUNC_3( VAR_10, VAR_11, &VAR_14, &VAR_15 ) != 0 ) {
        return ( VAR_5 );
    }


    VAR_13 = VAR_5;
    for ( VAR_16 = VAR_15; VAR_16 != ((void*)0); VAR_16 = VAR_16->ai_next ) {
        int VAR_17 = FUNC_6( VAR_16->ai_family, VAR_16->ai_socktype, VAR_16->ai_protocol );

        if ( VAR_17 < 0 ) {
            VAR_13 = VAR_4;
            continue;
        }

        if ( FUNC_1( VAR_17, VAR_16->ai_addr, VAR_16->ai_addrlen ) == 0 ) {
            VAR_9->fd = VAR_17;
            VAR_13 = 0;
            break;
        }

        FUNC_0( VAR_17 );
        VAR_13 = VAR_3;
    }

    FUNC_2( VAR_15 );

    return ( VAR_13 );
}
