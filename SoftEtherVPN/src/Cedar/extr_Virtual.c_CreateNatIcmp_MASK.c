
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int NatTable; int SockEvent; int Now; int Counter; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_18__ {scalar_t__ SecureNAT_MaxIcmpSessionsPerIp; } ;
struct TYPE_17__ {int UdpSocketCreated; scalar_t__ IcmpOriginalCopySize; int IcmpOriginalCopy; void* UdpRecvQueue; void* UdpSendQueue; int LastCommTime; int CreatedTime; scalar_t__ DestPort; scalar_t__ DestIp; scalar_t__ SrcPort; scalar_t__ SrcIp; int Protocol; int lock; TYPE_1__* v; int Id; } ;
typedef TYPE_2__ NAT_ENTRY ;
typedef int IP ;
typedef TYPE_3__ HUB_OPTION ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (char*,char*,scalar_t__,char*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__,int ,int) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_7 (char*,int ,int *) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 () ;
 void* FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,scalar_t__) ;
 TYPE_2__* FUNC_14 (int) ;

NAT_ENTRY *FUNC_15(VH *VAR_2, UINT VAR_3, UINT VAR_4, UINT VAR_5, UINT VAR_6, UCHAR *VAR_7, UINT VAR_8)
{
 NAT_ENTRY *VAR_9;
 HUB_OPTION *VAR_10;

 if (VAR_2 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == 0)
 {
  return ((void*)0);
 }

 if (FUNC_1(VAR_2) == 0)
 {
  return ((void*)0);
 }

 VAR_10 = FUNC_9(VAR_2);
 if (VAR_10 != ((void*)0) && VAR_10->SecureNAT_MaxIcmpSessionsPerIp != 0)
 {
  if (FUNC_5(VAR_2, VAR_3, VAR_1, 0) >= VAR_10->SecureNAT_MaxIcmpSessionsPerIp)
  {
   NAT_ENTRY *VAR_11 = FUNC_6(VAR_2, VAR_3, VAR_1);

   if (VAR_11 != ((void*)0))
   {
    FUNC_4(VAR_2, VAR_11);
   }
  }
 }

 VAR_9 = FUNC_14(sizeof(NAT_ENTRY));
 VAR_9->Id = FUNC_8(VAR_2->Counter);
 VAR_9->v = VAR_2;
 VAR_9->lock = FUNC_10();
 VAR_9->Protocol = VAR_1;
 VAR_9->SrcIp = VAR_3;
 VAR_9->SrcPort = VAR_4;
 VAR_9->DestIp = VAR_5;
 VAR_9->DestPort = VAR_6;

 VAR_9->CreatedTime = VAR_9->LastCommTime = VAR_2->Now;

 VAR_9->UdpSendQueue = FUNC_11();
 VAR_9->UdpRecvQueue = FUNC_11();

 VAR_9->UdpSocketCreated = 0;

 VAR_9->IcmpOriginalCopy = FUNC_2(VAR_7, VAR_8);
 VAR_9->IcmpOriginalCopySize = VAR_8;

 FUNC_12(VAR_2->SockEvent);


 {
  IP VAR_12, VAR_13;
  char VAR_14[VAR_0], VAR_15[VAR_0];
  FUNC_13(&VAR_12, VAR_3);
  FUNC_13(&VAR_13, VAR_5);
  FUNC_7(VAR_14, 0, &VAR_12);
  FUNC_7(VAR_15, 0, &VAR_13);
  FUNC_3("NAT_ENTRY: CreateNatIcmp %s %u -> %s %u\n", VAR_14, VAR_4, VAR_15, VAR_6);


 }


 FUNC_0(VAR_2->NatTable, VAR_9);

 return VAR_9;
}
