
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Delay; int Ok; int Finished; int FinishEvent; int FinishedTick; int * Result_Nat_T_Sock; int TargetHostname; int HintStr; int CancelFlag; int Timeout; int NatT_ErrorCode; int Ip; int SvcName; } ;
typedef int THREAD ;
typedef int SOCK ;
typedef TYPE_1__ CONNECT_TCP_RUDP_PARAM ;


 int * FUNC_0 (int ,int *,int *,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int,int ) ;

void FUNC_4(THREAD *VAR_0, void *VAR_1)
{
 SOCK *VAR_2;
 CONNECT_TCP_RUDP_PARAM *VAR_3 = (CONNECT_TCP_RUDP_PARAM *)VAR_1;
 if (VAR_0 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }


 if (VAR_3->Delay >= 1)
 {
  FUNC_3(((void*)0), VAR_3->Delay, VAR_3->CancelFlag);
 }


 VAR_2 = FUNC_0(VAR_3->SvcName, &VAR_3->Ip, &VAR_3->NatT_ErrorCode, VAR_3->Timeout, VAR_3->CancelFlag, VAR_3->HintStr, VAR_3->TargetHostname);

 VAR_3->Result_Nat_T_Sock = VAR_2;
 VAR_3->Ok = (VAR_3->Result_Nat_T_Sock == ((void*)0) ? 0 : 1);
 VAR_3->FinishedTick = FUNC_2();
 VAR_3->Finished = 1;

 FUNC_1(VAR_3->FinishEvent);
}
