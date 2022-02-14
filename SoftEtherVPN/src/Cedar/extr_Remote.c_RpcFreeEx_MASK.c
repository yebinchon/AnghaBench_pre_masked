
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Lock; int Sock; } ;
typedef TYPE_1__ RPC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

void FUNC_4(RPC *VAR_0, bool VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_1 == 0)
 {
  FUNC_1(VAR_0->Sock);
 }

 FUNC_3(VAR_0->Sock);

 FUNC_0(VAR_0->Lock);

 FUNC_2(VAR_0);
}
