
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct netplay_connection {int fd; int send_packet_buffer; } ;
struct delta_frame {scalar_t__* have_real; } ;
typedef int payload ;
struct TYPE_5__ {size_t self_ptr; int connected_players; scalar_t__ self_mode; int self_client_num; int self_frame_count; struct netplay_connection* connections; scalar_t__ is_server; struct delta_frame* buffer; } ;
typedef TYPE_1__ netplay_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_1__*,struct netplay_connection*,int ,int*,int) ;
 int FUNC_3 (TYPE_1__*,struct delta_frame*,struct netplay_connection*,int *,int,int) ;

bool FUNC_4(netplay_t *VAR_4,
   struct netplay_connection *VAR_5)
{
   uint32_t VAR_6, VAR_7;
   struct delta_frame *VAR_8 = &VAR_4->buffer[VAR_4->self_ptr];

   if (VAR_4->is_server)
   {
      VAR_7 = (uint32_t)(VAR_5 - VAR_4->connections + 1);



      for (VAR_6 = 1; VAR_6 < VAR_0; VAR_6++)
      {
         if (VAR_6 == VAR_7)
            continue;

         if ((VAR_4->connected_players & (1<<VAR_6)))
         {
            if (VAR_8->have_real[VAR_6])
            {
               if (!FUNC_3(VAR_4, VAR_8, VAR_5, ((void*)0), VAR_6, 0))
                  return 0;
            }
         }
      }


      if (VAR_4->self_mode != VAR_2)
      {
         uint32_t VAR_9 = FUNC_0(VAR_4->self_frame_count);
         if (!FUNC_2(VAR_4, VAR_5, VAR_1,
               &VAR_9, sizeof(VAR_9)))
            return 0;
      }

   }


   if (VAR_4->self_mode == VAR_2
         || VAR_4->self_mode == VAR_3)
   {
      if (!FUNC_3(VAR_4, VAR_8, VAR_5, ((void*)0),
            VAR_4->self_client_num,
            VAR_4->self_mode == VAR_3))
         return 0;
   }

   if (!FUNC_1(&VAR_5->send_packet_buffer, VAR_5->fd,
         0))
      return 0;

   return 1;
}
