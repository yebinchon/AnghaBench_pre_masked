
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int error_mask; int comp; } ;
struct TYPE_4__ {TYPE_2__* sink; TYPE_2__* source; int sink_port; int source_port; } ;
typedef TYPE_1__ TUNNEL_T ;
typedef scalar_t__ OMX_ERRORTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int) ;

void FUNC_3(TUNNEL_T *VAR_3)
{
   OMX_ERRORTYPE VAR_4;

   if(VAR_3->source == 0 || VAR_3->sink == 0)
      return;

   VAR_3->source->error_mask |= VAR_0;
   VAR_3->sink->error_mask |= VAR_0;

   VAR_4 = FUNC_0(VAR_3->source->comp, VAR_1, VAR_3->source_port, ((void*)0));
   FUNC_2(VAR_4 == VAR_2);

   VAR_4 = FUNC_0(VAR_3->sink->comp, VAR_1, VAR_3->sink_port, ((void*)0));
   FUNC_2(VAR_4 == VAR_2);

   if(FUNC_1(VAR_3->source, VAR_1, VAR_3->source_port) < 0)
      FUNC_2(0);

   if(FUNC_1(VAR_3->sink, VAR_1, VAR_3->sink_port) < 0)
      FUNC_2(0);

   VAR_3->source->error_mask &= ~VAR_0;
   VAR_3->sink->error_mask &= ~VAR_0;
}
