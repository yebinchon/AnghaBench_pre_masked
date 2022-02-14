
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_14__ {TYPE_3__* format; TYPE_2__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_BITS_T ;
typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_16__ {int stream_type; } ;
struct TYPE_15__ {char* name; int value; } ;
struct TYPE_13__ {int extradata_size; } ;
struct TYPE_12__ {int * extradata; TYPE_1__* module; } ;
struct TYPE_11__ {scalar_t__ extra; } ;
typedef TYPE_5__ PARAMETER_T ;
typedef TYPE_6__ MP4_PAYLOAD_T ;


 int FUNC_0 (int *,int *,int *,int) ;
 int FUNC_1 (int *,char*,...) ;

 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int *,TYPE_4__*,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,TYPE_4__*,int) ;
 int FUNC_6 (int const*,TYPE_5__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7(VC_CONTAINER_T *VAR_2,
      VC_CONTAINER_TRACK_T *VAR_3,
      const VC_CONTAINERS_LIST_T *VAR_4)
{
   MP4_PAYLOAD_T *VAR_5 = (MP4_PAYLOAD_T *)VAR_3->priv->module->extra;
   PARAMETER_T VAR_6;
   uint32_t VAR_7;
   VC_CONTAINER_STATUS_T VAR_8;
   uint8_t *VAR_9;
   VC_CONTAINER_BITS_T VAR_10;

   VAR_6.name = "config";
   if (!FUNC_6(VAR_4, &VAR_6) || !VAR_6.value)
   {
      FUNC_1(VAR_2, "MPEG-4: config parameter missing");
      return VAR_0;
   }

   VAR_7 = FUNC_4(VAR_6.value);
   if (VAR_7 & 1)
   {
      FUNC_1(VAR_2, "MPEG-4: config parameter invalid");
      return VAR_0;
   }
   VAR_7 /= 2;


   VAR_8 = FUNC_5(VAR_2, VAR_3, VAR_7);
   if(VAR_8 != VAR_1) return VAR_8;

   VAR_9 = VAR_3->priv->extradata;
   VAR_3->format->extradata_size = VAR_7;
   FUNC_2(VAR_6.value, VAR_9, VAR_7);


   FUNC_0(VAR_2, &VAR_10, VAR_9, VAR_7);

   switch (VAR_5->stream_type)
   {
   case 128:
      if (!FUNC_3(VAR_2, VAR_3, &VAR_10))
         return VAR_0;
      break;
   default:

      FUNC_1(VAR_2, "MPEG-4: stream type %d not supported", VAR_5->stream_type);
      return VAR_0;
   }

   return VAR_1;
}
