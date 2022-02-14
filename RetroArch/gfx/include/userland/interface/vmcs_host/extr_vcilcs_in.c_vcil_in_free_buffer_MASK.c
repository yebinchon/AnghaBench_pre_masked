
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int port; TYPE_4__* outputPrivate; TYPE_4__* inputPrivate; TYPE_3__* reference; } ;
struct TYPE_15__ {scalar_t__ err; int func; } ;
struct TYPE_14__ {int * pBuffer; } ;
struct TYPE_13__ {scalar_t__ (* GetParameter ) (TYPE_3__*,int ,TYPE_2__*) ;scalar_t__ (* FreeBuffer ) (TYPE_3__*,int ,TYPE_4__*) ;} ;
struct TYPE_11__ {int nVersion; } ;
struct TYPE_12__ {int nSize; scalar_t__ eDir; int nPortIndex; TYPE_1__ nVersion; } ;
typedef int OMX_U8 ;
typedef TYPE_2__ OMX_PARAM_PORTDEFINITIONTYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef TYPE_3__ OMX_COMPONENTTYPE ;
typedef TYPE_4__ OMX_BUFFERHEADERTYPE ;
typedef TYPE_5__ IL_RESPONSE_HEADER_T ;
typedef TYPE_6__ IL_FREE_BUFFER_EXECUTE_T ;
typedef int ILCS_COMMON_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,TYPE_4__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

void FUNC_4(ILCS_COMMON_T *VAR_5, void *VAR_6, int VAR_7, void *VAR_8, int *VAR_9)
{
   IL_FREE_BUFFER_EXECUTE_T *VAR_10 = VAR_6;
   IL_RESPONSE_HEADER_T *VAR_11 = VAR_8;
   OMX_COMPONENTTYPE *VAR_12 = VAR_10->reference;
   OMX_BUFFERHEADERTYPE *VAR_13;
   OMX_U8 *VAR_14;
   OMX_PARAM_PORTDEFINITIONTYPE VAR_15;
   OMX_ERRORTYPE VAR_16;

   VAR_15.nSize = sizeof(OMX_PARAM_PORTDEFINITIONTYPE);
   VAR_15.nVersion.nVersion = VAR_4;
   VAR_15.nPortIndex = VAR_10->port;
   VAR_16 = VAR_12->GetParameter(VAR_12, VAR_3, &VAR_15);
   FUNC_2(VAR_16 == VAR_2);
   if (VAR_15.eDir == VAR_1)
      VAR_13 = VAR_10->inputPrivate;
   else
      VAR_13 = VAR_10->outputPrivate;

   VAR_14 = VAR_13->pBuffer;

   *VAR_9 = sizeof(IL_RESPONSE_HEADER_T);
   VAR_11->func = VAR_0;
   VAR_11->err = VAR_12->FreeBuffer(VAR_12, VAR_10->port, VAR_13);
   if (VAR_11->err == VAR_2)
      FUNC_3(VAR_14);
}
