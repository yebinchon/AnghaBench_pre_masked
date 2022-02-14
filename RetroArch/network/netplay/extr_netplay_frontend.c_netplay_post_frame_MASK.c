
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct netplay_connection {scalar_t__ active; int fd; int send_packet_buffer; } ;
struct TYPE_8__ {size_t connections_size; struct netplay_connection* connections; int is_server; } ;
typedef TYPE_1__ netplay_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct netplay_connection*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(netplay_t *VAR_0)
{
   size_t VAR_1;
   FUNC_5(VAR_0);
   FUNC_4(VAR_0);
   FUNC_3(VAR_0, 0);

   for (VAR_1 = 0; VAR_1 < VAR_0->connections_size; VAR_1++)
   {
      struct netplay_connection *VAR_2 = &VAR_0->connections[VAR_1];
      if (VAR_2->active &&
          !FUNC_2(&VAR_2->send_packet_buffer, VAR_2->fd,
            0))
         FUNC_1(VAR_0, VAR_2);
   }


   if (!VAR_0->is_server && !VAR_0->connections[0].active)
      FUNC_0(VAR_0);
}
