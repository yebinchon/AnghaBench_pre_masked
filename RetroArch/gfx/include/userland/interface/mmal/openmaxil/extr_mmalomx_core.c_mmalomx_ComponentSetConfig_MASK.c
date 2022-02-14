
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; } ;
typedef int OMX_VERSIONTYPE ;
typedef int OMX_U32 ;
typedef scalar_t__ OMX_PTR ;
typedef int OMX_INDEXTYPE ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_1__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,scalar_t__,int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,scalar_t__) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_3(
   OMX_HANDLETYPE VAR_4,
   OMX_INDEXTYPE VAR_5,
   OMX_PTR VAR_6)
{
   MMALOMX_COMPONENT_T *VAR_7 = (MMALOMX_COMPONENT_T *)VAR_4;

   FUNC_0("hComponent %p, nParamIndex 0x%x (%s), pParam %p",
             VAR_4, VAR_5, FUNC_1(VAR_5), VAR_6);


   if (!VAR_4)
      return VAR_1;
   if (!VAR_6)
      return VAR_0;
   if (*(OMX_U32 *)VAR_6 < sizeof(OMX_U32) + sizeof(OMX_VERSIONTYPE))
      return VAR_0;
   if (VAR_7->state == VAR_3)
      return VAR_2;

   return FUNC_2(VAR_7, VAR_5, VAR_6);
}
