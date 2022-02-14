
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct netplay_connection {scalar_t__ mode; scalar_t__ compression_supported; int fd; int send_packet_buffer; int active; } ;
struct compression_transcoder {int compression_stream; TYPE_1__* compression_backend; } ;
struct TYPE_8__ {scalar_t__ size; scalar_t__ data_const; } ;
typedef TYPE_2__ retro_ctx_serialize_info_t ;
struct TYPE_9__ {scalar_t__* zbuffer; size_t connections_size; scalar_t__ run_frame_count; struct netplay_connection* connections; int zbuffer_size; } ;
typedef TYPE_3__ netplay_t ;
typedef int header ;
struct TYPE_7__ {int (* trans ) (int ,int,scalar_t__*,scalar_t__*,int *) ;int (* set_out ) (int ,scalar_t__*,scalar_t__) ;int (* set_in ) (int ,int const*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*,struct netplay_connection*) ;
 int FUNC_2 (int *,int ,scalar_t__*,scalar_t__) ;
 int FUNC_3 (int ,int const*,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__*,scalar_t__) ;
 int FUNC_5 (int ,int,scalar_t__*,scalar_t__*,int *) ;

void FUNC_6(netplay_t *VAR_2,
   retro_ctx_serialize_info_t *VAR_3, uint32_t VAR_4,
   struct compression_transcoder *VAR_5)
{
   uint32_t VAR_6[4];
   uint32_t VAR_7, VAR_8;
   size_t VAR_9;


   VAR_5->compression_backend->set_in(VAR_5->compression_stream,
      (const uint8_t*)VAR_3->data_const, (uint32_t)VAR_3->size);
   VAR_5->compression_backend->set_out(VAR_5->compression_stream,
      VAR_2->zbuffer, (uint32_t)VAR_2->zbuffer_size);
   if (!VAR_5->compression_backend->trans(VAR_5->compression_stream, 1, &VAR_7,
         &VAR_8, ((void*)0)))
   {

      for (VAR_9 = 0; VAR_9 < VAR_2->connections_size; VAR_9++)
         FUNC_1(VAR_2, &VAR_2->connections[VAR_9]);
      return;
   }


   VAR_6[0] = FUNC_0(VAR_0);
   VAR_6[1] = FUNC_0(VAR_8 + 2*sizeof(uint32_t));
   VAR_6[2] = FUNC_0(VAR_2->run_frame_count);
   VAR_6[3] = FUNC_0(VAR_3->size);

   for (VAR_9 = 0; VAR_9 < VAR_2->connections_size; VAR_9++)
   {
      struct netplay_connection *VAR_10 = &VAR_2->connections[VAR_9];
      if (!VAR_10->active ||
          VAR_10->mode < VAR_1 ||
          VAR_10->compression_supported != VAR_4) continue;

      if (!FUNC_2(&VAR_10->send_packet_buffer, VAR_10->fd, VAR_6,
            sizeof(VAR_6)) ||
          !FUNC_2(&VAR_10->send_packet_buffer, VAR_10->fd,
            VAR_2->zbuffer, VAR_8))
         FUNC_1(VAR_2, VAR_10);
   }
}
