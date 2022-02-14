
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct netplay_connection {scalar_t__ mode; int fd; int send_packet_buffer; int active; } ;
struct TYPE_5__ {int self_frame_count; size_t connections_size; struct netplay_connection* connections; } ;
typedef TYPE_1__ netplay_t ;
typedef int cmd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,struct netplay_connection*) ;
 int FUNC_3 (int *,int ,int *,int) ;

__attribute__((used)) static void FUNC_4(netplay_t *VAR_2)
{
   uint32_t VAR_3[3];
   size_t VAR_4;


   FUNC_1(VAR_2);


   VAR_3[0] = FUNC_0(VAR_0);
   VAR_3[1] = FUNC_0(sizeof(uint32_t));
   VAR_3[2] = FUNC_0(VAR_2->self_frame_count);

   for (VAR_4 = 0; VAR_4 < VAR_2->connections_size; VAR_4++)
   {
      struct netplay_connection *VAR_5 = &VAR_2->connections[VAR_4];
      if (!VAR_5->active ||
            VAR_5->mode < VAR_1) continue;

      if (!FUNC_3(&VAR_5->send_packet_buffer, VAR_5->fd, VAR_3,
               sizeof(VAR_3)))
         FUNC_2(VAR_2, VAR_5);
   }
}
