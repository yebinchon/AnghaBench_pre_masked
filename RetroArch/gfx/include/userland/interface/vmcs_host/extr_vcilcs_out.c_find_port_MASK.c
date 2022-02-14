
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t port; } ;
typedef TYPE_1__ VC_PRIVATE_PORT_T ;
struct TYPE_6__ {size_t numPorts; TYPE_1__* port; } ;
typedef TYPE_2__ VC_PRIVATE_COMPONENT_T ;
typedef size_t OMX_U32 ;



__attribute__((used)) static VC_PRIVATE_PORT_T *FUNC_0(VC_PRIVATE_COMPONENT_T *VAR_0, OMX_U32 VAR_1)
{
   OMX_U32 VAR_2=0;
   while (VAR_2<VAR_0->numPorts && VAR_0->port[VAR_2].port != VAR_1)
      VAR_2++;

   if (VAR_2 < VAR_0->numPorts)
      return &VAR_0->port[VAR_2];

   return ((void*)0);
}
