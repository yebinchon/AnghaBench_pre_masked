
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ClientX; int * ServerX; } ;
typedef TYPE_1__ RPC_CLIENT_GET_CONNECTION_STATUS ;


 int FUNC_0 (int *) ;

void FUNC_1(RPC_CLIENT_GET_CONNECTION_STATUS *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->ServerX != ((void*)0))
 {
  FUNC_0(VAR_0->ServerX);
 }

 if (VAR_0->ClientX != ((void*)0))
 {
  FUNC_0(VAR_0->ClientX);
 }
}
