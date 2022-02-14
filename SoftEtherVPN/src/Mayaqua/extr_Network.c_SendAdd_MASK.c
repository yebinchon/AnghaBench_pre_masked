
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int AsyncMode; int SendBuf; } ;
typedef TYPE_1__ SOCK ;


 int FUNC_0 (int ,void*,scalar_t__) ;

void FUNC_1(SOCK *VAR_0, void *VAR_1, UINT VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0 || VAR_0->AsyncMode != 0)
 {
  return;
 }

 FUNC_0(VAR_0->SendBuf, VAR_1, VAR_2);
}
