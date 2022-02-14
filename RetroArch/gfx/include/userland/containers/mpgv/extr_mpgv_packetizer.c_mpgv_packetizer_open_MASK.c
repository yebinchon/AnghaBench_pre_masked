
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; int max_frame_size; TYPE_3__* in; int out; } ;
typedef TYPE_2__ VC_PACKETIZER_T ;
typedef int VC_PACKETIZER_MODULE_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_7__ {scalar_t__ codec; } ;
struct TYPE_5__ {int pf_reset; int pf_packetize; int pf_close; int * module; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,TYPE_3__*,int ) ;

VC_CONTAINER_STATUS_T FUNC_4( VC_PACKETIZER_T *VAR_9 )
{
   VC_PACKETIZER_MODULE_T *VAR_10;

   if(VAR_9->in->codec != VAR_1 &&
      VAR_9->in->codec != VAR_2)
      return VAR_3;

   VAR_9->priv->module = VAR_10 = FUNC_1(sizeof(*VAR_10));
   if(!VAR_10)
      return VAR_4;
   FUNC_2(VAR_10, 0, sizeof(*VAR_10));

   FUNC_3( VAR_9->out, VAR_9->in, 0);
   VAR_9->max_frame_size = VAR_0;
   VAR_9->priv->pf_close = VAR_6;
   VAR_9->priv->pf_packetize = VAR_7;
   VAR_9->priv->pf_reset = VAR_8;
   FUNC_0(0, "using mpeg video packetizer");
   return VAR_5;
}
