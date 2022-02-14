
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_15__ {scalar_t__ size_length; scalar_t__ constant_size; scalar_t__ auxiliary_length; scalar_t__ constant_duration; scalar_t__ object_type; scalar_t__ dts_delta_length; scalar_t__ cts_delta_length; scalar_t__ index_delta_length; scalar_t__ index_length; } ;
struct TYPE_13__ {TYPE_1__* module; } ;
struct TYPE_12__ {int payload_handler; TYPE_4__* extra; } ;
typedef TYPE_4__ MP4_PAYLOAD_T ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_3 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__*,int const*) ;
 scalar_t__ FUNC_5 (int *,TYPE_3__*,int const*) ;
 scalar_t__ FUNC_6 (int *,TYPE_3__*,int const*) ;
 scalar_t__ FUNC_7 (int *,TYPE_3__*,int const*) ;
 int VAR_3 ;
 int FUNC_8 (int const*,char*,scalar_t__*) ;

VC_CONTAINER_STATUS_T FUNC_9(VC_CONTAINER_T *VAR_4,
      VC_CONTAINER_TRACK_T *VAR_5,
      const VC_CONTAINERS_LIST_T *VAR_6)
{
   MP4_PAYLOAD_T *VAR_7;
   VC_CONTAINER_STATUS_T VAR_8;


   VAR_7 = (MP4_PAYLOAD_T *)FUNC_1(sizeof(MP4_PAYLOAD_T));
   if (!VAR_7)
      return VAR_1;
   VAR_5->priv->module->extra = VAR_7;
   FUNC_2(VAR_7, 0, sizeof(MP4_PAYLOAD_T));


   VAR_8 = FUNC_7(VAR_4, VAR_5, VAR_6);
   if (VAR_8 != VAR_2) return VAR_8;

   VAR_8 = FUNC_5(VAR_4, VAR_5, VAR_6);
   if (VAR_8 != VAR_2) return VAR_8;

   VAR_8 = FUNC_6(VAR_4, VAR_5, VAR_6);
   if (VAR_8 != VAR_2) return VAR_8;


   VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_6);
   if (VAR_8 != VAR_2) return VAR_8;


   FUNC_8(VAR_6, "sizeLength", &VAR_7->size_length);
   FUNC_8(VAR_6, "indexLength", &VAR_7->index_length);
   FUNC_8(VAR_6, "indexDeltaLength", &VAR_7->index_delta_length);
   FUNC_8(VAR_6, "CTSDeltaLength", &VAR_7->cts_delta_length);
   FUNC_8(VAR_6, "DTSDeltaLength", &VAR_7->dts_delta_length);
   FUNC_8(VAR_6, "objectType", &VAR_7->object_type);
   FUNC_8(VAR_6, "constantSize", &VAR_7->constant_size);
   FUNC_8(VAR_6, "constantDuration", &VAR_7->constant_duration);
   FUNC_8(VAR_6, "auxiliaryDataSizeLength", &VAR_7->auxiliary_length);

   if (VAR_7->constant_size && VAR_7->size_length)
   {
      FUNC_0(VAR_4, "MPEG4: constantSize and sizeLength cannot both be set.");
      return VAR_0;
   }

   VAR_8 = FUNC_3(VAR_4, VAR_5);
   if (VAR_8 != VAR_2) return VAR_8;

   VAR_5->priv->module->payload_handler = VAR_3;

   return VAR_2;
}
