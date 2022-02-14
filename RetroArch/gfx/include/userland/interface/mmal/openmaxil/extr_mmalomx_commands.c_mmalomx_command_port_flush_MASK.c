
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int actions; } ;
struct TYPE_7__ {TYPE_4__* ports; } ;
typedef size_t OMX_U32 ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_1__ MMALOMX_COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;

OMX_ERRORTYPE FUNC_3(
   OMX_HANDLETYPE VAR_4,
   OMX_U32 VAR_5)
{
   MMALOMX_COMPONENT_T *VAR_6 = (MMALOMX_COMPONENT_T *)VAR_4;

   FUNC_0(VAR_6, &VAR_6->ports[VAR_5]);
   VAR_6->ports[VAR_5].actions =
      VAR_1|VAR_0|VAR_2;
   FUNC_1(VAR_6, &VAR_6->ports[VAR_5]);

   FUNC_2(VAR_6);

   return VAR_3;
}
