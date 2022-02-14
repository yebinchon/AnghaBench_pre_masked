
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ Policy; int AuthType; int AuthData; } ;
typedef TYPE_1__ RPC_SET_USER ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(RPC_SET_USER *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0->AuthData, VAR_0->AuthType);
 if (VAR_0->Policy)
 {
  FUNC_0(VAR_0->Policy);
 }
}
