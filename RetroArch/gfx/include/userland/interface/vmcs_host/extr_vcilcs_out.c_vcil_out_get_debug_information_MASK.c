
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int exe ;
struct TYPE_6__ {int ilcs; } ;
struct TYPE_5__ {int len; } ;
typedef int OMX_STRING ;
typedef int OMX_S32 ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_1__ IL_GET_DEBUG_INFORMATION_EXECUTE_T ;
typedef TYPE_2__ ILCS_COMMON_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_1__*,int,int ,int*) ;

OMX_ERRORTYPE FUNC_1(ILCS_COMMON_T *VAR_3, OMX_STRING VAR_4, OMX_S32 *VAR_5)
{
   IL_GET_DEBUG_INFORMATION_EXECUTE_T VAR_6;

   VAR_6.len = *VAR_5;

   if(FUNC_0(VAR_3->ilcs, VAR_0, &VAR_6, sizeof(VAR_6), VAR_4, (int *) VAR_5) < 0)
      return VAR_1;

   return VAR_2;
}
