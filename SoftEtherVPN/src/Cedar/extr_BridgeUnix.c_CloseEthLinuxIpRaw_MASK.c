
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* RawIP_TmpBuffer; int Cancel; int RawIcmp; int RawUdp; int RawTcp; struct TYPE_4__* Title; struct TYPE_4__* Name; int RawIpSendQueue; } ;
typedef TYPE_1__ ETH ;
typedef int BUF ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(ETH *VAR_0)
{
 if (VAR_0 == ((void*)0))
 {
  return;
 }

 while (1)
 {
  BUF *VAR_1 = FUNC_2(VAR_0->RawIpSendQueue);
  if (VAR_1 == ((void*)0))
  {
   break;
  }

  FUNC_1(VAR_1);
 }
 FUNC_4(VAR_0->RawIpSendQueue);

 FUNC_0(VAR_0->Name);
 FUNC_0(VAR_0->Title);

 FUNC_5(VAR_0->RawTcp);
 FUNC_5(VAR_0->RawUdp);
 FUNC_5(VAR_0->RawIcmp);

 FUNC_3(VAR_0->Cancel);

 FUNC_0(VAR_0->RawIP_TmpBuffer);

 FUNC_0(VAR_0);
}
