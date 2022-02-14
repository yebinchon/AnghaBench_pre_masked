
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_13__ {int (* EmptyBufferDone ) (TYPE_3__*,int ,TYPE_4__*) ;} ;
struct TYPE_14__ {int callback_state; TYPE_1__ callbacks; } ;
typedef TYPE_2__ VC_PRIVATE_COMPONENT_T ;
struct TYPE_12__ {TYPE_4__* pOutputPortPrivate; } ;
struct TYPE_17__ {TYPE_11__ bufferHeader; TYPE_3__* reference; } ;
struct TYPE_16__ {int * pOutputPortPrivate; int * pInputPortPrivate; int * pPlatformPrivate; int * pAppPrivate; int * pBuffer; } ;
struct TYPE_15__ {scalar_t__ pComponentPrivate; } ;
typedef int OMX_U8 ;
typedef int OMX_PTR ;
typedef TYPE_3__ OMX_COMPONENTTYPE ;
typedef TYPE_4__ OMX_BUFFERHEADERTYPE ;
typedef TYPE_5__ IL_PASS_BUFFER_EXECUTE_T ;
typedef int ILCS_COMMON_T ;


 int FUNC_0 (TYPE_4__*,TYPE_11__*,int) ;
 int FUNC_1 (TYPE_3__*,int ,TYPE_4__*) ;
 int FUNC_2 (int (*) (TYPE_3__*,int ,TYPE_4__*)) ;

void FUNC_3(ILCS_COMMON_T *VAR_0, void *VAR_1, int VAR_2, void *VAR_3, int *VAR_4)
{
   IL_PASS_BUFFER_EXECUTE_T *VAR_5 = VAR_1;
   OMX_COMPONENTTYPE *VAR_6 = VAR_5->reference;
   VC_PRIVATE_COMPONENT_T *VAR_7 = (VC_PRIVATE_COMPONENT_T *) VAR_6->pComponentPrivate;
   OMX_BUFFERHEADERTYPE *VAR_8 = VAR_5->bufferHeader.pOutputPortPrivate;
   OMX_U8 *VAR_9 = VAR_8->pBuffer;
   OMX_PTR *VAR_10 = VAR_8->pAppPrivate;
   OMX_PTR *VAR_11 = VAR_8->pPlatformPrivate;
   OMX_PTR *VAR_12 = VAR_8->pInputPortPrivate;
   OMX_PTR *VAR_13 = VAR_8->pOutputPortPrivate;

   FUNC_0(VAR_8, &VAR_5->bufferHeader, sizeof(OMX_BUFFERHEADERTYPE));

   VAR_8->pBuffer = VAR_9;
   VAR_8->pAppPrivate = VAR_10;
   VAR_8->pPlatformPrivate = VAR_11;
   VAR_8->pInputPortPrivate = VAR_12;
   VAR_8->pOutputPortPrivate = VAR_13;

   *VAR_4 = 0;

   FUNC_2(VAR_7->callbacks.EmptyBufferDone);
   VAR_7->callbacks.EmptyBufferDone(VAR_6, VAR_7->callback_state, VAR_8);
}
