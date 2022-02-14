
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct netplay_connection {scalar_t__ mode; int fd; int send_packet_buffer; scalar_t__ active; } ;
struct delta_frame {size_t frame; TYPE_2__** real_input; } ;
struct TYPE_6__ {size_t* client_devices; size_t connections_size; struct netplay_connection* connections; } ;
typedef TYPE_1__ netplay_t ;
typedef TYPE_2__* netplay_input_state_t ;
struct TYPE_7__ {size_t client_num; size_t size; size_t* data; struct TYPE_7__* next; int used; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,unsigned int) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_1__*,struct netplay_connection*) ;
 int FUNC_3 (int *,int ,size_t*,size_t) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_5(netplay_t *VAR_6, struct delta_frame *VAR_7,
      struct netplay_connection *VAR_8, struct netplay_connection *VAR_9,
      uint32_t VAR_10, bool VAR_11)
{

   uint32_t VAR_12[16], VAR_13, VAR_14;
   size_t VAR_15, VAR_16;


   VAR_15 = 4;
   VAR_12[0] = FUNC_1(VAR_3);
   VAR_12[2] = FUNC_1(VAR_7->frame);
   VAR_12[3] = FUNC_1(VAR_10);


   VAR_13 = VAR_6->client_devices[VAR_10];
   for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
   {
      netplay_input_state_t VAR_17;
      if (!(VAR_13 & (1<<VAR_14)))
         continue;
      VAR_17 = VAR_7->real_input[VAR_14];
      while (VAR_17 && (!VAR_17->used || VAR_17->client_num != (VAR_11?VAR_1:VAR_10)))
         VAR_17 = VAR_17->next;
      if (!VAR_17)
         continue;
      if (VAR_15 + VAR_17->size >= 16)
         continue;
      for (VAR_16 = 0; VAR_16 < VAR_17->size; VAR_16++)
         VAR_12[VAR_15+VAR_16] = FUNC_1(VAR_17->data[VAR_16]);
      VAR_15 += VAR_17->size;
   }
   VAR_12[1] = FUNC_1((VAR_15-2) * sizeof(uint32_t));






   if (VAR_8)
   {
      if (!FUNC_3(&VAR_8->send_packet_buffer, VAR_8->fd, VAR_12, VAR_15*sizeof(uint32_t)))
      {
         FUNC_2(VAR_6, VAR_8);
         return 0;
      }
   }
   else
   {
      for (VAR_16 = 0; VAR_16 < VAR_6->connections_size; VAR_16++)
      {
         struct netplay_connection *VAR_18 = &VAR_6->connections[VAR_16];
         if (VAR_18 == VAR_9)
            continue;
         if (VAR_18->active &&
             VAR_18->mode >= VAR_4 &&
             (VAR_18->mode != VAR_5 ||
              VAR_16+1 != VAR_10))
         {
            if (!FUNC_3(&VAR_18->send_packet_buffer, VAR_18->fd,
                  VAR_12, VAR_15*sizeof(uint32_t)))
               FUNC_2(VAR_6, VAR_18);
         }
      }
   }

   return 1;

}
