
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int param ;
struct TYPE_4__ {int nVersion; } ;
struct TYPE_5__ {int nSize; int nBufferSize; TYPE_1__ nVersion; } ;
typedef int OMX_U32 ;
typedef TYPE_2__ OMX_PARAM_BRCMOUTPUTBUFFERSIZETYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef int COMPONENT_T ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;

int FUNC_3(COMPONENT_T *VAR_3, OMX_U32 VAR_4)
{
   OMX_PARAM_BRCMOUTPUTBUFFERSIZETYPE VAR_5;
   OMX_ERRORTYPE VAR_6;

   VAR_5.nSize = sizeof(VAR_5);
   VAR_5.nVersion.nVersion = VAR_2;
   VAR_5.nBufferSize = VAR_4;
   VAR_6 = FUNC_1(FUNC_0(VAR_3), VAR_1,
                            &VAR_5);
   FUNC_2(VAR_6 == VAR_0);

   return (VAR_6 == VAR_0) ? 0 : -1;
}
