
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int param; int index; TYPE_1__* reference; } ;
struct TYPE_6__ {int param; int err; int func; } ;
struct TYPE_5__ {int (* GetParameter ) (TYPE_1__*,int ,int ) ;} ;
typedef int OMX_U32 ;
typedef TYPE_1__ OMX_COMPONENTTYPE ;
typedef TYPE_2__ IL_GET_RESPONSE_T ;
typedef TYPE_3__ IL_GET_EXECUTE_T ;
typedef int ILCS_COMMON_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

void FUNC_2(ILCS_COMMON_T *VAR_4, void *VAR_5, int VAR_6, void *VAR_7, int *VAR_8)
{
   IL_GET_EXECUTE_T *VAR_9 = VAR_5;
   IL_GET_RESPONSE_T *VAR_10 = VAR_7;
   OMX_COMPONENTTYPE *VAR_11 = VAR_9->reference;
   OMX_U32 VAR_12 = *((OMX_U32 *) (&VAR_9->param));

   VAR_10->func = VAR_0;

   if(VAR_12 > VAR_3)
   {
      *VAR_8 = VAR_1;
      VAR_10->err = VAR_2;
   }
   else
   {
      *VAR_8 = VAR_12 + VAR_1;
      VAR_10->err = VAR_11->GetParameter(VAR_11, VAR_9->index, VAR_9->param);
      FUNC_0(VAR_10->param, VAR_9->param, VAR_12);
   }
}
