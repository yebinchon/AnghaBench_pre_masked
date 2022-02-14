
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_17__ {int is_enabled; TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_T ;
struct TYPE_18__ {scalar_t__ timestamp_clock; scalar_t__ probation; scalar_t__ max_seq_num; int flags; int expected_ssrc; scalar_t__ payload_handler; int * buffer; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_19__ {int tracks_num; TYPE_2__* priv; TYPE_3__** tracks; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_20__ {TYPE_3__* track; } ;
typedef TYPE_6__ VC_CONTAINER_MODULE_T ;
typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_16__ {int pf_control; int pf_seek; int pf_read; int (* pf_close ) (TYPE_5__*) ;TYPE_6__* module; int uri; } ;
struct TYPE_15__ {TYPE_4__* module; } ;


 int FUNC_0 (TYPE_5__*,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_3__*,int *,int) ;
 int * FUNC_3 (int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_6 (int *,int ,int*) ;
 scalar_t__ FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (TYPE_5__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_9 (int ,int ) ;
 TYPE_3__* FUNC_10 (TYPE_5__*,scalar_t__) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;

VC_CONTAINER_STATUS_T FUNC_14( VC_CONTAINER_T *VAR_17 )
{
   VC_CONTAINER_MODULE_T *VAR_18 = 0;
   VC_CONTAINER_TRACK_T *VAR_19 = 0;
   VC_CONTAINER_TRACK_MODULE_T *VAR_20 = 0;
   VC_CONTAINER_STATUS_T VAR_21 = VAR_12;
   VC_CONTAINERS_LIST_T *VAR_22 = ((void*)0);
   uint32_t VAR_23;
   uint32_t VAR_24;


   if (!FUNC_13(VAR_17->priv->uri) ||
       (FUNC_9(FUNC_13(VAR_17->priv->uri), VAR_4) &&
        FUNC_9(FUNC_13(VAR_17->priv->uri), VAR_3)))
      return VAR_10;


   VAR_22 = FUNC_3(VAR_17->priv->uri);
   if (!VAR_22) { VAR_21 = VAR_11; goto error; }


   if (!FUNC_6(VAR_22, VAR_2, &VAR_23) || VAR_23 > 127)
   {
      VAR_21 = VAR_9;
      goto error;
   }


   VAR_18 = (VC_CONTAINER_MODULE_T *)FUNC_4(sizeof(VC_CONTAINER_MODULE_T));
   if (!VAR_18) { VAR_21 = VAR_11; goto error; }

   FUNC_5(VAR_18, 0, sizeof(*VAR_18));
   VAR_17->priv->module = VAR_18;
   VAR_17->tracks = &VAR_18->track;


   VAR_19 = FUNC_10(VAR_17, sizeof(VC_CONTAINER_TRACK_MODULE_T) + VAR_0);
   if (!VAR_19)
   {
      VAR_21 = VAR_11;
      goto error;
   }
   VAR_18->track = VAR_19;
   VAR_17->tracks_num = 1;
   VAR_20 = VAR_19->priv->module;


   VAR_20->buffer = (uint8_t *)(VAR_20 + 1);
   VAR_21 = FUNC_2(VAR_17, VAR_19, VAR_22, VAR_23);
   if (VAR_21 != VAR_12)
      goto error;

   FUNC_11(VAR_20->timestamp_clock != 0);


   if (!VAR_20->payload_handler)
      VAR_20->payload_handler = VAR_13;

   if (FUNC_7(VAR_22, VAR_6, &VAR_20->expected_ssrc))
      FUNC_1(VAR_20->flags, VAR_7);

   VAR_20->probation = VAR_1;
   if (FUNC_6(VAR_22, VAR_5, &VAR_24))
   {

      VAR_20->max_seq_num = (uint16_t)VAR_24;
      VAR_20->probation = 0;
   }

   VAR_19->is_enabled = 1;

   FUNC_12(VAR_22);

   VAR_17->priv->pf_close = FUNC_8;
   VAR_17->priv->pf_read = VAR_15;
   VAR_17->priv->pf_seek = VAR_16;
   VAR_17->priv->pf_control = VAR_14;

   return VAR_12;

error:
   if (VAR_22) FUNC_12(VAR_22);
   if(VAR_21 == VAR_12 || VAR_21 == VAR_8)
      VAR_21 = VAR_9;
   FUNC_0(VAR_17, "error opening RTP (%i)", VAR_21);
   FUNC_8(VAR_17);
   return VAR_21;
}
