
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int HashedPassword; int LockMode; int EasyMode; } ;
typedef int PACK ;
typedef TYPE_1__ CM_SETTING ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ,int) ;

void FUNC_2(PACK *VAR_0, CM_SETTING *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "EasyMode", VAR_1->EasyMode);
 FUNC_0(VAR_0, "LockMode", VAR_1->LockMode);
 FUNC_1(VAR_0, "HashedPassword", VAR_1->HashedPassword, sizeof(VAR_1->HashedPassword));
}
