
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; } ;
typedef scalar_t__ OMX_U32 ;
typedef int OMX_PTR ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef int OMX_BUFFERHEADERTYPE ;
typedef TYPE_1__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,scalar_t__,int **,int,int ,void*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_2(
   OMX_HANDLETYPE VAR_4,
   OMX_BUFFERHEADERTYPE** VAR_5,
   OMX_U32 VAR_6,
   OMX_PTR VAR_7,
   void* VAR_8)
{
   MMALOMX_COMPONENT_T *VAR_9 = (MMALOMX_COMPONENT_T *)VAR_4;
   FUNC_1(VAR_9);

   FUNC_0("hComponent %p, ppBufferHdr %p, nPortIndex %i, pAppPrivate %p,"
             " eglImage %p", VAR_4, VAR_5, (int)VAR_6,
             VAR_7, VAR_8);


   if (!VAR_4)
      return VAR_0;
   if (VAR_9->state == VAR_3)
      return VAR_1;

   return VAR_2;
}
