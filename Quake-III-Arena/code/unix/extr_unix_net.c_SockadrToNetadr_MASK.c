
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in {int sin_port; int sin_addr; } ;
struct TYPE_3__ {int type; int port; int ip; } ;
typedef TYPE_1__ netadr_t ;


 int VAR_0 ;

void FUNC_0 (struct sockaddr_in *VAR_1, netadr_t *VAR_2)
{
 *(int *)&VAR_2->ip = *(int *)&VAR_1->sin_addr;
 VAR_2->port = VAR_1->sin_port;
 VAR_2->type = VAR_0;
}
