
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in {int sin_len; int sin_addr; int sin_family; int sin_port; } ;
struct TYPE_3__ {int server; int domain; int port; } ;
typedef TYPE_1__ socket_target_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;

void FUNC_4(void *VAR_1, socket_target_t *VAR_2)
{
   struct sockaddr_in *VAR_3 = (struct sockaddr_in*)VAR_1;

   VAR_3->sin_port = FUNC_2(VAR_2->port);
   VAR_3->sin_family = FUNC_0(VAR_2->domain);







   FUNC_3(VAR_0, VAR_2->server, &VAR_3->sin_addr);


}
