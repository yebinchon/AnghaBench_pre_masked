
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
struct TYPE_17__ {int DestPort; int DstIP; int SrcPort; int SrcIP; } ;
typedef TYPE_1__ UDPPACKET ;
struct TYPE_21__ {int DataSize; int * Data; } ;
struct TYPE_20__ {int Ver; int IsYamahaV3; } ;
struct TYPE_19__ {int Now; } ;
struct TYPE_18__ {int IsV3; scalar_t__ TunnelId2; int IsCiscoV3; int LastHelloSent; int LastRecvTick; void* RecvQueue; void* SendQueue; int IsYamahaV3; int ClientIp; int TunnelId1; int * VendorName; int * HostName; int ServerPort; int ServerIp; int ClientPort; void* SessionList; } ;
typedef TYPE_2__ L2TP_TUNNEL ;
typedef TYPE_3__ L2TP_SERVER ;
typedef TYPE_4__ L2TP_PACKET ;
typedef TYPE_5__ L2TP_AVP ;
typedef int IP ;


 int * VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,int) ;
 TYPE_5__* FUNC_3 (TYPE_4__*,int ) ;
 TYPE_5__* FUNC_4 (TYPE_4__*,int ,int ) ;
 int FUNC_5 (int *,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_2__* FUNC_9 (int) ;

L2TP_TUNNEL *FUNC_10(L2TP_SERVER *VAR_7, L2TP_PACKET *VAR_8, UDPPACKET *VAR_9)
{
 L2TP_TUNNEL *VAR_10;
 L2TP_AVP *VAR_11;

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_10 = FUNC_9(sizeof(L2TP_TUNNEL));

 if (VAR_8->Ver == 3)
 {
  VAR_10->IsV3 = 1;
 }

 VAR_10->SessionList = FUNC_6(((void*)0));

 FUNC_0(&VAR_10->ClientIp, &VAR_9->SrcIP, sizeof(IP));
 VAR_10->ClientPort = VAR_9->SrcPort;

 FUNC_0(&VAR_10->ServerIp, &VAR_9->DstIP, sizeof(IP));
 VAR_10->ServerPort = VAR_9->DestPort;


 VAR_11 = FUNC_3(VAR_8, VAR_3);
 if (VAR_11 != ((void*)0) && VAR_11->DataSize >= 1 && VAR_11->DataSize < sizeof(VAR_10->HostName))
 {
  FUNC_0(VAR_10->HostName, VAR_11->Data, VAR_11->DataSize);
 }
 else
 {
  FUNC_5(VAR_10->HostName, sizeof(VAR_10->HostName), &VAR_10->ClientIp);
 }


 VAR_11 = FUNC_3(VAR_8, VAR_5);
 if (VAR_11 != ((void*)0) && VAR_11->DataSize >= 1 && VAR_11->DataSize < sizeof(VAR_10->VendorName))
 {
  FUNC_0(VAR_10->VendorName, VAR_11->Data, VAR_11->DataSize);
 }


 VAR_11 = FUNC_3(VAR_8, (VAR_8->Ver == 3 ? VAR_4 : VAR_2));
 if (VAR_11 == ((void*)0) || VAR_11->DataSize != (VAR_10->IsV3 ? sizeof(UINT) : sizeof(USHORT)))
 {
  goto LABEL_ERROR;
 }

 VAR_10->TunnelId1 = (VAR_10->IsV3 ? FUNC_7(VAR_11->Data) : FUNC_8(VAR_11->Data));
 VAR_10->TunnelId2 = FUNC_2(VAR_7, &VAR_10->ClientIp, VAR_10->IsV3);

 if (VAR_10->TunnelId2 == 0)
 {
  goto LABEL_ERROR;
 }

 if (VAR_8->Ver == 3)
 {

  VAR_11 = FUNC_4(VAR_8, VAR_1, VAR_6);
  if (VAR_11 != ((void*)0))
  {
   VAR_10->IsCiscoV3 = 1;
  }


  VAR_10->IsYamahaV3 = VAR_8->IsYamahaV3;
 }


 VAR_10->SendQueue = FUNC_6(((void*)0));


 VAR_10->RecvQueue = FUNC_6(VAR_0);

 VAR_10->LastRecvTick = VAR_7->Now;
 VAR_10->LastHelloSent = VAR_7->Now;

 return VAR_10;

LABEL_ERROR:
 FUNC_1(VAR_10);
 return ((void*)0);
}
