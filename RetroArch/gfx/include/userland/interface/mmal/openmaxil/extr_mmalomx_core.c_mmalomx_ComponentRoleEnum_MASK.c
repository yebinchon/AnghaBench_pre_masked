
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; int registry_id; } ;
typedef int OMX_U8 ;
typedef scalar_t__ OMX_U32 ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef int MMALOMX_ROLE_T ;
typedef TYPE_1__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,scalar_t__,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_4(
   OMX_HANDLETYPE VAR_5,
   OMX_U8 *VAR_6,
   OMX_U32 VAR_7)
{
   MMALOMX_COMPONENT_T *VAR_8 = (MMALOMX_COMPONENT_T *)VAR_5;
   MMALOMX_ROLE_T VAR_9;

   FUNC_0("hComponent %p, cRole %p, nIndex %i",
             VAR_5, VAR_6, (int)VAR_7);


   if (!VAR_5)
      return VAR_0;
   if (VAR_8->state == VAR_4)
      return VAR_1;

   VAR_9 = FUNC_1(VAR_8->registry_id, VAR_7);
   if (!VAR_9)
      return VAR_2;
   if (!FUNC_2(VAR_9))
      return VAR_2;

   FUNC_3((char *)VAR_6, FUNC_2(VAR_9));
   return VAR_3;
}
