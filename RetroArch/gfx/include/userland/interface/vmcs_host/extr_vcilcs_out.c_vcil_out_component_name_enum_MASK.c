
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int resp ;
typedef int exe ;
struct TYPE_9__ {int ilcs; } ;
struct TYPE_8__ {int index; } ;
struct TYPE_7__ {int err; scalar_t__ name; } ;
typedef int OMX_U32 ;
typedef scalar_t__* OMX_STRING ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_1__ IL_COMPONENT_NAME_ENUM_RESPONSE_T ;
typedef TYPE_2__ IL_COMPONENT_NAME_ENUM_EXECUTE_T ;
typedef TYPE_3__ ILCS_COMMON_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_2__*,int,TYPE_1__*,int*) ;
 int FUNC_1 (char*,char*,int) ;

OMX_ERRORTYPE FUNC_2(ILCS_COMMON_T *VAR_2, OMX_STRING VAR_3, OMX_U32 VAR_4, OMX_U32 VAR_5)
{
   IL_COMPONENT_NAME_ENUM_EXECUTE_T VAR_6;
   IL_COMPONENT_NAME_ENUM_RESPONSE_T VAR_7;
   int VAR_8 = sizeof(VAR_7);

   VAR_6.index = VAR_5;

   if(FUNC_0(VAR_2->ilcs, VAR_0, &VAR_6, sizeof(VAR_6), &VAR_7, &VAR_8) < 0 || VAR_8 != sizeof(VAR_7))
      return VAR_1;

   if (sizeof(VAR_7.name) < VAR_4)
      VAR_4 = sizeof(VAR_7.name);

   FUNC_1((char *)VAR_3, (char *) VAR_7.name, VAR_4);
   VAR_3[127] = 0;
   return VAR_7.err;
}
