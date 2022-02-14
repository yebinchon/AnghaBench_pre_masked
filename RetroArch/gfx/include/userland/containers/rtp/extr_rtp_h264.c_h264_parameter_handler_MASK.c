
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* priv; TYPE_1__* format; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_T ;
typedef int const VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_13__ {int flags; } ;
struct TYPE_11__ {TYPE_2__* module; } ;
struct TYPE_10__ {int timestamp_clock; int payload_handler; TYPE_5__* extra; } ;
struct TYPE_9__ {int flags; } ;
typedef TYPE_5__ H264_PAYLOAD_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int const*,int const*) ;
 scalar_t__ FUNC_3 (int const*,int const*) ;
 scalar_t__ FUNC_4 (int const*,TYPE_4__*,int const*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_5__*,int ,int) ;

VC_CONTAINER_STATUS_T FUNC_7(VC_CONTAINER_T *VAR_6,
      VC_CONTAINER_TRACK_T *VAR_7,
      const VC_CONTAINERS_LIST_T *VAR_8)
{
   H264_PAYLOAD_T *VAR_9;
   VC_CONTAINER_STATUS_T VAR_10 = VAR_4;

   FUNC_1(VAR_6);
   FUNC_1(VAR_8);


   VAR_9 = (H264_PAYLOAD_T *)FUNC_5(sizeof(H264_PAYLOAD_T));
   if (!VAR_9)
      return VAR_2;
   VAR_7->priv->module->extra = VAR_9;
   FUNC_6(VAR_9, 0, sizeof(H264_PAYLOAD_T));


   VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_8);
   if (VAR_10 != VAR_4) return VAR_10;


   VAR_10 = FUNC_2(VAR_6, VAR_8);
   if (VAR_10 != VAR_4) return VAR_10;


   VAR_10 = FUNC_3(VAR_6, VAR_8);
   if (VAR_10 != VAR_4) return VAR_10;

   VAR_7->priv->module->payload_handler = VAR_5;
   FUNC_0(VAR_9->flags, VAR_0);

   VAR_7->format->flags |= VAR_3;
   VAR_7->priv->module->timestamp_clock = VAR_1;

   return VAR_10;
}
