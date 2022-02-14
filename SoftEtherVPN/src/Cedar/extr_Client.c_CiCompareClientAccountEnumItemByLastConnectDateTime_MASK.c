
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ LastConnectDateTime; } ;
typedef TYPE_1__ RPC_CLIENT_ENUM_ACCOUNT_ITEM ;



int FUNC_0(void *VAR_0, void *VAR_1)
{
 RPC_CLIENT_ENUM_ACCOUNT_ITEM *VAR_2, *VAR_3;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(RPC_CLIENT_ENUM_ACCOUNT_ITEM **)VAR_0;
 VAR_3 = *(RPC_CLIENT_ENUM_ACCOUNT_ITEM **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }
 if (VAR_2->LastConnectDateTime > VAR_3->LastConnectDateTime)
 {
  return -1;
 }
 else if (VAR_2->LastConnectDateTime < VAR_3->LastConnectDateTime)
 {
  return 1;
 }

 return 0;
}
