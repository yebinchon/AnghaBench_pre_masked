
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; int max_frame_size; TYPE_3__* out; TYPE_4__* in; } ;
typedef TYPE_2__ VC_PACKETIZER_T ;
typedef int VC_PACKETIZER_MODULE_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_10__ {scalar_t__ codec; scalar_t__ codec_variant; int flags; } ;
struct TYPE_9__ {scalar_t__ codec; scalar_t__ codec_variant; } ;
struct TYPE_7__ {int pf_reset; int pf_packetize; int pf_close; int * module; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*,int ) ;

VC_CONTAINER_STATUS_T FUNC_6( VC_PACKETIZER_T *VAR_11 )
{
   VC_PACKETIZER_MODULE_T *VAR_12;
   VC_CONTAINER_STATUS_T VAR_13;

   if(VAR_11->in->codec != VAR_1 &&
      VAR_11->out->codec != VAR_1)
      return VAR_2;
   if(VAR_11->in->codec_variant != VAR_6 &&
      VAR_11->out->codec_variant != VAR_7)
      return VAR_2;
   if(!(VAR_11->in->flags & VAR_4))
     return VAR_2;

   VAR_11->priv->module = VAR_12 = FUNC_3(sizeof(*VAR_12));
   if(!VAR_12)
      return VAR_3;
   FUNC_4(VAR_12, 0, sizeof(*VAR_12));

   FUNC_5(VAR_11->out, VAR_11->in, 0);
   VAR_13 = FUNC_1(VAR_11);
   if (VAR_13 != VAR_5)
   {
      FUNC_2(VAR_12);
      return VAR_13;
   }

   VAR_11->out->codec_variant = VAR_7;
   VAR_11->max_frame_size = VAR_0;
   VAR_11->priv->pf_close = VAR_8;
   VAR_11->priv->pf_packetize = VAR_9;
   VAR_11->priv->pf_reset = VAR_10;
   FUNC_0(0, "using avc1 video packetizer");
   return VAR_5;
}
