
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; size_t ports_num; TYPE_1__* ports; } ;
struct TYPE_4__ {scalar_t__ enabled; } ;
typedef size_t OMX_U32 ;
typedef int OMX_TUNNELSETUPTYPE ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_2__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,scalar_t__,int,scalar_t__,int,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_2(
   OMX_HANDLETYPE VAR_9,
   OMX_U32 VAR_10,
   OMX_HANDLETYPE VAR_11,
   OMX_U32 VAR_12,
   OMX_TUNNELSETUPTYPE* VAR_13)
{
   MMALOMX_COMPONENT_T *VAR_14 = (MMALOMX_COMPONENT_T *)VAR_9;
   FUNC_1(VAR_14);

   FUNC_0("hComponent %p, nPort %i, hTunneledComp %p, nTunneledPort %i, "
             "pTunnelSetup %p", VAR_9, (int)VAR_10, VAR_11,
             (int)VAR_12, VAR_13);


   if (!VAR_9)
      return VAR_3;
   if (VAR_14->state == VAR_7)
      return VAR_4;
   if (VAR_10 >= VAR_14->ports_num)
      return VAR_1;
   if (VAR_14->state != VAR_8 && VAR_14->ports[VAR_10].enabled)
      return VAR_2;
   if (VAR_11 && !VAR_13)
      return VAR_0;

   if (!VAR_11)
      return VAR_5;
   return VAR_6;
}
