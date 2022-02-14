
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_18__ {int OsServiceCheckThreadEvent; int LockSettings; TYPE_3__* Ike; TYPE_10__* UdpListener; TYPE_2__* Cedar; int Services; scalar_t__ NoMoreChangeSettings; } ;
struct TYPE_17__ {int IPsec_Secret; scalar_t__ EtherIP_IPsec; scalar_t__ L2TP_IPsec; scalar_t__ L2TP_Raw; } ;
struct TYPE_16__ {int Secret; } ;
struct TYPE_15__ {TYPE_1__* Server; } ;
struct TYPE_14__ {TYPE_4__ ListenIP; } ;
struct TYPE_13__ {int ListenIP; } ;
typedef TYPE_4__ IPSEC_SERVICES ;
typedef TYPE_5__ IPSEC_SERVER ;
typedef int IP ;


 int FUNC_0 (TYPE_10__*,int ) ;
 int FUNC_1 (int *,TYPE_4__*,int) ;
 int FUNC_2 (TYPE_10__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ) ;

void FUNC_10(IPSEC_SERVER *VAR_5, IPSEC_SERVICES *VAR_6)
{

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return;
 }

 if (FUNC_5(VAR_6, sizeof(IPSEC_SERVICES)) == 0)
 {
  if (VAR_5->NoMoreChangeSettings)
  {
   return;
  }
 }

 FUNC_6(VAR_5->LockSettings);
 {
  FUNC_1(&VAR_5->Services, VAR_6, sizeof(IPSEC_SERVICES));

  FUNC_1(&VAR_5->UdpListener->ListenIP, &VAR_5->Cedar->Server->ListenIP, sizeof(IP));

  if (VAR_6->L2TP_Raw)
  {
   FUNC_0(VAR_5->UdpListener, VAR_4);
  }
  else
  {
   FUNC_2(VAR_5->UdpListener, VAR_4);
  }

  if (VAR_6->L2TP_IPsec || VAR_6->EtherIP_IPsec)
  {
   FUNC_0(VAR_5->UdpListener, VAR_3);
   FUNC_0(VAR_5->UdpListener, VAR_2);
   FUNC_0(VAR_5->UdpListener, VAR_0);
   FUNC_0(VAR_5->UdpListener, VAR_1);
  }
  else
  {
   FUNC_2(VAR_5->UdpListener, VAR_3);
   FUNC_2(VAR_5->UdpListener, VAR_2);
   FUNC_2(VAR_5->UdpListener, VAR_0);
   FUNC_2(VAR_5->UdpListener, VAR_1);
  }

  if (FUNC_4(VAR_6->IPsec_Secret) == 0)
  {
   FUNC_8(VAR_5->Ike->Secret, sizeof(VAR_5->Ike->Secret), VAR_6->IPsec_Secret);
  }

  FUNC_3(VAR_5);
 }
 FUNC_9(VAR_5->LockSettings);

 FUNC_7(VAR_5->OsServiceCheckThreadEvent);
}
