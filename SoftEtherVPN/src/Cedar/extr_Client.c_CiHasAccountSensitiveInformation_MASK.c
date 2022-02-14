
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ClientAuth; } ;
struct TYPE_6__ {scalar_t__ AuthType; } ;
typedef TYPE_2__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef int BUF ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

bool FUNC_3(BUF *VAR_2)
{
 RPC_CLIENT_CREATE_ACCOUNT *VAR_3;
 bool VAR_4 = 0;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (VAR_3->ClientAuth->AuthType == VAR_0)
 {
  VAR_4 = 1;
 }
 else if (VAR_3->ClientAuth->AuthType == VAR_1)
 {
  VAR_4 = 1;
 }

 FUNC_1(VAR_3);
 FUNC_2(VAR_3);

 return VAR_4;
}
