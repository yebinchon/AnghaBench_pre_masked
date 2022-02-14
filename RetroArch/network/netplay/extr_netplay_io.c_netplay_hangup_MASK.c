
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct netplay_connection {int active; scalar_t__ mode; scalar_t__ paused; int delay_frame; int recv_packet_buffer; int send_packet_buffer; int fd; scalar_t__* nick; } ;
struct TYPE_6__ {int is_connected; long connected_players; long self_client_num; long* device_clients; long connected_slaves; scalar_t__* client_devices; int * read_frame_count; struct netplay_connection* connections; int stall; int self_mode; scalar_t__ is_server; } ;
typedef TYPE_1__ netplay_t ;
typedef int msg ;
struct TYPE_7__ {int status; } ;
typedef TYPE_2__ discord_userdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 scalar_t__ VAR_14 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,struct netplay_connection*) ;
 int FUNC_5 (char const*,int,int,int,int *,int ,int ) ;
 int FUNC_6 (char*,int,char*,scalar_t__*) ;
 int FUNC_7 (int ) ;

void FUNC_8(netplay_t *VAR_15, struct netplay_connection *VAR_16)
{
   char VAR_17[512];
   const char *VAR_18;
   size_t VAR_19;

   if (!VAR_15)
      return;
   if (!VAR_16->active)
      return;

   VAR_17[0] = VAR_17[sizeof(VAR_17)-1] = '\0';
   VAR_18 = VAR_17;


   if (VAR_15->is_server)
   {
      if (VAR_16->nick[0])
         FUNC_6(VAR_17, sizeof(VAR_17)-1, FUNC_2(VAR_8), VAR_16->nick);
      else
         VAR_18 = FUNC_2(VAR_7);
   }
   else
   {
      VAR_18 = FUNC_2(VAR_6);
      VAR_15->is_connected = 0;
   }
   FUNC_0("[netplay] %s\n", VAR_18);
   FUNC_5(VAR_18, 1, 180, 0, ((void*)0), VAR_5, VAR_4);

   FUNC_7(VAR_16->fd);
   VAR_16->active = 0;
   FUNC_3(&VAR_16->send_packet_buffer);
   FUNC_3(&VAR_16->recv_packet_buffer);

   if (!VAR_15->is_server)
   {
      VAR_15->self_mode = VAR_10;
      VAR_15->connected_players &= (1L<<VAR_15->self_client_num);
      for (VAR_19 = 0; VAR_19 < VAR_2; VAR_19++)
      {
         if (VAR_19 == VAR_15->self_client_num)
            continue;
         VAR_15->client_devices[VAR_19] = 0;
      }
      for (VAR_19 = 0; VAR_19 < VAR_3; VAR_19++)
         VAR_15->device_clients[VAR_19] &= (1L<<VAR_15->self_client_num);
      VAR_15->stall = VAR_13;

   }
   else
   {
      uint32_t VAR_20 = (uint32_t)(VAR_16 - VAR_15->connections + 1);


      if (VAR_16->mode == VAR_11 ||
          VAR_16->mode == VAR_12)
      {


         VAR_16->mode = VAR_9;
         VAR_16->delay_frame = VAR_15->read_frame_count[VAR_20];


         VAR_15->connected_players &= ~(1L<<VAR_20);
         VAR_15->connected_slaves &= ~(1L<<VAR_20);
         VAR_15->client_devices[VAR_20] = 0;
         for (VAR_19 = 0; VAR_19 < VAR_3; VAR_19++)
            VAR_15->device_clients[VAR_19] &= ~(1L<<VAR_20);

      }

   }


   if (VAR_16->paused)
      FUNC_4(VAR_15, VAR_16);
}
