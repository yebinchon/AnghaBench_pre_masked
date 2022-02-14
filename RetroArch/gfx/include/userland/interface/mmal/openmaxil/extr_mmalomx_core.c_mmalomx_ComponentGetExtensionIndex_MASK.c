
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;
typedef int OMX_STRING ;
typedef int OMX_INDEXTYPE ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_1__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,scalar_t__,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_2(
   OMX_HANDLETYPE VAR_3,
   OMX_STRING VAR_4,
   OMX_INDEXTYPE* VAR_5)
{
   MMALOMX_COMPONENT_T *VAR_6 = (MMALOMX_COMPONENT_T *)VAR_3;

   FUNC_0("hComponent %p, cParameterName %s, pIndexType %p",
             VAR_3, VAR_4, VAR_5);


   if (!VAR_3)
      return VAR_0;
   if (VAR_6->state == VAR_2)
      return VAR_1;

   return FUNC_1(VAR_4, VAR_5);
}
