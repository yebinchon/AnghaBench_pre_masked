
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_in {int sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct hostent {int h_addrtype; int h_length; int h_addr; } ;
struct TYPE_5__ {int socket; } ;
typedef TYPE_1__ hb_net_t ;
typedef int WSADATA ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 TYPE_1__* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int ,struct sockaddr*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 struct hostent* FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (struct sockaddr_in*,int ,int) ;
 int FUNC_10 (int ,int ,int ) ;

hb_net_t * FUNC_11( char * VAR_1, int VAR_2 )
{
    hb_net_t * VAR_3 = FUNC_2( sizeof( hb_net_t ), 1 );

    struct sockaddr_in VAR_4;
    struct hostent * VAR_5;
    if( !( VAR_5 = FUNC_5( VAR_1 ) ) )
    {
        FUNC_6( "gethostbyname failed (%s)", VAR_1 );
        FUNC_4( VAR_3 );
        return ((void*)0);
    }

    FUNC_9( &VAR_4, 0, sizeof( struct sockaddr_in ) );
    VAR_4.sin_family = VAR_5->h_addrtype;
    VAR_4.sin_port = FUNC_7( VAR_2 );
    FUNC_8( &VAR_4.sin_addr, VAR_5->h_addr, VAR_5->h_length );

    if( ( VAR_3->socket = FUNC_10( VAR_5->h_addrtype, VAR_0, 0 ) ) < 0 )
    {
        FUNC_6( "socket failed" );
        FUNC_4( VAR_3 );
        return ((void*)0);
    }

    if( FUNC_3( VAR_3->socket, (struct sockaddr *) &VAR_4,
                 sizeof( struct sockaddr_in ) ) < 0 )
    {
        FUNC_6( "connect failed" );
        FUNC_4( VAR_3 );
        return ((void*)0);
    }

    return VAR_3;
}
