
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int NoEnum; int MaxSession; } ;
typedef TYPE_1__ RPC_HUB_OPTION ;
typedef int PACK ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(RPC_HUB_OPTION *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, sizeof(RPC_HUB_OPTION));
 VAR_0->MaxSession = FUNC_1(VAR_1, "MaxSession");
 VAR_0->NoEnum = FUNC_0(VAR_1, "NoEnum");
}
