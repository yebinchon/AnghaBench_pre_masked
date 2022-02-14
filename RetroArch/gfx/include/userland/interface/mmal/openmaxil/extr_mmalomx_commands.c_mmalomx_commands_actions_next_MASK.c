
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int ports_num; int omx; } ;
typedef unsigned int OMX_U32 ;
typedef int OMX_HANDLETYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef scalar_t__ OMX_COMMANDTYPE ;
typedef TYPE_1__ MMALOMX_COMPONENT_T ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*,unsigned int*,unsigned int*) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,unsigned int) ;

void FUNC_5(MMALOMX_COMPONENT_T *VAR_6)
{
   OMX_ERRORTYPE VAR_7 = VAR_5;
   OMX_COMMANDTYPE VAR_8;
   OMX_U32 VAR_9, VAR_10, VAR_11;
   unsigned int VAR_12;

   VAR_7 = FUNC_0(VAR_6, &VAR_9, &VAR_10);
   if (VAR_7 != VAR_5)
      return;

   VAR_8 = (OMX_COMMANDTYPE)VAR_9;
   VAR_11 = VAR_10;

   if (VAR_8 == VAR_4)
   {
      FUNC_4((OMX_HANDLETYPE)&VAR_6->omx, VAR_11);
   }
   else if (VAR_8 == VAR_1)
   {
      for (VAR_12 = 0; VAR_12 < VAR_6->ports_num; VAR_12++)
         if (VAR_12 == VAR_11 || VAR_11 == VAR_0)
            FUNC_3((OMX_HANDLETYPE)&VAR_6->omx, VAR_12);
   }
   else if (VAR_8 == VAR_3)
   {
      for (VAR_12 = 0; VAR_12 < VAR_6->ports_num; VAR_12++)
         if (VAR_12 == VAR_11 || VAR_11 == VAR_0)
            FUNC_2((OMX_HANDLETYPE)&VAR_6->omx, VAR_12);
   }
   else if (VAR_8 == VAR_2)
   {
      for (VAR_12 = 0; VAR_12 < VAR_6->ports_num; VAR_12++)
         if (VAR_12 == VAR_11 || VAR_11 == VAR_0)
            FUNC_1((OMX_HANDLETYPE)&VAR_6->omx, VAR_12);
   }
}
