
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int HashedPassword; void* LockMode; void* EasyMode; } ;
typedef int PACK ;
typedef TYPE_1__ CM_SETTING ;


 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(CM_SETTING *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, sizeof(CM_SETTING));
 VAR_0->EasyMode = FUNC_0(VAR_1, "EasyMode");
 VAR_0->LockMode = FUNC_0(VAR_1, "LockMode");
 FUNC_1(VAR_1, "HashedPassword", VAR_0->HashedPassword, sizeof(VAR_0->HashedPassword));
}
