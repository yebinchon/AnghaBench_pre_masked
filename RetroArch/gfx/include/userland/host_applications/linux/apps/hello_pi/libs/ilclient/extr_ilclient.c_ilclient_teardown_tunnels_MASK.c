
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int sink_port; TYPE_1__* sink; int source_port; TYPE_2__* source; } ;
struct TYPE_6__ {int comp; } ;
struct TYPE_5__ {int comp; } ;
typedef TYPE_3__ TUNNEL_T ;
typedef scalar_t__ OMX_ERRORTYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int) ;

void FUNC_2(TUNNEL_T *VAR_1)
{
   int VAR_2;
   OMX_ERRORTYPE VAR_3;

   VAR_2=0;;
   while (VAR_1[VAR_2].source)
   {
      VAR_3 = FUNC_0(VAR_1[VAR_2].source->comp, VAR_1[VAR_2].source_port, ((void*)0), 0);
      FUNC_1(VAR_3 == VAR_0);

      VAR_3 = FUNC_0(VAR_1[VAR_2].sink->comp, VAR_1[VAR_2].sink_port, ((void*)0), 0);
      FUNC_1(VAR_3 == VAR_0);
      VAR_2++;
   }
}
