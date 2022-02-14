
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef int MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_2(
  OMX_HANDLETYPE VAR_2)
{
   MMALOMX_COMPONENT_T *VAR_3 = (MMALOMX_COMPONENT_T *)VAR_2;
   FUNC_1(VAR_3);

   FUNC_0("hComponent %p", VAR_2);


   if (!VAR_2)
      return VAR_0;

   return VAR_1;
}
