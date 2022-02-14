
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct retro_callbacks {int dummy; } ;
struct TYPE_10__ {int fd; void* mode; } ;
struct TYPE_9__ {int listen_fd; int is_server; int is_connected; int nat_traversal; int stateless_mode; int check_frames; int crc_validity_checked; int crcs_valid; int connections_size; int* config_devices; int have_updown_device; TYPE_5__* connections; void* self_mode; int nick; TYPE_5__ one_connection; int quirks; struct retro_callbacks cbs; int tcp_port; } ;
typedef TYPE_1__ netplay_t ;


 unsigned int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 char const* VAR_4 ;
 int FUNC_0 (char*,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,void*,char const*,int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char const*,int) ;

netplay_t *FUNC_12(void *VAR_8, const char *VAR_9, uint16_t VAR_10,
   bool VAR_11, int VAR_12,
   const struct retro_callbacks *VAR_13, bool VAR_14, const char *VAR_15,
   uint64_t VAR_16)
{
   netplay_t *VAR_17 = (netplay_t*)FUNC_1(1, sizeof(*VAR_17));
   if (!VAR_17)
      return ((void*)0);

   VAR_17->listen_fd = -1;
   VAR_17->tcp_port = VAR_10;
   VAR_17->cbs = *VAR_13;
   VAR_17->is_server = (VAR_8 == ((void*)0) && VAR_9 == ((void*)0));
   VAR_17->is_connected = 0;;
   VAR_17->nat_traversal = VAR_17->is_server ? VAR_14 : 0;
   VAR_17->stateless_mode = VAR_11;
   VAR_17->check_frames = VAR_12;
   VAR_17->crc_validity_checked = 0;
   VAR_17->crcs_valid = 1;
   VAR_17->quirks = VAR_16;
   VAR_17->self_mode = VAR_17->is_server ?
                                VAR_3 :
                                VAR_2;

   if (VAR_17->is_server)
   {
      VAR_17->connections = ((void*)0);
      VAR_17->connections_size = 0;
   }
   else
   {
      VAR_17->connections = &VAR_17->one_connection;
      VAR_17->connections_size = 1;
      VAR_17->connections[0].fd = -1;
   }

   FUNC_11(VAR_17->nick, VAR_15[0]
         ? VAR_15 : VAR_4,
         sizeof(VAR_17->nick));

   if (!FUNC_3(VAR_17, VAR_8, VAR_9, VAR_10))
   {
      FUNC_2(VAR_17);
      return ((void*)0);
   }

   if (!FUNC_7(VAR_17))
   {
      FUNC_2(VAR_17);
      return ((void*)0);
   }

   if (VAR_17->is_server)
   {

      unsigned VAR_18;
      for (VAR_18 = 0; VAR_18 < VAR_0; VAR_18++)
      {
         uint32_t VAR_19 = FUNC_4(VAR_18);
         VAR_17->config_devices[VAR_18] = VAR_19;
         if ((VAR_19&VAR_6) == VAR_5)
         {
            VAR_17->have_updown_device = 1;
            FUNC_8();
         }
         if (VAR_19 != VAR_7 && !FUNC_5(VAR_17, 1<<VAR_18))
            FUNC_0("Netplay does not support input device %u\n", VAR_18+1);
      }
   }
   else
   {

      FUNC_6(VAR_17, &VAR_17->connections[0]);

      VAR_17->connections[0].mode = VAR_1;
      VAR_17->self_mode = VAR_1;
   }



   if (VAR_17->is_server)
   {
      if (!FUNC_10(VAR_17->listen_fd))
         goto error;
   }
   else
   {
      if (!FUNC_10(VAR_17->connections[0].fd))
         goto error;
   }

   return VAR_17;

error:
   if (VAR_17->listen_fd >= 0)
      FUNC_9(VAR_17->listen_fd);

   if (VAR_17->connections && VAR_17->connections[0].fd >= 0)
      FUNC_9(VAR_17->connections[0].fd);

   FUNC_2(VAR_17);
   return ((void*)0);
}
