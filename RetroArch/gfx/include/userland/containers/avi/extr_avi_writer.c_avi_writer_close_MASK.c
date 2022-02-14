
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_25__ {int max_chunk_size; scalar_t__ chunk_offs; int chunk_index; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_26__ {unsigned int tracks_num; TYPE_9__** tracks; TYPE_1__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_28__ {scalar_t__ io; } ;
struct TYPE_27__ {size_t current_track_num; int data_offset; int header_list_offset; struct TYPE_27__* avi_frame_buffer; TYPE_7__ temp_io; TYPE_7__ null_io; scalar_t__ data_size; int header_list_size; scalar_t__ index_status; scalar_t__ chunk_data_written; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
struct TYPE_29__ {TYPE_2__* priv; } ;
struct TYPE_24__ {TYPE_3__* module; } ;
struct TYPE_23__ {TYPE_5__* module; } ;


 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_4__*,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (TYPE_4__*,scalar_t__,char*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_4__*,size_t,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 scalar_t__ FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_4__*,TYPE_9__*) ;
 int FUNC_14 (TYPE_4__*,TYPE_7__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_15( VC_CONTAINER_T *VAR_1 )
{
   VC_CONTAINER_STATUS_T VAR_2 = VAR_0;
   VC_CONTAINER_MODULE_T *VAR_3 = VAR_1->priv->module;
   unsigned int VAR_4;


   if (VAR_3->chunk_data_written)
   {
      VC_CONTAINER_TRACK_MODULE_T *VAR_5 = VAR_1->tracks[VAR_3->current_track_num]->priv->module;
      VAR_2 = FUNC_7(VAR_1, VAR_3->chunk_data_written);
      if (VAR_2 != VAR_0)
      {
         FUNC_0(VAR_1, "warning, writing failed, last chunk truncated");
      }
      FUNC_9(VAR_1, VAR_3->current_track_num, VAR_3->chunk_data_written, 0);
      VAR_5->chunk_index++;
      VAR_5->chunk_offs += VAR_3->chunk_data_written;
      VAR_5->max_chunk_size = FUNC_1(VAR_5->max_chunk_size, VAR_3->chunk_data_written);
      VAR_3->chunk_data_written = 0;
   }

   if(FUNC_4(VAR_1))
   {
      uint32_t VAR_6;


      VAR_2 = FUNC_11(VAR_1);
      if (VAR_2 != VAR_0)
      {
         VAR_3->index_status = VAR_2;
         FUNC_0(VAR_1, "warning, writing standard index data failed, file will be malformed");
      }


      VAR_3->data_size = FUNC_3(VAR_1) - VAR_3->data_offset - 8;


      VAR_2 = FUNC_10(VAR_1);
      if (VAR_2 != VAR_0)
      {
         VAR_3->index_status = VAR_2;
         FUNC_0(VAR_1, "warning, writing legacy index data failed, file will be malformed");
      }





      VAR_6 = (uint32_t)FUNC_3(VAR_1);
      FUNC_2(VAR_1, 4);
      FUNC_6(VAR_1, VAR_6, "fileSize");
      if(FUNC_5(VAR_1) != VAR_0)
      {
         FUNC_0(VAR_1, "warning, rewriting 'fileSize' failed, file will be malformed");
      }


      FUNC_2(VAR_1, VAR_3->header_list_offset);
      VAR_2 = FUNC_8(VAR_1, VAR_3->header_list_size);
      if (VAR_2 != VAR_0)
      {
         FUNC_0(VAR_1, "warning, rewriting 'hdrl' failed, file will be malformed");
      }


      FUNC_2(VAR_1, VAR_3->data_offset + 4);
      FUNC_6(VAR_1, VAR_3->data_size, "Chunk Size");
      if(FUNC_5(VAR_1) != VAR_0)
      {
         FUNC_0(VAR_1, "warning, rewriting 'movi' list size failed, file will be malformed");
      }
   }

   FUNC_14(VAR_1, &VAR_3->null_io);
   if(VAR_3->temp_io.io) FUNC_14(VAR_1, &VAR_3->temp_io);

   for(VAR_4 = 0; VAR_4 < VAR_1->tracks_num; VAR_4++)
      FUNC_13(VAR_1, VAR_1->tracks[VAR_4]);
   VAR_1->tracks_num = 0;
   VAR_1->tracks = ((void*)0);

   if(VAR_3->avi_frame_buffer) FUNC_12(VAR_3->avi_frame_buffer);
   FUNC_12(VAR_3);

   return VAR_2;
}
