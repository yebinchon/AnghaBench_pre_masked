
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_ipx {int sa_socket; int sa_nodenum; int sa_netnum; } ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_5__ {int port; int * ipx; int type; int ip; } ;
typedef TYPE_2__ netadr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;

void FUNC_1( struct sockaddr *VAR_4, netadr_t *VAR_5 ) {
 if (VAR_4->sa_family == VAR_0) {
  VAR_5->type = VAR_2;
  *(int *)&VAR_5->ip = ((struct sockaddr_in *)VAR_4)->sin_addr.s_addr;
  VAR_5->port = ((struct sockaddr_in *)VAR_4)->sin_port;
 }
 else if( VAR_4->sa_family == VAR_1 ) {
  VAR_5->type = VAR_3;
  FUNC_0( &VAR_5->ipx[0], ((struct sockaddr_ipx *)VAR_4)->sa_netnum, 4 );
  FUNC_0( &VAR_5->ipx[4], ((struct sockaddr_ipx *)VAR_4)->sa_nodenum, 6 );
  VAR_5->port = ((struct sockaddr_ipx *)VAR_4)->sa_socket;
 }
}
