
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {TYPE_3__* format; TYPE_2__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef scalar_t__ VC_CONTAINER_ES_TYPE_T ;
typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_11__ {int stream_type; } ;
struct TYPE_9__ {scalar_t__ es_type; } ;
struct TYPE_8__ {TYPE_1__* module; } ;
struct TYPE_7__ {scalar_t__ extra; } ;
typedef TYPE_5__ MP4_PAYLOAD_T ;


 int FUNC_0 (int *,char*,int) ;

 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const*,char*,int*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2(VC_CONTAINER_T *VAR_3,
      VC_CONTAINER_TRACK_T *VAR_4,
      const VC_CONTAINERS_LIST_T *VAR_5)
{
   MP4_PAYLOAD_T *VAR_6 = (MP4_PAYLOAD_T *)VAR_4->priv->module->extra;
   uint32_t VAR_7;
   VC_CONTAINER_ES_TYPE_T VAR_8;

   if (!FUNC_1(VAR_5, "streamType", &VAR_7))
      return VAR_0;

   switch (VAR_7)
   {
   case 128:
      VAR_6->stream_type = 128;
      VAR_8 = VAR_1;
      break;
   default:
      FUNC_0(VAR_3, "Unsupported MPEG-4 stream type: %u", VAR_7);
      return VAR_0;
   }

   if (VAR_4->format->es_type != VAR_8)
      return VAR_0;

   return VAR_2;
}
