
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* EventHandler ) (TYPE_3__*,int ,int ,int ,int ,int ) ;} ;
struct TYPE_8__ {int callback_state; TYPE_1__ callbacks; } ;
typedef TYPE_2__ VC_PRIVATE_COMPONENT_T ;
struct TYPE_10__ {int eventdata; int data2; int data1; int event; TYPE_3__* reference; } ;
struct TYPE_9__ {scalar_t__ pComponentPrivate; } ;
typedef TYPE_3__ OMX_COMPONENTTYPE ;
typedef TYPE_4__ IL_EVENT_HANDLER_EXECUTE_T ;
typedef int ILCS_COMMON_T ;


 int FUNC_0 (TYPE_3__*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int (*) (TYPE_3__*,int ,int ,int ,int ,int )) ;

void FUNC_2(ILCS_COMMON_T *VAR_0, void *VAR_1, int VAR_2, void *VAR_3, int *VAR_4)
{
   IL_EVENT_HANDLER_EXECUTE_T *VAR_5 = VAR_1;
   OMX_COMPONENTTYPE *VAR_6 = VAR_5->reference;
   VC_PRIVATE_COMPONENT_T *VAR_7 = (VC_PRIVATE_COMPONENT_T *) VAR_6->pComponentPrivate;

   *VAR_4 = 0;

   FUNC_1(VAR_7->callbacks.EventHandler);
   VAR_7->callbacks.EventHandler(VAR_6, VAR_7->callback_state, VAR_5->event, VAR_5->data1, VAR_5->data2, VAR_5->eventdata);
}
