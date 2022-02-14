
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int NatTable; int SockEvent; int Now; int Counter; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {scalar_t__ SecureNAT_MaxTcpSessionsPerIp; scalar_t__ SecureNAT_MaxUdpSessionsPerIp; } ;
struct TYPE_18__ {int ProxyDns; int UdpSocketCreated; int Id; void* UdpRecvQueue; void* UdpSendQueue; int LastCommTime; int CreatedTime; scalar_t__ DestIpProxy; scalar_t__ DestPort; scalar_t__ DestIp; scalar_t__ SrcPort; scalar_t__ SrcIp; int Protocol; int lock; TYPE_1__* v; } ;
typedef TYPE_2__ NAT_ENTRY ;
typedef int IP ;
typedef TYPE_3__ HUB_OPTION ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,char*,scalar_t__,char*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__,int ,int) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_6 (char*,int ,int *) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (TYPE_1__*,char*,int ,char*,scalar_t__,char*,scalar_t__) ;
 TYPE_3__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 () ;
 void* FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,scalar_t__) ;
 TYPE_2__* FUNC_14 (int) ;

NAT_ENTRY *FUNC_15(VH *VAR_2, UINT VAR_3, UINT VAR_4, UINT VAR_5, UINT VAR_6, UINT VAR_7)
{
 NAT_ENTRY *VAR_8;
 HUB_OPTION *VAR_9;

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 if (FUNC_1(VAR_2) == 0)
 {
  return ((void*)0);
 }

 VAR_9 = FUNC_9(VAR_2);
 if (VAR_9 != ((void*)0) && VAR_9->SecureNAT_MaxTcpSessionsPerIp != 0)
 {
  if (FUNC_4(VAR_2, VAR_3, VAR_1, 0) >= VAR_9->SecureNAT_MaxUdpSessionsPerIp)
  {
   NAT_ENTRY *VAR_10 = FUNC_5(VAR_2, VAR_3, VAR_1);

   if (VAR_10 != ((void*)0))
   {
    FUNC_3(VAR_2, VAR_10);
   }
  }
 }

 VAR_8 = FUNC_14(sizeof(NAT_ENTRY));
 VAR_8->Id = FUNC_7(VAR_2->Counter);
 VAR_8->v = VAR_2;
 VAR_8->lock = FUNC_10();
 VAR_8->Protocol = VAR_1;
 VAR_8->SrcIp = VAR_3;
 VAR_8->SrcPort = VAR_4;
 VAR_8->DestIp = VAR_5;
 VAR_8->DestPort = VAR_6;

 if (VAR_7 != 0)
 {
  VAR_8->ProxyDns = 1;
  VAR_8->DestIpProxy = VAR_7;
 }

 VAR_8->CreatedTime = VAR_8->LastCommTime = VAR_2->Now;

 VAR_8->UdpSendQueue = FUNC_11();
 VAR_8->UdpRecvQueue = FUNC_11();

 VAR_8->UdpSocketCreated = 0;

 FUNC_12(VAR_2->SockEvent);


 {
  IP VAR_11, VAR_12;
  char VAR_13[VAR_0], VAR_14[VAR_0];
  FUNC_13(&VAR_11, VAR_3);
  FUNC_13(&VAR_12, VAR_5);
  FUNC_6(VAR_13, 0, &VAR_11);
  FUNC_6(VAR_14, 0, &VAR_12);
  FUNC_2("NAT_ENTRY: CreateNatUdp %s %u -> %s %u\n", VAR_13, VAR_4, VAR_14, VAR_6);

  FUNC_8(VAR_2, "LH_NAT_UDP_CREATED", VAR_8->Id, VAR_13, VAR_4, VAR_14, VAR_6);
 }


 FUNC_0(VAR_2->NatTable, VAR_8);

 return VAR_8;
}
