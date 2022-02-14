
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; scalar_t__ ports_num; } ;
typedef scalar_t__ OMX_U32 ;
typedef int OMX_STATETYPE ;
typedef int OMX_PTR ;
typedef scalar_t__ OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef int OMX_COMMANDTYPE ;
typedef TYPE_1__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,scalar_t__,int ,int ,int,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_5(
   OMX_HANDLETYPE VAR_12,
   OMX_COMMANDTYPE VAR_13,
   OMX_U32 VAR_14,
   OMX_PTR VAR_15)
{
   MMALOMX_COMPONENT_T *VAR_16 = (MMALOMX_COMPONENT_T *)VAR_12;
   OMX_ERRORTYPE VAR_17 = VAR_9;

   FUNC_0("hComponent %p, Cmd %i (%s), nParam1 %i (%s), pCmdData %p",
             VAR_12, VAR_13, FUNC_1(VAR_13), (int)VAR_14,
             VAR_13 == VAR_5 ? FUNC_4((OMX_STATETYPE)VAR_14) : "",
             VAR_15);


   if (!VAR_12)
      return VAR_7;
   if (VAR_16->state == VAR_11)
      return VAR_8;


   if (VAR_13 == VAR_1 || VAR_13 == VAR_2 ||
       VAR_13 == VAR_4 || VAR_13 == VAR_3)
   {
      if (VAR_14 != VAR_0 && VAR_14 >= VAR_16->ports_num)
         return VAR_6;
   }

   if (VAR_13 == VAR_5 ||
       VAR_13 == VAR_1 ||
       VAR_13 == VAR_4 ||
       VAR_13 == VAR_3)
   {
      VAR_17 = FUNC_3(VAR_16, VAR_13, VAR_14);
   }
   else if (VAR_13 == VAR_2)
   {
      VAR_17 = FUNC_2(VAR_12, VAR_14, VAR_15);
   }
   else
   {
      VAR_17 = VAR_10;
   }

   return VAR_17;
}
