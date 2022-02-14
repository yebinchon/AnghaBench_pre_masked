
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct netplay_connection {scalar_t__ mode; int fd; int send_packet_buffer; scalar_t__ active; } ;
struct TYPE_4__ {size_t connections_size; struct netplay_connection* connections; } ;
typedef TYPE_1__ netplay_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct netplay_connection*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(netplay_t *VAR_1,
   struct netplay_connection *VAR_2)
{
   size_t VAR_3;
   for (VAR_3 = 0; VAR_3 < VAR_1->connections_size; VAR_3++)
   {
      struct netplay_connection *VAR_4 = &VAR_1->connections[VAR_3];
      if (VAR_4 == VAR_2)
         continue;
      if (VAR_4->active && VAR_4->mode >= VAR_0)
      {
         if (!FUNC_1(&VAR_4->send_packet_buffer,
            VAR_4->fd, 1))
            FUNC_0(VAR_1, VAR_4);
      }
   }
}
