
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Flag1; int Key; int Cert; } ;
typedef TYPE_1__ RPC_KEY_PAIR ;
typedef int PACK ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;

void FUNC_3(RPC_KEY_PAIR *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_0->Cert = FUNC_2(VAR_1, "Cert");
 VAR_0->Key = FUNC_1(VAR_1, "Key");
 VAR_0->Flag1 = FUNC_0(VAR_1, "Flag1");
}
