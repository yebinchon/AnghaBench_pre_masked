
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_33__ {TYPE_3__* format; TYPE_5__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_TRACK_T ;
struct TYPE_34__ {scalar_t__ chunk_offs; void* max_chunk_size; int chunk_index; } ;
typedef TYPE_7__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_35__ {TYPE_6__** tracks; TYPE_4__* priv; } ;
typedef TYPE_8__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_36__ {size_t track; int flags; scalar_t__ frame_size; scalar_t__ size; int data; } ;
typedef TYPE_9__ VC_CONTAINER_PACKET_T ;
struct TYPE_27__ {int headers_written; scalar_t__ data_offset; scalar_t__ chunk_data_written; size_t current_track_num; scalar_t__ chunk_size; int avi_frame_buffer; TYPE_9__ frame_packet; } ;
typedef TYPE_10__ VC_CONTAINER_MODULE_T ;
typedef int VC_CONTAINER_FOURCC_T ;
struct TYPE_32__ {TYPE_7__* module; } ;
struct TYPE_31__ {TYPE_10__* module; } ;
struct TYPE_30__ {scalar_t__ es_type; TYPE_2__* type; } ;
struct TYPE_28__ {scalar_t__ block_align; } ;
struct TYPE_29__ {TYPE_1__ audio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (void*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_8__*) ;
 scalar_t__ FUNC_4 (TYPE_8__*) ;
 scalar_t__ FUNC_5 (TYPE_8__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (char,char,char,char) ;
 int FUNC_7 (TYPE_8__*,int,scalar_t__) ;
 int FUNC_8 (TYPE_8__*,int ,char*) ;
 int FUNC_9 (TYPE_8__*,scalar_t__,char*) ;
 scalar_t__ FUNC_10 (TYPE_8__*,TYPE_9__*) ;
 int FUNC_11 (TYPE_8__*,int *,size_t) ;
 scalar_t__ FUNC_12 (TYPE_8__*,scalar_t__) ;
 scalar_t__ FUNC_13 (TYPE_8__*) ;
 scalar_t__ FUNC_14 (TYPE_8__*) ;
 int FUNC_15 (TYPE_8__*,size_t,scalar_t__,int ) ;
 int FUNC_16 (int,int,scalar_t__) ;
 int FUNC_17 (int) ;
 int FUNC_18 (TYPE_8__*,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_19( VC_CONTAINER_T *VAR_9,
                                               VC_CONTAINER_PACKET_T *VAR_10 )
{
   VC_CONTAINER_MODULE_T *VAR_11 = VAR_9->priv->module;
   VC_CONTAINER_STATUS_T VAR_12 = VAR_8;
   VC_CONTAINER_TRACK_T *VAR_13 = ((void*)0);
   VC_CONTAINER_TRACK_MODULE_T *VAR_14 = ((void*)0);


   if(!VAR_11->headers_written)
   {
      if ((VAR_12 = FUNC_14(VAR_9)) != VAR_8) return VAR_12;
      VAR_11->headers_written = 1;
   }


   if (!VAR_11->data_offset)
   {
      VAR_11->data_offset = FUNC_3(VAR_9);
      FUNC_17(VAR_11->data_offset != FUNC_1(0));

      FUNC_8(VAR_9, FUNC_6('L','I','S','T'), "Chunk ID");
      FUNC_9(VAR_9, 0, "LIST Size");
      FUNC_8(VAR_9, FUNC_6('m','o','v','i'), "Chunk ID");
      if ((VAR_12 = FUNC_5(VAR_9)) != VAR_8) return VAR_12;
   }




   if (VAR_11->chunk_data_written && VAR_10->track != VAR_11->current_track_num)
   {
      VAR_14 = VAR_9->tracks[VAR_11->current_track_num]->priv->module;
      VAR_12 = FUNC_12(VAR_9, VAR_11->chunk_data_written);
      FUNC_15(VAR_9, VAR_11->current_track_num, VAR_11->chunk_data_written, 0);
      VAR_14->chunk_index++;
      VAR_14->chunk_offs += VAR_11->chunk_data_written;
      VAR_14->max_chunk_size = FUNC_2(VAR_14->max_chunk_size, VAR_11->chunk_data_written);
      VAR_11->chunk_data_written = 0;
      if (VAR_12 != VAR_8) return VAR_12;
   }


   if (FUNC_13(VAR_9) == (uint32_t)VAR_2) return VAR_4;

    if(FUNC_4(VAR_9))
    {

       if (FUNC_10(VAR_9, VAR_10) >= (int64_t)VAR_2) return VAR_4;
    }


   FUNC_17(!(VAR_11->chunk_data_written && (VAR_10->flags & VAR_7)));

   VAR_13 = VAR_9->tracks[VAR_10->track];
   VAR_14 = VAR_9->tracks[VAR_10->track]->priv->module;
   VAR_11->current_track_num = VAR_10->track;

   if (VAR_11->chunk_data_written == 0)
   {

      VC_CONTAINER_FOURCC_T VAR_15;
      uint32_t VAR_16;

      FUNC_11(VAR_9, &VAR_15, VAR_10->track);

      if (VAR_10->frame_size)
      {

         VAR_16 = VAR_11->chunk_size = VAR_10->frame_size;
      }
      else
      {
         VAR_16 = VAR_10->size;
         VAR_11->chunk_size = 0;
      }

      FUNC_8(VAR_9, VAR_15, "Chunk ID");
      if(FUNC_4(VAR_9) || VAR_10->flags & VAR_6)
      {


         FUNC_9(VAR_9, VAR_16, "Chunk Size");
         FUNC_7(VAR_9, VAR_10->data, VAR_10->size);
      }
      else
      {
         FUNC_17(VAR_11->avi_frame_buffer);
         if(VAR_10->size > VAR_1)
            return VAR_4;
         VAR_11->frame_packet = *VAR_10;
         VAR_11->frame_packet.data = VAR_11->avi_frame_buffer;
         FUNC_16(VAR_11->frame_packet.data,
                  VAR_10->data, VAR_11->frame_packet.size);
      }

      VAR_11->chunk_data_written = VAR_10->size;
   }
   else
   {
      if(VAR_11->frame_packet.size > 0 && VAR_11->avi_frame_buffer)
      {
         if(VAR_11->frame_packet.size > 0)
         {
            if(VAR_11->frame_packet.size + VAR_10->size > VAR_1)
               return VAR_4;
            FUNC_16(VAR_11->frame_packet.data + VAR_11->frame_packet.size,
                     VAR_10->data, VAR_10->size);
            VAR_11->frame_packet.size += VAR_10->size;
         }
      }
      else
      {
         FUNC_7(VAR_9, VAR_10->data, VAR_10->size);
      }
      VAR_11->chunk_data_written += VAR_10->size;
   }

   if ((VAR_12 = FUNC_5(VAR_9)) != VAR_8)
      return VAR_12;

   if ((VAR_10->flags & VAR_6) ||
       (VAR_13->format->es_type == VAR_5 &&
        VAR_13->format->type->audio.block_align &&
        VAR_11->chunk_data_written > VAR_0))
   {
      if(VAR_11->frame_packet.size > 0)
      {
         FUNC_9(VAR_9, VAR_11->frame_packet.size, "Chunk Size");
         FUNC_7(VAR_9, VAR_11->frame_packet.data, VAR_11->frame_packet.size);
         VAR_10->size = VAR_11->frame_packet.size;
         VAR_11->frame_packet.size = 0;
      }

      if (!VAR_11->chunk_size && VAR_11->chunk_data_written > VAR_10->size)
      {

         VAR_12 = FUNC_12(VAR_9, VAR_11->chunk_data_written);
      }
      else
      {
         VAR_12 = FUNC_12(VAR_9, 0);
      }

      if(!FUNC_4(VAR_9))
      {

         FUNC_18(VAR_9, VAR_3);
      }

      if(FUNC_4(VAR_9))
      {


          FUNC_15(VAR_9, VAR_10->track, VAR_11->chunk_data_written, FUNC_0(VAR_10->flags));
      }
      VAR_14->chunk_index++;
      VAR_14->chunk_offs += VAR_11->chunk_data_written;
      VAR_14->max_chunk_size = FUNC_2(VAR_14->max_chunk_size, VAR_11->chunk_data_written);
      VAR_11->chunk_data_written = 0;

      if (VAR_12 != VAR_8) return VAR_12;
   }

   return FUNC_5(VAR_9);
}
