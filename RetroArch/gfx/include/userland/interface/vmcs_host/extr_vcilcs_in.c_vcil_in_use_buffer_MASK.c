
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int * pOutputPortPrivate; int * pInputPortPrivate; } ;
struct TYPE_14__ {int port; int size; int bufferReference; TYPE_3__* reference; } ;
struct TYPE_13__ {scalar_t__ err; TYPE_9__ bufferHeader; int * reference; int func; } ;
struct TYPE_12__ {scalar_t__ (* UseBuffer ) (TYPE_3__*,int **,int ,int ,int ,int *) ;scalar_t__ (* GetParameter ) (TYPE_3__*,int ,TYPE_2__*) ;} ;
struct TYPE_10__ {int nVersion; } ;
struct TYPE_11__ {int nSize; scalar_t__ eDir; int nPortIndex; TYPE_1__ nVersion; } ;
typedef int OMX_U8 ;
typedef TYPE_2__ OMX_PARAM_PORTDEFINITIONTYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef TYPE_3__ OMX_COMPONENTTYPE ;
typedef int OMX_BUFFERHEADERTYPE ;
typedef TYPE_4__ IL_ADD_BUFFER_RESPONSE_T ;
typedef TYPE_5__ IL_ADD_BUFFER_EXECUTE_T ;
typedef int ILCS_COMMON_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_9__*,int *,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int **,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int,char*) ;

void FUNC_6(ILCS_COMMON_T *VAR_6, void *VAR_7, int VAR_8, void *VAR_9, int *VAR_10)
{
   IL_ADD_BUFFER_EXECUTE_T *VAR_11 = VAR_7;
   IL_ADD_BUFFER_RESPONSE_T *VAR_12 = VAR_9;
   OMX_COMPONENTTYPE *VAR_13 = VAR_11->reference;
   OMX_U8 *VAR_14;
   OMX_BUFFERHEADERTYPE *VAR_15;

   *VAR_10 = sizeof(IL_ADD_BUFFER_RESPONSE_T);

   VAR_14 = FUNC_5(VAR_11->size, 32, "vcin mapping buffer");
   if (!VAR_14)
   {
      VAR_12->err = VAR_2;
      return;
   }


   VAR_12->func = VAR_0;
   VAR_12->err = VAR_13->UseBuffer(VAR_13, &VAR_15, VAR_11->port, VAR_11->bufferReference, VAR_11->size, VAR_14);

   if (VAR_12->err == VAR_3)
   {


      OMX_PARAM_PORTDEFINITIONTYPE VAR_16;
      OMX_ERRORTYPE VAR_17;
      VAR_16.nSize = sizeof(OMX_PARAM_PORTDEFINITIONTYPE);
      VAR_16.nVersion.nVersion = VAR_5;
      VAR_16.nPortIndex = VAR_11->port;
      VAR_17 = VAR_13->GetParameter(VAR_13, VAR_4, &VAR_16);
      FUNC_3(VAR_17 == VAR_3);

      VAR_12->reference = VAR_15;
      FUNC_0(&VAR_12->bufferHeader, VAR_15, sizeof(OMX_BUFFERHEADERTYPE));

      if (VAR_16.eDir == VAR_1)
         VAR_12->bufferHeader.pInputPortPrivate = VAR_15;
      else
         VAR_12->bufferHeader.pOutputPortPrivate = VAR_15;
   }
   else
      FUNC_4(VAR_14);
}
