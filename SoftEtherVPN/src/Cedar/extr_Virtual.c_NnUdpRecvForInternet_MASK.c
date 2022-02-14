
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int Now; int Counter; TYPE_4__* NativeNat; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ USHORT ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_20__ {int Checksum; void* PacketLength; void* DstPort; void* SrcPort; } ;
typedef TYPE_2__ UDP_HEADER ;
typedef int UCHAR ;
struct TYPE_22__ {int NatTableForRecv; int NatTableForSend; int PublicIP; } ;
struct TYPE_21__ {scalar_t__ PublicPort; int PublicIp; int LastCommTime; int TotalSent; int Id; int CreatedTime; scalar_t__ DestPort; scalar_t__ DestIp; scalar_t__ SrcPort; scalar_t__ SrcIp; int Protocol; void* HashCodeForRecv; void* HashCodeForSend; int Status; } ;
typedef TYPE_3__ NATIVE_NAT_ENTRY ;
typedef TYPE_4__ NATIVE_NAT ;
typedef int IP ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int ,scalar_t__,int ,TYPE_2__*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,void*,scalar_t__) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 void* VAR_0 ;
 int FUNC_6 (char*,int ,int *) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (TYPE_1__*,char*,int ,char*,scalar_t__,char*,scalar_t__) ;
 int FUNC_9 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_10 (TYPE_4__*,int ,int,int ,scalar_t__,TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_4__*,int ,int ,int ,int ) ;
 int FUNC_13 (TYPE_3__*,int ,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 TYPE_3__* FUNC_14 (int ,TYPE_3__*) ;
 int FUNC_15 (int *,scalar_t__) ;
 void* FUNC_16 (scalar_t__) ;

void FUNC_17(VH *VAR_5, UINT VAR_6, UINT VAR_7, UINT VAR_8, UINT VAR_9, void *VAR_10, UINT VAR_11, UINT VAR_12)
{
 NATIVE_NAT_ENTRY VAR_13;
 NATIVE_NAT_ENTRY *VAR_14;
 NATIVE_NAT *VAR_15;
 UDP_HEADER *VAR_16;

 if (FUNC_11(VAR_5) == 0 || VAR_10 == ((void*)0))
 {
  return;
 }

 VAR_15 = VAR_5->NativeNat;


 FUNC_13(&VAR_13, VAR_4, VAR_6, VAR_7, 0, 0, 0, 0);

 VAR_14 = FUNC_14(VAR_15->NatTableForSend, &VAR_13);

 if (VAR_14 == ((void*)0))
 {

  UINT VAR_17;

  if (FUNC_2(VAR_5) == 0)
  {

   return;
  }

  FUNC_9(VAR_15, VAR_6, VAR_4);


  VAR_17 = FUNC_12(VAR_15, VAR_4, 0, 0, VAR_15->PublicIP);
  if (VAR_17 == 0)
  {

   return;
  }

  VAR_14 = FUNC_16(sizeof(NATIVE_NAT_ENTRY));

  VAR_14->Status = VAR_3;

  VAR_14->HashCodeForSend = VAR_0;
  VAR_14->HashCodeForRecv = VAR_0;
  VAR_14->Id = FUNC_7(VAR_5->Counter);
  VAR_14->Protocol = VAR_4;
  VAR_14->SrcIp = VAR_6;
  VAR_14->SrcPort = VAR_7;
  VAR_14->DestIp = 0;
  VAR_14->DestPort = 0;
  VAR_14->PublicIp = VAR_15->PublicIP;
  VAR_14->PublicPort = VAR_17;

  VAR_14->CreatedTime = VAR_5->Now;
  VAR_14->LastCommTime = VAR_5->Now;


  FUNC_0(VAR_15->NatTableForSend, VAR_14);
  FUNC_0(VAR_15->NatTableForRecv, VAR_14);


  if (1)
  {
   IP VAR_18, VAR_19;
   char VAR_20[VAR_2], VAR_21[VAR_2];
   FUNC_15(&VAR_18, VAR_6);
   FUNC_15(&VAR_19, VAR_8);
   FUNC_6(VAR_20, 0, &VAR_18);
   FUNC_6(VAR_21, 0, &VAR_19);

   FUNC_8(VAR_5, "LH_NAT_UDP_CREATED", VAR_14->Id, VAR_20, VAR_7, VAR_21, VAR_9);
  }
 }


 VAR_16 = FUNC_16(sizeof(UDP_HEADER) + VAR_11);

 VAR_16->SrcPort = FUNC_4(VAR_14->PublicPort);
 VAR_16->DstPort = FUNC_4(VAR_9);
 VAR_16->PacketLength = FUNC_4((USHORT)sizeof(UDP_HEADER) + VAR_11);

 FUNC_3(((UCHAR *)VAR_16) + sizeof(UDP_HEADER), VAR_10, VAR_11);

 VAR_16->Checksum = FUNC_1(VAR_14->PublicIp, VAR_8, VAR_1, VAR_16, sizeof(UDP_HEADER) + VAR_11, 0);

 VAR_14->TotalSent += (UINT64)VAR_11;
 VAR_14->LastCommTime = VAR_5->Now;


 FUNC_10(VAR_15, VAR_1, 127, VAR_14->PublicIp, VAR_8, VAR_16, sizeof(UDP_HEADER) + VAR_11, VAR_12);

 FUNC_5(VAR_16);
}
