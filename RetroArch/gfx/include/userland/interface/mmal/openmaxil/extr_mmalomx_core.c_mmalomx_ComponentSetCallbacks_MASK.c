
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; int callbacks_data; int callbacks; } ;
typedef int OMX_PTR ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef int OMX_CALLBACKTYPE ;
typedef TYPE_1__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,scalar_t__,int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_2(
   OMX_HANDLETYPE VAR_6,
   OMX_CALLBACKTYPE* VAR_7,
   OMX_PTR VAR_8)
{
   MMALOMX_COMPONENT_T *VAR_9 = (MMALOMX_COMPONENT_T *)VAR_6;
   FUNC_1(VAR_9);

   FUNC_0("hComponent %p, pCallbacks %p, pAppData %p",
              VAR_6, VAR_7, VAR_8);


   if (!VAR_6)
      return VAR_1;
   if (!VAR_7)
      return VAR_0;
   if (VAR_9->state == VAR_4)
      return VAR_2;

   if (VAR_9->state != VAR_5)
      return VAR_2;

   VAR_9->callbacks = *VAR_7;
   VAR_9->callbacks_data = VAR_8;
   return VAR_3;
}
