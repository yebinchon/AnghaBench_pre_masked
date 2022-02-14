
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct netplay_connection {char* nick; scalar_t__ mode; int fd; int send_packet_buffer; scalar_t__ active; } ;
struct TYPE_6__ {int size; int* data; int id; } ;
typedef TYPE_1__ retro_ctx_memory_info_t ;
struct TYPE_7__ {int self_frame_count; int* config_devices; int* device_share_modes; int* device_clients; size_t connections_size; char* nick; struct netplay_connection* connections; scalar_t__ remote_paused; scalar_t__ local_paused; } ;
typedef TYPE_2__ netplay_t ;
typedef int device ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,struct netplay_connection*) ;
 int FUNC_5 (int *,int ,int*,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (char*,int,char*,int) ;
 size_t FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;

bool FUNC_10(netplay_t *VAR_7,
      struct netplay_connection *VAR_8)
{

   size_t VAR_9;
   int VAR_10;
   uint32_t VAR_11[4];
   retro_ctx_memory_info_t VAR_12;
   uint32_t VAR_13 = 0;
   uint32_t VAR_14 = 0;
   size_t VAR_15, VAR_16 = 0;
   bool VAR_17 = 0;




   VAR_12.id = VAR_6;
   FUNC_2(&VAR_12);





   VAR_11[0] = FUNC_3(VAR_1);
   VAR_11[1] = FUNC_3(2*sizeof(uint32_t)

         + VAR_0*sizeof(uint32_t)


         + VAR_0*sizeof(uint8_t)


         + VAR_0*sizeof(uint32_t)


         + VAR_5


         + VAR_12.size);
   VAR_11[2] = FUNC_3(VAR_7->self_frame_count);
   VAR_13 = (uint32_t)(VAR_8 - VAR_7->connections + 1);

   if (VAR_7->local_paused || VAR_7->remote_paused)
      VAR_13 |= VAR_2;

   VAR_11[3] = FUNC_3(VAR_13);

   if (!FUNC_5(&VAR_8->send_packet_buffer, VAR_8->fd, VAR_11,
            sizeof(VAR_11)))
      return 0;


   for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
   {
      VAR_14 = FUNC_3(VAR_7->config_devices[VAR_9]);
      if (!FUNC_5(&VAR_8->send_packet_buffer, VAR_8->fd,
            &VAR_14, sizeof(VAR_14)))
         return 0;
   }


   if (!FUNC_5(&VAR_8->send_packet_buffer, VAR_8->fd,
         VAR_7->device_share_modes, sizeof(VAR_7->device_share_modes)))
      return 0;


   for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
   {
      VAR_14 = FUNC_3(VAR_7->device_clients[VAR_9]);
      if (!FUNC_5(&VAR_8->send_packet_buffer, VAR_8->fd,
            &VAR_14, sizeof(VAR_14)))
         return 0;
   }


   VAR_15 = FUNC_8(VAR_8->nick);
   if (VAR_15 > VAR_5 - 5)
      VAR_16 = VAR_5 - 5;
   else
      VAR_16 = VAR_15;
   VAR_10 = 1;
   do
   {
      VAR_17 = 0;
      for (VAR_9 = 0; VAR_9 < VAR_7->connections_size; VAR_9++)
      {
         struct netplay_connection *VAR_18 = &VAR_7->connections[VAR_9];
         if (VAR_18 == VAR_8)
            continue;
         if (VAR_18->active &&
               VAR_18->mode >= VAR_3 &&
               !FUNC_9(VAR_8->nick, VAR_18->nick, VAR_5))
         {
            VAR_17 = 1;
            break;
         }
      }
      if (!FUNC_9(VAR_8->nick, VAR_7->nick, VAR_5))
         VAR_17 = 1;

      if (VAR_17)
      {

         FUNC_7(VAR_8->nick + VAR_16,
               VAR_5 - VAR_16, " (%d)", ++VAR_10);
         VAR_8->nick[VAR_5 - 1] = '\0';
      }
   } while (VAR_17);


   if (!FUNC_5(&VAR_8->send_packet_buffer, VAR_8->fd,
         VAR_8->nick, VAR_5))
      return 0;





   if (!FUNC_5(&VAR_8->send_packet_buffer, VAR_8->fd,
            VAR_12.data, VAR_12.size) ||
         !FUNC_6(&VAR_8->send_packet_buffer, VAR_8->fd,
            0))
   {



      return 0;
   }





   VAR_8->mode = VAR_4;
   FUNC_4(VAR_7, VAR_8);

   return 1;
}
