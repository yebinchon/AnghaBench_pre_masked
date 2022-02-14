
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int actions; int enabled; } ;
struct TYPE_12__ {int actions; scalar_t__ state; scalar_t__ request; } ;
struct TYPE_11__ {scalar_t__ state; unsigned int state_transition; unsigned int ports_num; TYPE_6__* ports; scalar_t__ cmd_thread_used; int name; int mmal; } ;
typedef scalar_t__ OMX_STATETYPE ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_1__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_6__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 unsigned int FUNC_10 (scalar_t__,scalar_t__) ;
 TYPE_2__* VAR_12 ;
 int FUNC_11 (int) ;

OMX_ERRORTYPE FUNC_12(
   OMX_HANDLETYPE VAR_13,
   OMX_STATETYPE VAR_14)
{
   MMALOMX_COMPONENT_T *VAR_15 = (MMALOMX_COMPONENT_T *)VAR_13;
   unsigned int VAR_16, VAR_17;

   if (VAR_15->state == VAR_14)
   {
      FUNC_8(VAR_15, VAR_7, VAR_6, 0, ((void*)0));
      return VAR_5;
   }


   if (VAR_14 == VAR_10)
   {
      VAR_15->state = VAR_14;
      FUNC_8(VAR_15, VAR_7, VAR_4, 0, ((void*)0));
      return VAR_5;
   }


   FUNC_11(!VAR_15->state_transition);


   VAR_17 = FUNC_10(VAR_15->state, VAR_14);
   if (!VAR_17)
   {
      FUNC_8(VAR_15, VAR_7, VAR_3, 0, ((void*)0));
      return VAR_5;
   }


   if (VAR_14 == VAR_8 || VAR_15->state == VAR_8)
   {
      MMAL_STATUS_T VAR_18;

      if (VAR_14 == VAR_8)
         VAR_18 = FUNC_6(VAR_15->mmal);
      else
         VAR_18 = FUNC_5(VAR_15->mmal);

      if (VAR_18 != VAR_2)
      {
         FUNC_0("could not %s %s", VAR_14 == VAR_8 ? "enable" : "disable", VAR_15->name);
         FUNC_8(VAR_15, VAR_7, FUNC_7(VAR_18), 0, ((void*)0));
         return VAR_5;
      }
   }

   FUNC_1(VAR_15);
   VAR_15->state_transition = VAR_17;

   for (VAR_16 = 0; VAR_16 < VAR_15->ports_num; VAR_16++)
   {
      if (!VAR_15->ports[VAR_16].enabled)
         continue;

      FUNC_2(VAR_15, VAR_15->ports + VAR_16);
      VAR_15->ports[VAR_16].actions = VAR_12[VAR_17].actions;




      if (VAR_12[VAR_17].state == VAR_9 &&
          VAR_12[VAR_17].request == VAR_11 &&
          VAR_15->cmd_thread_used)
         VAR_15->ports[VAR_16].actions |= VAR_1|VAR_0;
      FUNC_4(VAR_15, VAR_15->ports + VAR_16);
   }
   FUNC_3(VAR_15);

   FUNC_9(VAR_15);
   return VAR_5;
}
