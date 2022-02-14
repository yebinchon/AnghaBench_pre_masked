
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_ipx {int sa_socket; struct sockaddr* sa_nodenum; struct sockaddr* sa_netnum; void* sa_family; } ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; void* sin_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_5__ {scalar_t__ type; int port; int * ipx; int ip; } ;
typedef TYPE_2__ netadr_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sockaddr*,int *,int) ;
 int FUNC_1 (struct sockaddr*,int,int) ;

void FUNC_2( netadr_t *VAR_7, struct sockaddr *VAR_8 ) {
 FUNC_1( VAR_8, 0, sizeof(*VAR_8) );

 if( VAR_7->type == VAR_3 ) {
  ((struct sockaddr_in *)VAR_8)->sin_family = VAR_0;
  ((struct sockaddr_in *)VAR_8)->sin_port = VAR_7->port;
  ((struct sockaddr_in *)VAR_8)->sin_addr.s_addr = VAR_2;
 }
 else if( VAR_7->type == VAR_5 ) {
  ((struct sockaddr_in *)VAR_8)->sin_family = VAR_0;
  ((struct sockaddr_in *)VAR_8)->sin_addr.s_addr = *(int *)&VAR_7->ip;
  ((struct sockaddr_in *)VAR_8)->sin_port = VAR_7->port;
 }
 else if( VAR_7->type == VAR_6 ) {
  ((struct sockaddr_ipx *)VAR_8)->sa_family = VAR_1;
  FUNC_0( ((struct sockaddr_ipx *)VAR_8)->sa_netnum, &VAR_7->ipx[0], 4 );
  FUNC_0( ((struct sockaddr_ipx *)VAR_8)->sa_nodenum, &VAR_7->ipx[4], 6 );
  ((struct sockaddr_ipx *)VAR_8)->sa_socket = VAR_7->port;
 }
 else if( VAR_7->type == VAR_4 ) {
  ((struct sockaddr_ipx *)VAR_8)->sa_family = VAR_1;
  FUNC_1( ((struct sockaddr_ipx *)VAR_8)->sa_netnum, 0, 4 );
  FUNC_1( ((struct sockaddr_ipx *)VAR_8)->sa_nodenum, 0xff, 6 );
  ((struct sockaddr_ipx *)VAR_8)->sa_socket = VAR_7->port;
 }
}
