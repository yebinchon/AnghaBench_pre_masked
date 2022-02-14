
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int their_addr ;
struct timeval {int member_0; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_14__ {scalar_t__ data; } ;
struct netplay_connection {int active; scalar_t__ mode; int fd; TYPE_6__ send_packet_buffer; TYPE_6__ recv_packet_buffer; } ;
typedef int socklen_t ;
struct TYPE_12__ {int size; struct netplay_connection* data_const; struct netplay_connection* data; } ;
typedef TYPE_1__ retro_ctx_serialize_info_t ;
struct TYPE_13__ {size_t run_ptr; scalar_t__ run_frame_count; int state_size; int quirks; int force_send_savestate; scalar_t__ stall; size_t self_ptr; scalar_t__ self_frame_count; int stateless_mode; size_t connections_size; int can_poll; int packet_buffer_size; struct netplay_connection* connections; scalar_t__ listen_fd; scalar_t__ is_server; TYPE_9__* buffer; int remote_paused; } ;
typedef TYPE_2__ netplay_t ;
typedef int fd_set ;
struct TYPE_15__ {struct netplay_connection* state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int VAR_11 ;
 int FUNC_5 (scalar_t__,struct sockaddr*,int*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int,int ,int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct netplay_connection*,struct netplay_connection*,int) ;
 int FUNC_11 (struct netplay_connection*,int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_6__*) ;
 scalar_t__ FUNC_14 (TYPE_2__*,TYPE_9__*,scalar_t__) ;
 int FUNC_15 (TYPE_2__*,struct netplay_connection*) ;
 int FUNC_16 (TYPE_6__*,int ) ;
 int FUNC_17 (TYPE_2__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_18 (struct netplay_connection*,size_t) ;
 scalar_t__ FUNC_19 (int,int ,int ,char const*,int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 scalar_t__ FUNC_22 (scalar_t__,int *,int *,int *,struct timeval*) ;

bool FUNC_23(netplay_t *VAR_12)
{
   retro_ctx_serialize_info_t VAR_13;

   if (FUNC_14(VAR_12,
            &VAR_12->buffer[VAR_12->run_ptr], VAR_12->run_frame_count))
   {
      VAR_13.data_const = ((void*)0);
      VAR_13.data = VAR_12->buffer[VAR_12->run_ptr].state;
      VAR_13.size = VAR_12->state_size;

      FUNC_11(VAR_13.data, 0, VAR_13.size);
      if ((VAR_12->quirks & VAR_7)
            || VAR_12->run_frame_count == 0)
      {

      }
      else if (!(VAR_12->quirks & VAR_8)
            && FUNC_6(&VAR_13))
      {
         if (VAR_12->force_send_savestate && !VAR_12->stall
               && !VAR_12->remote_paused)
         {


            if (VAR_12->run_ptr != VAR_12->self_ptr)
            {
               FUNC_10(VAR_12->buffer[VAR_12->self_ptr].state,
                  VAR_12->buffer[VAR_12->run_ptr].state,
                  VAR_12->state_size);
               VAR_12->run_ptr = VAR_12->self_ptr;
               VAR_12->run_frame_count = VAR_12->self_frame_count;
            }


            VAR_13.data_const = VAR_12->buffer[VAR_12->run_ptr].state;
            FUNC_17(VAR_12, &VAR_13, 0);
            VAR_12->force_send_savestate = 0;
         }
      }
      else
      {


         VAR_12->quirks |= VAR_8;
         VAR_12->stateless_mode = 1;
      }



      if (VAR_12->run_frame_count > 0 &&
          (VAR_12->quirks & (VAR_8|VAR_9)) &&
          (VAR_12->connections_size == 0 || !VAR_12->connections[0].active ||
           VAR_12->connections[0].mode < VAR_4))
         VAR_12->stall = VAR_10;
   }

   if (VAR_12->is_server)
   {
      fd_set VAR_14;
      struct timeval VAR_15 = {0};
      int VAR_16;
      struct sockaddr_storage VAR_17;
      socklen_t VAR_18;
      struct netplay_connection *VAR_19;
      size_t VAR_20;


      FUNC_2(&VAR_14);
      FUNC_1(VAR_12->listen_fd, &VAR_14);
      if (FUNC_22(VAR_12->listen_fd + 1,
               &VAR_14, ((void*)0), ((void*)0), &VAR_15) > 0 &&
          FUNC_0(VAR_12->listen_fd, &VAR_14))
      {
         VAR_18 = sizeof(VAR_17);
         VAR_16 = FUNC_5(VAR_12->listen_fd,
               (struct sockaddr*)&VAR_17, &VAR_18);

         if (VAR_16 < 0)
         {
            FUNC_3("%s\n", FUNC_12(VAR_3));
            goto process;
         }


         if (!FUNC_21(VAR_16))
         {

            FUNC_20(VAR_16);
            goto process;
         }
         for (VAR_20 = 0; VAR_20 < VAR_12->connections_size; VAR_20++)
            if (!VAR_12->connections[VAR_20].active &&
                  VAR_12->connections[VAR_20].mode != VAR_5)
               break;
         if (VAR_20 == VAR_12->connections_size)
         {
            if (VAR_20 == 0)
            {
               VAR_12->connections = (struct netplay_connection*)
                  FUNC_9(sizeof(struct netplay_connection));

               if (!VAR_12->connections)
               {
                  FUNC_20(VAR_16);
                  goto process;
               }
               VAR_12->connections_size = 1;

            }
            else
            {
               size_t VAR_21 = VAR_12->connections_size * 2;
               struct netplay_connection
                  *VAR_22 = (struct netplay_connection*)

                  FUNC_18(VAR_12->connections,
                     VAR_21*sizeof(struct netplay_connection));

               if (!VAR_22)
               {
                  FUNC_20(VAR_16);
                  goto process;
               }

               FUNC_11(VAR_22 + VAR_12->connections_size, 0,
                  VAR_12->connections_size * sizeof(struct netplay_connection));
               VAR_12->connections = VAR_22;
               VAR_12->connections_size = VAR_21;

            }
         }
         VAR_19 = &VAR_12->connections[VAR_20];


         FUNC_11(VAR_19, 0, sizeof(*VAR_19));
         VAR_19->active = 1;
         VAR_19->fd = VAR_16;
         VAR_19->mode = VAR_6;

         if (!FUNC_16(&VAR_19->send_packet_buffer,
               VAR_12->packet_buffer_size) ||
             !FUNC_16(&VAR_19->recv_packet_buffer,
               VAR_12->packet_buffer_size))
         {
            if (VAR_19->send_packet_buffer.data)
               FUNC_13(&VAR_19->send_packet_buffer);
            VAR_19->active = 0;
            FUNC_20(VAR_16);
            goto process;
         }

         FUNC_15(VAR_12, VAR_19);

      }
   }

process:
   VAR_12->can_poll = 1;
   FUNC_8();

   return (VAR_12->stall != VAR_10);
}
