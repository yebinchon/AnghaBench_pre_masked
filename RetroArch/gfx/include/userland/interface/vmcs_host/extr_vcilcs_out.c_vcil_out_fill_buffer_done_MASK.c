
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int (* FillBufferDone ) (TYPE_3__*,int ,int *) ;} ;
struct TYPE_10__ {int callback_state; TYPE_1__ callbacks; } ;
typedef TYPE_2__ VC_PRIVATE_COMPONENT_T ;
struct TYPE_12__ {int ilcs; } ;
struct TYPE_11__ {scalar_t__ pComponentPrivate; } ;
typedef TYPE_3__ OMX_COMPONENTTYPE ;
typedef int OMX_BUFFERHEADERTYPE ;
typedef TYPE_4__ ILCS_COMMON_T ;


 int * FUNC_0 (int ,void*,int,TYPE_3__**) ;
 int FUNC_1 (TYPE_3__*,int ,int *) ;
 int FUNC_2 (int (*) (TYPE_3__*,int ,int *)) ;

void FUNC_3(ILCS_COMMON_T *VAR_0, void *VAR_1, int VAR_2, void *VAR_3, int *VAR_4)
{
   OMX_COMPONENTTYPE *VAR_5;
   VC_PRIVATE_COMPONENT_T *VAR_6;
   OMX_BUFFERHEADERTYPE *VAR_7;

   VAR_7 = FUNC_0(VAR_0->ilcs, VAR_1, VAR_2, &VAR_5);
   *VAR_4 = 0;

   if(VAR_7)
   {
      VAR_6 = (VC_PRIVATE_COMPONENT_T *) VAR_5->pComponentPrivate;

      FUNC_2(VAR_6->callbacks.FillBufferDone);
      VAR_6->callbacks.FillBufferDone(VAR_5, VAR_6->callback_state, VAR_7);
   }
}
