
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int ilcs; } ;
struct TYPE_8__ {int err; int func; } ;
struct TYPE_7__ {int (* EmptyThisBuffer ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ OMX_COMPONENTTYPE ;
typedef int OMX_BUFFERHEADERTYPE ;
typedef TYPE_2__ IL_RESPONSE_HEADER_T ;
typedef TYPE_3__ ILCS_COMMON_T ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,void*,int,TYPE_1__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int ) ;

void FUNC_4(ILCS_COMMON_T *VAR_2, void *VAR_3, int VAR_4, void *VAR_5, int *VAR_6)
{
   IL_RESPONSE_HEADER_T *VAR_7 = VAR_5;
   OMX_COMPONENTTYPE *VAR_8;
   OMX_BUFFERHEADERTYPE *VAR_9;

   VAR_9 = FUNC_0(VAR_2->ilcs, VAR_3, VAR_4, &VAR_8);

   *VAR_6 = sizeof(IL_RESPONSE_HEADER_T);
   VAR_7->func = VAR_0;

   if(VAR_9)
   {
      FUNC_3(FUNC_1(VAR_9));
      VAR_7->err = VAR_8->EmptyThisBuffer(VAR_8, VAR_9);
   }
   else
      VAR_7->err = VAR_1;
}
