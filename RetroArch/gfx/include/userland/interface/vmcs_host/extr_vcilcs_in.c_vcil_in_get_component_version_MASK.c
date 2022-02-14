
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* reference; } ;
struct TYPE_6__ {int uuid; int spec_version; int component_version; int name; int err; int func; } ;
struct TYPE_5__ {int (* GetComponentVersion ) (TYPE_1__*,int ,int *,int *,int *) ;} ;
typedef TYPE_1__ OMX_COMPONENTTYPE ;
typedef TYPE_2__ IL_GET_VERSION_RESPONSE_T ;
typedef TYPE_3__ IL_EXECUTE_HEADER_T ;
typedef int ILCS_COMMON_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int *,int *,int *) ;

void FUNC_1(ILCS_COMMON_T *VAR_1, void *VAR_2, int VAR_3, void *VAR_4, int *VAR_5)
{
   IL_EXECUTE_HEADER_T *VAR_6 = VAR_2;
   IL_GET_VERSION_RESPONSE_T *VAR_7 = VAR_4;
   OMX_COMPONENTTYPE *VAR_8 = VAR_6->reference;

   *VAR_5 = sizeof(IL_GET_VERSION_RESPONSE_T);
   VAR_7->func = VAR_0;
   VAR_7->err = VAR_8->GetComponentVersion(VAR_8, VAR_7->name, &VAR_7->component_version, &VAR_7->spec_version, &VAR_7->uuid);
}
