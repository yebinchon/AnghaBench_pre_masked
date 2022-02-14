
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t ports_num; TYPE_1__* ports; } ;
struct TYPE_3__ {size_t marks_num; size_t marks_first; int * marks; } ;
typedef size_t OMX_U32 ;
typedef int OMX_PTR ;
typedef int OMX_MARKTYPE ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_1__ MMALOMX_PORT_T ;
typedef TYPE_2__ MMALOMX_COMPONENT_T ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

OMX_ERRORTYPE FUNC_0(
   OMX_HANDLETYPE VAR_4,
   OMX_U32 VAR_5,
   OMX_PTR *VAR_6)
{
   MMALOMX_COMPONENT_T *VAR_7 = (MMALOMX_COMPONENT_T *)VAR_4;
   OMX_MARKTYPE *VAR_8 = (OMX_MARKTYPE *)VAR_6;
   MMALOMX_PORT_T *VAR_9;

   if (VAR_5 >= VAR_7->ports_num)
      return VAR_1;
   VAR_9 = &VAR_7->ports[VAR_5];

   if (VAR_9->marks_num == VAR_0)
      return VAR_2;

   VAR_9->marks[(VAR_9->marks_first + VAR_9->marks_num) % VAR_0] = *VAR_8;
   VAR_9->marks_num++;

   return VAR_3;
}
