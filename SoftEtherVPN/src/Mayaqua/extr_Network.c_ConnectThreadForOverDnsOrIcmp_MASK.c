
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Delay; scalar_t__ RUdpProtocol; int Ok; int Finished; int FinishEvent; int FinishedTick; int * Result_Nat_T_Sock; int CancelFlag; int Timeout; int NatT_ErrorCode; int Ip; int SvcName; } ;
typedef int THREAD ;
typedef int SOCK ;
typedef TYPE_1__ CONNECT_TCP_RUDP_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int *,int,int *,int ,int ,int *,int *,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int,int ) ;

void FUNC_5(THREAD *VAR_2, void *VAR_3)
{
 SOCK *VAR_4;
 CONNECT_TCP_RUDP_PARAM *VAR_5 = (CONNECT_TCP_RUDP_PARAM *)VAR_3;
 if (VAR_2 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }


 if (VAR_5->Delay >= 1)
 {
  FUNC_4(((void*)0), VAR_5->Delay, VAR_5->CancelFlag);
 }


 VAR_4 = FUNC_1(VAR_5->SvcName, &VAR_5->Ip,
  (VAR_5->RUdpProtocol == VAR_1 ? 53 : FUNC_0(VAR_0)),
  &VAR_5->NatT_ErrorCode, VAR_5->Timeout, VAR_5->CancelFlag, ((void*)0), ((void*)0),
  (VAR_5->RUdpProtocol == VAR_1 ? 0 : FUNC_0(VAR_0)),
  (VAR_5->RUdpProtocol == VAR_1 ? 1 : 0));

 VAR_5->Result_Nat_T_Sock = VAR_4;
 VAR_5->Ok = (VAR_5->Result_Nat_T_Sock == ((void*)0) ? 0 : 1);
 VAR_5->FinishedTick = FUNC_3();
 VAR_5->Finished = 1;

 FUNC_2(VAR_5->FinishEvent);
}
