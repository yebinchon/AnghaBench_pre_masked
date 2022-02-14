
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int UniStrValue; int StrValue; int Int64Value; int IntValue; } ;
typedef TYPE_1__ RPC_TEST ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;

void FUNC_4(PACK *VAR_0, RPC_TEST *VAR_1)
{
 FUNC_0(VAR_0, "IntValue", VAR_1->IntValue);
 FUNC_1(VAR_0, "Int64Value", VAR_1->Int64Value);
 FUNC_2(VAR_0, "StrValue", VAR_1->StrValue);
 FUNC_3(VAR_0, "UniStrValue", VAR_1->UniStrValue);
}
