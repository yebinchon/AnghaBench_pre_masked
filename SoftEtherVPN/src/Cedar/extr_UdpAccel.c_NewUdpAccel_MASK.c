
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {int NoNatT; int IsInCedarPortList; int ClientMode; int IsIPv6; scalar_t__ MyCookie; scalar_t__ YourCookie; int NatT_GetIpThread; int NatT_HaltEvent; int NatT_Lock; int MyPort; scalar_t__ MaxUdpPacketSize; int NextIv; int RecvBlockQueue; int MyIp; int YourKey; int MyKey; TYPE_2__* UdpSock; void* Now; void* CreatedTick; int NatT_TranId; TYPE_3__* Cedar; } ;
typedef TYPE_1__ UDP_ACCEL ;
struct TYPE_11__ {int ref; int UdpPortList; } ;
struct TYPE_10__ {int LocalPort; } ;
typedef TYPE_2__ SOCK ;
typedef int IP ;
typedef TYPE_3__ CEDAR ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,TYPE_1__*) ;
 TYPE_2__* FUNC_12 (scalar_t__,int *) ;
 int FUNC_13 (int ,int) ;
 void* FUNC_14 () ;
 int FUNC_15 () ;
 void* FUNC_16 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_17 (int ) ;
 TYPE_1__* FUNC_18 (int) ;

UDP_ACCEL *FUNC_19(CEDAR *VAR_4, IP *VAR_5, bool VAR_6, bool VAR_7, bool VAR_8)
{
 UDP_ACCEL *VAR_9;
 SOCK *VAR_10;
 UINT VAR_11;
 bool VAR_12 = 0;

 if (FUNC_6(VAR_5))
 {
  VAR_5 = ((void*)0);
 }

 if (VAR_6 || VAR_7)
 {

  VAR_10 = FUNC_12(0, VAR_5);
 }
 else
 {

  UINT VAR_13;
  VAR_10 = ((void*)0);

  FUNC_7(VAR_4->UdpPortList);
  {
   for (VAR_13 = VAR_3;VAR_13 <= VAR_2;VAR_13++)
   {
    if (FUNC_5(VAR_4->UdpPortList, VAR_13) == 0)
    {
     VAR_10 = FUNC_12(VAR_13, VAR_5);

     if (VAR_10 != ((void*)0))
     {
      VAR_12 = 1;
      break;
     }
    }
   }

   if (VAR_10 == ((void*)0))
   {

    VAR_10 = FUNC_12(0, VAR_5);
   }

   if (VAR_10 != ((void*)0) && VAR_12)
   {
    FUNC_0(VAR_4->UdpPortList, VAR_13);
   }
  }
  FUNC_17(VAR_4->UdpPortList);
 }

 if (VAR_10 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_9 = FUNC_18(sizeof(UDP_ACCEL));

 VAR_9->Cedar = VAR_4;
 FUNC_1(VAR_9->Cedar->ref);

 VAR_9->NoNatT = VAR_8;


 VAR_9->NatT_TranId = FUNC_15();

 VAR_9->CreatedTick = FUNC_16();

 VAR_9->IsInCedarPortList = VAR_12;

 VAR_9->ClientMode = VAR_6;

 VAR_9->Now = FUNC_16();
 VAR_9->UdpSock = VAR_10;
 FUNC_13(VAR_9->MyKey, sizeof(VAR_9->MyKey));
 FUNC_13(VAR_9->YourKey, sizeof(VAR_9->YourKey));

 FUNC_2(&VAR_9->MyIp, VAR_5, sizeof(IP));
 VAR_9->MyPort = VAR_10->LocalPort;

 VAR_9->IsIPv6 = FUNC_4(VAR_5);

 if (VAR_9->IsIPv6)
 {
  VAR_9->NoNatT = 1;
 }

 VAR_9->RecvBlockQueue = FUNC_10();

 FUNC_13(VAR_9->NextIv, sizeof(VAR_9->NextIv));

 do
 {
  VAR_9->MyCookie = FUNC_14();
 }
 while (VAR_9->MyCookie == 0);

 do
 {
  VAR_9->YourCookie = FUNC_14();
 }
 while (VAR_9->MyCookie == 0 || VAR_9->MyCookie == VAR_9->YourCookie);


 VAR_11 = VAR_0;

 if (VAR_9->IsIPv6 == 0)
 {

  VAR_11 -= 20;
 }
 else
 {

  VAR_11 -= 40;
 }


 VAR_11 -= 8;

 VAR_9->MaxUdpPacketSize = VAR_11;

 FUNC_3("Udp Accel My Port = %u\n", VAR_9->MyPort);


 VAR_9->NatT_Lock = FUNC_9();
 VAR_9->NatT_HaltEvent = FUNC_8();

 if (VAR_9->NoNatT == 0)
 {
  VAR_9->NatT_GetIpThread = FUNC_11(VAR_1, VAR_9);
 }

 return VAR_9;
}
