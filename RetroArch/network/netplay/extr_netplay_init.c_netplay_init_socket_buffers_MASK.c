
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ data; } ;
struct netplay_connection {TYPE_2__ recv_packet_buffer; TYPE_2__ send_packet_buffer; scalar_t__ active; } ;
struct TYPE_5__ {int zbuffer_size; size_t packet_buffer_size; size_t connections_size; struct netplay_connection* connections; } ;
typedef TYPE_1__ netplay_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,size_t) ;
 int FUNC_1 (TYPE_2__*,size_t) ;

__attribute__((used)) static bool FUNC_2(netplay_t *VAR_1)
{


   size_t VAR_2;
   size_t VAR_3 = VAR_1->zbuffer_size +
      VAR_0 * 16;
   VAR_1->packet_buffer_size = VAR_3;

   for (VAR_2 = 0; VAR_2 < VAR_1->connections_size; VAR_2++)
   {
      struct netplay_connection *VAR_4 = &VAR_1->connections[VAR_2];
      if (VAR_4->active)
      {
         if (VAR_4->send_packet_buffer.data)
         {
            if (!FUNC_1(&VAR_4->send_packet_buffer,
                  VAR_3) ||
                !FUNC_1(&VAR_4->recv_packet_buffer,
                  VAR_3))
               return 0;
         }
         else
         {
            if (!FUNC_0(&VAR_4->send_packet_buffer,
                  VAR_3) ||
                !FUNC_0(&VAR_4->recv_packet_buffer,
                  VAR_3))
               return 0;
         }
      }
   }

   return 1;
}
