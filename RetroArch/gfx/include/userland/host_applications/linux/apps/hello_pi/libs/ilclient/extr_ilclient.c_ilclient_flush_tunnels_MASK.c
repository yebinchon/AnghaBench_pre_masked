
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int comp; } ;
struct TYPE_4__ {int sink_port; TYPE_2__* sink; int source_port; TYPE_2__* source; } ;
typedef TYPE_1__ TUNNEL_T ;
typedef scalar_t__ OMX_ERRORTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int) ;

void FUNC_3(TUNNEL_T *VAR_5, int VAR_6)
{
   OMX_ERRORTYPE VAR_7;
   int VAR_8;

   VAR_8=0;
   while (VAR_5[VAR_8].source && (VAR_6 == 0 || VAR_8 < VAR_6))
   {
      VAR_7 = FUNC_0(VAR_5[VAR_8].source->comp, VAR_1, VAR_5[VAR_8].source_port, ((void*)0));
      FUNC_2(VAR_7 == VAR_2);

      VAR_7 = FUNC_0(VAR_5[VAR_8].sink->comp, VAR_1, VAR_5[VAR_8].sink_port, ((void*)0));
      FUNC_2(VAR_7 == VAR_2);

      FUNC_1(VAR_5[VAR_8].source, VAR_3,
                              VAR_1, 0, VAR_5[VAR_8].source_port, 0,
                              VAR_0, VAR_4);
      FUNC_1(VAR_5[VAR_8].sink, VAR_3,
                              VAR_1, 0, VAR_5[VAR_8].sink_port, 0,
                              VAR_0, VAR_4);
      VAR_8++;
   }
}
