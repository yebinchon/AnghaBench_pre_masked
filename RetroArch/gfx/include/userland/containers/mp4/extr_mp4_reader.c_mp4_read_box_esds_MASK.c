
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_25__ {TYPE_4__* format; TYPE_3__* priv; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
struct TYPE_26__ {TYPE_5__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_27__ {size_t current_track; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_24__ {int extradata; int extradata_size; int bitrate; } ;
struct TYPE_23__ {TYPE_2__* module; } ;
struct TYPE_22__ {void* object_type_indication; } ;
struct TYPE_21__ {TYPE_7__* module; } ;


 int FUNC_0 (TYPE_6__*,int ,int) ;
 int FUNC_1 (TYPE_6__*,char*) ;
 void* FUNC_2 (TYPE_6__*,char*) ;
 int FUNC_3 (TYPE_6__*,int,char*) ;
 int FUNC_4 (TYPE_6__*,char*) ;
 int FUNC_5 (TYPE_6__*,char*) ;
 int FUNC_6 (TYPE_6__*,char*) ;
 int FUNC_7 (TYPE_6__*,char*) ;
 scalar_t__ FUNC_8 (TYPE_6__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_9 (TYPE_6__*,scalar_t__*,int*,int*) ;
 scalar_t__ FUNC_10 (TYPE_6__*,TYPE_5__*,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_11( VC_CONTAINER_T *VAR_1, int64_t VAR_2 )
{
   VC_CONTAINER_MODULE_T *VAR_3 = VAR_1->priv->module;
   VC_CONTAINER_TRACK_T *VAR_4 = VAR_1->tracks[VAR_3->current_track];
   VC_CONTAINER_STATUS_T VAR_5;
   uint32_t VAR_6;
   uint8_t VAR_7;

   FUNC_7(VAR_1, "version");
   FUNC_5(VAR_1, "flags");

   VAR_5 = FUNC_9(VAR_1, &VAR_2, &VAR_6, &VAR_7);
   if(VAR_5 != VAR_0) return VAR_5;

   if(VAR_7 == 0x3)
   {
      uint8_t VAR_8;

      FUNC_4(VAR_1, "es_id");
      VAR_8 = FUNC_2(VAR_1, "flags");

      if(VAR_8 & 0x80)
         FUNC_4(VAR_1, "depend_on_es_id");

      if(VAR_8 & 0x40)
      {
         uint32_t VAR_9 = FUNC_2(VAR_1, "url_size");
         FUNC_3(VAR_1, VAR_9, "url");
      }

      if(VAR_8 & 0x20)
         FUNC_4(VAR_1, "OCR_es_id");

      VAR_5 = FUNC_9(VAR_1, &VAR_2, &VAR_6, &VAR_7);
      if(VAR_5 != VAR_0) return VAR_5;
   }

   if(VAR_7 == 0x4)
   {
      VAR_4->priv->module->object_type_indication = FUNC_2(VAR_1, "object_type_indication");
      FUNC_7(VAR_1, "stream_type");
      FUNC_5(VAR_1, "buffer_size_db");
      FUNC_6(VAR_1, "max_bitrate");
      VAR_4->format->bitrate = FUNC_1(VAR_1, "avg_bitrate");

      if(VAR_2 <= 0 || VAR_6 <= 13) return FUNC_8(VAR_1);

      VAR_5 = FUNC_9(VAR_1, &VAR_2, &VAR_6, &VAR_7);
      if(VAR_5 != VAR_0) return VAR_5;
      if(VAR_7 == 0x05 && VAR_6)
      {
         VAR_5 = FUNC_10(VAR_1, VAR_4, VAR_6);
         if(VAR_5 != VAR_0) return VAR_5;
         VAR_4->format->extradata_size = FUNC_0(VAR_1, VAR_4->format->extradata, VAR_6);
      }
   }

   return FUNC_8(VAR_1);
}
