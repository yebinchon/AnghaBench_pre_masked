
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nOutputPortIndex; } ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_1__ OMX_BUFFERHEADERTYPE ;
typedef int MMALOMX_COMPONENT_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_2(
   OMX_HANDLETYPE VAR_2,
   OMX_BUFFERHEADERTYPE* VAR_3)
{
   MMALOMX_COMPONENT_T *VAR_4 = (MMALOMX_COMPONENT_T *)VAR_2;

   if (VAR_0)
      FUNC_0("hComponent %p, port %i, pBuffer %p", VAR_2,
                VAR_3 ? (int)VAR_3->nOutputPortIndex : -1, VAR_3);

  return FUNC_1(VAR_4, VAR_3, VAR_1);
}
