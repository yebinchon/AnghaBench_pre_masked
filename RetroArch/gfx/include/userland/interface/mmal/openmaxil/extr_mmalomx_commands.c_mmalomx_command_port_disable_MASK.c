
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int actions; int enabled; } ;
struct TYPE_8__ {scalar_t__ state; TYPE_5__* ports; scalar_t__ cmd_thread_used; } ;
typedef size_t OMX_U32 ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_1__ MMALOMX_COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_5__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (TYPE_1__*,int ,int ,size_t,int *) ;
 int FUNC_3 (TYPE_1__*) ;

OMX_ERRORTYPE FUNC_4(
   OMX_HANDLETYPE VAR_11,
   OMX_U32 VAR_12)
{
   MMALOMX_COMPONENT_T *VAR_13 = (MMALOMX_COMPONENT_T *)VAR_11;
   VAR_13->ports[VAR_12].enabled = VAR_5;

   if (VAR_13->state == VAR_9 ||
       VAR_13->state == VAR_10)
   {
      FUNC_2(VAR_13, VAR_8, VAR_6, VAR_12, ((void*)0));
      return VAR_7;
   }

   FUNC_0(VAR_13, &VAR_13->ports[VAR_12]);
   VAR_13->ports[VAR_12].actions =
      VAR_2|VAR_0|VAR_4;
   if (VAR_13->cmd_thread_used)
      VAR_13->ports[VAR_12].actions |=
         VAR_3|VAR_1;
   FUNC_1(VAR_13, &VAR_13->ports[VAR_12]);

   FUNC_3(VAR_13);

   return VAR_7;
}
