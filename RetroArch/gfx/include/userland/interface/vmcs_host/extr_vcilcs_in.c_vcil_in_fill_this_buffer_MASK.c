
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {TYPE_2__* pOutputPortPrivate; } ;
struct TYPE_15__ {TYPE_9__ bufferHeader; TYPE_1__* reference; } ;
struct TYPE_14__ {int err; int func; } ;
struct TYPE_13__ {int * pOutputPortPrivate; int * pInputPortPrivate; int * pPlatformPrivate; int * pAppPrivate; int * pBuffer; } ;
struct TYPE_12__ {int (* FillThisBuffer ) (TYPE_1__*,TYPE_2__*) ;} ;
typedef int OMX_U8 ;
typedef int OMX_PTR ;
typedef TYPE_1__ OMX_COMPONENTTYPE ;
typedef TYPE_2__ OMX_BUFFERHEADERTYPE ;
typedef TYPE_3__ IL_RESPONSE_HEADER_T ;
typedef TYPE_4__ IL_PASS_BUFFER_EXECUTE_T ;
typedef int ILCS_COMMON_T ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_9__*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(ILCS_COMMON_T *VAR_1, void *VAR_2, int VAR_3, void *VAR_4, int *VAR_5)
{
   IL_PASS_BUFFER_EXECUTE_T *VAR_6 = VAR_2;
   IL_RESPONSE_HEADER_T *VAR_7 = VAR_4;
   OMX_COMPONENTTYPE *VAR_8 = VAR_6->reference;
   OMX_BUFFERHEADERTYPE *VAR_9 = VAR_6->bufferHeader.pOutputPortPrivate;
   OMX_U8 *VAR_10 = VAR_9->pBuffer;
   OMX_PTR *VAR_11 = VAR_9->pAppPrivate;
   OMX_PTR *VAR_12 = VAR_9->pPlatformPrivate;
   OMX_PTR *VAR_13 = VAR_9->pInputPortPrivate;
   OMX_PTR *VAR_14 = VAR_9->pOutputPortPrivate;

   FUNC_3(VAR_9);
   FUNC_1(VAR_9, &VAR_6->bufferHeader, sizeof(OMX_BUFFERHEADERTYPE));

   VAR_9->pBuffer = VAR_10;
   VAR_9->pAppPrivate = VAR_11;
   VAR_9->pPlatformPrivate = VAR_12;
   VAR_9->pInputPortPrivate = VAR_13;
   VAR_9->pOutputPortPrivate = VAR_14;

   FUNC_3(FUNC_0(VAR_9));

   *VAR_5 = sizeof(IL_RESPONSE_HEADER_T);
   VAR_7->func = VAR_0;
   VAR_7->err = VAR_8->FillThisBuffer(VAR_8, VAR_9);
}
