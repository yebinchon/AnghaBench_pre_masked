
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* EventHandler ) (int ,int ,scalar_t__,scalar_t__,scalar_t__,int ) ;} ;
struct TYPE_6__ {int callbacks_data; int omx; TYPE_1__ callbacks; } ;
typedef scalar_t__ OMX_U32 ;
typedef int OMX_PTR ;
typedef int OMX_HANDLETYPE ;
typedef scalar_t__ OMX_EVENTTYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_2__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,TYPE_2__*,int,unsigned int,unsigned int,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__,scalar_t__,int ) ;

OMX_ERRORTYPE FUNC_2(
   MMALOMX_COMPONENT_T *VAR_0,
   OMX_EVENTTYPE VAR_1,
   OMX_U32 VAR_2,
   OMX_U32 VAR_3,
   OMX_PTR VAR_4)
{
   FUNC_0("component %p, eEvent %i, nData1 %u, nData2 %u, pEventData %p",
             VAR_0, (int)VAR_1, (unsigned int)VAR_2, (unsigned int)VAR_3, VAR_4);
   return VAR_0->callbacks.EventHandler((OMX_HANDLETYPE)&VAR_0->omx,
         VAR_0->callbacks_data, VAR_1, VAR_2, VAR_3, VAR_4);
}
