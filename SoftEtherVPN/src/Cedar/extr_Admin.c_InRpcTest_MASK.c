
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int UniStrValue; int StrValue; int Int64Value; int IntValue; } ;
typedef TYPE_1__ RPC_TEST ;
typedef int PACK ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(RPC_TEST *VAR_0, PACK *VAR_1)
{
 FUNC_4(VAR_0, sizeof(RPC_TEST));
 VAR_0->IntValue = FUNC_0(VAR_1, "IntValue");
 VAR_0->Int64Value = FUNC_1(VAR_1, "Int64Value");
 FUNC_2(VAR_1, "StrValue", VAR_0->StrValue, sizeof(VAR_0->StrValue));
 FUNC_3(VAR_1, "UniStrValue", VAR_0->UniStrValue, sizeof(VAR_0->UniStrValue));
}
