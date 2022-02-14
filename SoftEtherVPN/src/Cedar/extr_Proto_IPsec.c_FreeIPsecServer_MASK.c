
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int sl ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int NoMoreChangeSettings; int Halt; int LockSettings; int OsServiceCheckThreadEvent; int OsServiceCheckThread; int EtherIPIdList; int Ike; int L2TP; int Cedar; int UdpListener; } ;
typedef int IPSEC_SERVICES ;
typedef TYPE_1__ IPSEC_SERVER ;
typedef TYPE_1__ ETHERIP_ID ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int *,int) ;

void FUNC_17(IPSEC_SERVER *VAR_1)
{
 UINT VAR_2;
 IPSEC_SERVICES VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_1->NoMoreChangeSettings = 1;


 FUNC_14(VAR_1->L2TP, 0);


 FUNC_13(VAR_1->Ike);


 FUNC_16(&VAR_3, sizeof(VAR_3));
 FUNC_5(VAR_1, &VAR_3);


 FUNC_4(VAR_1->UdpListener);

 FUNC_8(VAR_1->Cedar);

 FUNC_3(VAR_1->L2TP);

 FUNC_2(VAR_1->Ike);

 for (VAR_2 = 0;VAR_2 < FUNC_7(VAR_1->EtherIPIdList);VAR_2++)
 {
  ETHERIP_ID *VAR_4 = FUNC_6(VAR_1->EtherIPIdList, VAR_2);

  FUNC_1(VAR_4);
 }

 FUNC_10(VAR_1->EtherIPIdList);


 VAR_1->Halt = 1;
 FUNC_12(VAR_1->OsServiceCheckThreadEvent);
 FUNC_15(VAR_1->OsServiceCheckThread, VAR_0);
 FUNC_11(VAR_1->OsServiceCheckThread);
 FUNC_9(VAR_1->OsServiceCheckThreadEvent);

 FUNC_0(VAR_1->LockSettings);

 FUNC_1(VAR_1);
}
