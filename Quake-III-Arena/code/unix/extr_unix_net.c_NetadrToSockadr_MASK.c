
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in {int sin_port; int sin_addr; void* sin_family; } ;
struct TYPE_3__ {scalar_t__ type; int port; int ip; } ;
typedef TYPE_1__ netadr_t ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sockaddr_in*,int ,int) ;

void FUNC_1 (netadr_t *VAR_3, struct sockaddr_in *VAR_4)
{
 FUNC_0 (VAR_4, 0, sizeof(*VAR_4));

 if (VAR_3->type == VAR_1)
 {
  VAR_4->sin_family = VAR_0;

  VAR_4->sin_port = VAR_3->port;
  *(int *)&VAR_4->sin_addr = -1;
 }
 else if (VAR_3->type == VAR_2)
 {
  VAR_4->sin_family = VAR_0;

  *(int *)&VAR_4->sin_addr = *(int *)&VAR_3->ip;
  VAR_4->sin_port = VAR_3->port;
 }
}
