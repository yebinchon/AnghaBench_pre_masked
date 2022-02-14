
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
typedef int OMX_STATETYPE ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_1__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,scalar_t__,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_2(
   OMX_HANDLETYPE VAR_3,
   OMX_STATETYPE* VAR_4)
{
   MMALOMX_COMPONENT_T *VAR_5 = (MMALOMX_COMPONENT_T *)VAR_3;
   FUNC_1(VAR_5);

   FUNC_0("hComponent %p, pState, %p", VAR_3, VAR_4);


   if (!VAR_3)
      return VAR_1;
   if (!VAR_4)
      return VAR_0;

   *VAR_4 = VAR_5->state;
   return VAR_2;
}
