
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_16__ {TYPE_1__* Server; int ref; } ;
struct TYPE_15__ {int OsServiceCheckThread; int OsServiceCheckThreadEvent; int EtherIPIdList; int UdpListener; TYPE_10__* Ike; int L2TP; TYPE_3__* Cedar; int LockSettings; } ;
struct TYPE_14__ {int ListenIP; } ;
struct TYPE_13__ {int Secret; } ;
typedef TYPE_2__ IPSEC_SERVER ;
typedef TYPE_3__ CEDAR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 TYPE_10__* FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_2__*,int *) ;
 int FUNC_8 (int ,int,int ) ;
 TYPE_2__* FUNC_9 (int) ;

IPSEC_SERVER *FUNC_10(CEDAR *VAR_4)
{
 IPSEC_SERVER *VAR_5;

 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_9(sizeof(IPSEC_SERVER));

 VAR_5->LockSettings = FUNC_5();

 VAR_5->Cedar = VAR_4;

 FUNC_0(VAR_5->Cedar->ref);

 VAR_5->L2TP = FUNC_3(VAR_4);

 VAR_5->Ike = FUNC_2(VAR_4, VAR_5);
 FUNC_8(VAR_5->Ike->Secret, sizeof(VAR_5->Ike->Secret), VAR_1);

 VAR_5->UdpListener = FUNC_7(VAR_3, VAR_5, &VAR_4->Server->ListenIP);

 VAR_5->EtherIPIdList = FUNC_4(VAR_0);


 VAR_5->OsServiceCheckThreadEvent = FUNC_1();
 VAR_5->OsServiceCheckThread = FUNC_6(VAR_2, VAR_5);

 return VAR_5;
}
