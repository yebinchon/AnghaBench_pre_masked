
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int actions; int enabled; } ;
struct TYPE_8__ {scalar_t__ state; TYPE_5__* ports; } ;
typedef size_t OMX_U32 ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_1__ MMALOMX_COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (TYPE_1__*,int ,int ,size_t,int *) ;
 int FUNC_3 (TYPE_1__*) ;

OMX_ERRORTYPE FUNC_4(
   OMX_HANDLETYPE VAR_9,
   OMX_U32 VAR_10)
{
   MMALOMX_COMPONENT_T *VAR_11 = (MMALOMX_COMPONENT_T *)VAR_9;
   VAR_11->ports[VAR_10].enabled = VAR_3;

   if (VAR_11->state == VAR_7 ||
       VAR_11->state == VAR_8)
   {
      FUNC_2(VAR_11, VAR_6, VAR_4, VAR_10, ((void*)0));
      return VAR_5;
   }

   FUNC_0(VAR_11, &VAR_11->ports[VAR_10]);
   VAR_11->ports[VAR_10].actions =
      VAR_0|VAR_1|VAR_2;
   FUNC_1(VAR_11, &VAR_11->ports[VAR_10]);

   FUNC_3(VAR_11);

   return VAR_5;
}
