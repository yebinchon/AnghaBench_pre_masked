
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_16__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_17__ {int object_level; scalar_t__* stream_number_to_index; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_18__ {scalar_t__ subpayload_size; scalar_t__ current_payload; scalar_t__ num_payloads; scalar_t__ size; scalar_t__ start; scalar_t__ payload_size; scalar_t__ media_object_size; int stream_num; scalar_t__ current_offset; scalar_t__ media_object_pts_delta; int media_object_pts; scalar_t__ media_object_off; scalar_t__ compressed_payloads; } ;
struct TYPE_15__ {TYPE_3__* module; } ;
typedef TYPE_4__ ASF_PACKET_STATE ;


 int FUNC_0 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_4__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_4__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_2,
   ASF_PACKET_STATE *VAR_3, uint32_t *VAR_4, uint32_t *VAR_5)
{
   VC_CONTAINER_MODULE_T *VAR_6 = VAR_2->priv->module;
   VC_CONTAINER_STATUS_T VAR_7;

   if(VAR_3->subpayload_size)
   {

      goto end;
   }


   if(VAR_3->current_payload >= VAR_3->num_payloads)
   {

      if(VAR_3->size)
      {
         int32_t VAR_8 = VAR_3->size - (FUNC_3(VAR_2) - VAR_3->start);
         if(VAR_8 < 0) return VAR_0;
         FUNC_2(VAR_2, VAR_8);
      }


      VAR_6->object_level = 0;
      VAR_7 = FUNC_4( VAR_2, VAR_3, (uint64_t)0 );
      VAR_6->object_level = 1;
      if(VAR_7 != VAR_1) return VAR_7;
   }


   if(!VAR_3->payload_size)
   {

      VAR_7 = FUNC_5( VAR_2, VAR_3 );
      if(VAR_7 != VAR_1) return VAR_7;
   }


   if(VAR_3->compressed_payloads && VAR_3->payload_size)
   {
      VAR_3->payload_size--;
      VAR_3->subpayload_size = FUNC_1(VAR_2, "Sub-Payload Data Length");
      if(VAR_3->subpayload_size > VAR_3->payload_size)
      {

         FUNC_0(VAR_2, "subpayload is too big");
         VAR_3->subpayload_size = VAR_3->payload_size;
      }
      VAR_3->media_object_off = 0;
      VAR_3->media_object_size = VAR_3->subpayload_size;
      VAR_3->media_object_pts += VAR_3->media_object_pts_delta;
   }

 end:

   if(VAR_4) *VAR_4 = VAR_6->stream_number_to_index[VAR_3->stream_num & 0x7F];
   if(VAR_5) *VAR_5 = VAR_3->subpayload_size;

   VAR_3->current_offset = FUNC_3(VAR_2) - VAR_3->start;
   return VAR_1;
}
