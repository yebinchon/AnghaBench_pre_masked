
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int PlainTextPassword; int HashedPassword; } ;
typedef TYPE_1__ RPC_SET_PASSWORD ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int *,char*,int ) ;

void FUNC_2(PACK *VAR_0, RPC_SET_PASSWORD *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "HashedPassword", VAR_1->HashedPassword, sizeof(VAR_1->HashedPassword));
 FUNC_1(VAR_0, "PlainTextPassword", VAR_1->PlainTextPassword);
}
