
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv; int max_frame_size; TYPE_4__* in; int out; } ;
typedef TYPE_2__ VC_PACKETIZER_T ;
struct TYPE_10__ {int pf_read_header; } ;
typedef TYPE_3__ VC_PACKETIZER_MODULE_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_11__ {scalar_t__ codec; } ;
struct TYPE_8__ {int pf_reset; int pf_packetize; int pf_close; TYPE_3__* module; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,TYPE_4__*,int ) ;

VC_CONTAINER_STATUS_T FUNC_4( VC_PACKETIZER_T *VAR_11 )
{
   VC_PACKETIZER_MODULE_T *VAR_12;

   if(VAR_11->in->codec != VAR_2 &&
      VAR_11->in->codec != VAR_1)
      return VAR_3;

   VAR_11->priv->module = VAR_12 = FUNC_1(sizeof(*VAR_12));
   if(!VAR_12)
      return VAR_4;
   FUNC_2(VAR_12, 0, sizeof(*VAR_12));

   if(VAR_11->in->codec == VAR_2)
      VAR_12->pf_read_header = VAR_10;
   else
      VAR_12->pf_read_header = VAR_6;

   FUNC_3( VAR_11->out, VAR_11->in, 0);
   VAR_11->max_frame_size = VAR_0;
   VAR_11->priv->pf_close = VAR_7;
   VAR_11->priv->pf_packetize = VAR_8;
   VAR_11->priv->pf_reset = VAR_9;
   FUNC_0(0, "using mpeg audio packetizer");
   return VAR_5;
}
