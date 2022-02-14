
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int VH ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_16__ {int TimeToLive; int Protocol; int Identification; int DstIP; int SrcIP; int TotalLength; } ;
struct TYPE_15__ {int MaxL3Size; } ;
struct TYPE_13__ {TYPE_4__* IPv4Header; scalar_t__ PointerL3; } ;
struct TYPE_14__ {int PacketSize; int BroadcastPacket; TYPE_1__ L3; int MacAddressSrc; } ;
typedef TYPE_2__ PKT ;
typedef TYPE_3__ IP_COMBINE ;
typedef TYPE_4__ IPV4_HEADER ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,TYPE_3__*,int,void*,int,int,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_3__* FUNC_6 (int *,int ,int ,int,int ,int ,int ,int) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int *,int ,int ,int ,void*,int,int ,int ,int *,int,int,int) ;
 int FUNC_9 (int ) ;
 int VAR_0 ;
 int FUNC_10 (int,int) ;
 TYPE_3__* FUNC_11 (int *,int ,int ,int,int ) ;

void FUNC_12(VH *VAR_1, PKT *VAR_2)
{
 IPV4_HEADER *VAR_3;
 void *VAR_4;
 UINT VAR_5;
 UINT VAR_6;
 UINT VAR_7;
 bool VAR_8;
 UCHAR *VAR_9 = ((void*)0);
 UINT VAR_10 = 0;
 bool VAR_11 = 0;
 UINT VAR_12;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = VAR_2->L3.IPv4Header;

 if (VAR_2->BroadcastPacket)
 {
  VAR_11 = FUNC_9(VAR_2->MacAddressSrc);
 }


 VAR_7 = FUNC_4(VAR_2->L3.IPv4Header) * 4;
 VAR_10 = VAR_7;


 if (FUNC_7(VAR_3) == 0)
 {
  return;
 }


 VAR_4 = ((UCHAR *)VAR_2->L3.PointerL3) + VAR_7;


 FUNC_0(VAR_1, VAR_2->L3.IPv4Header->SrcIP, VAR_2->MacAddressSrc);


 VAR_6 = VAR_12 = FUNC_2(VAR_3->TotalLength);
 if (VAR_6 <= VAR_7)
 {

  return;
 }
 VAR_6 -= VAR_7;


 VAR_5 = VAR_2->PacketSize - (VAR_7 + VAR_0);
 if (VAR_5 < VAR_6)
 {

  return;
 }

 if (FUNC_5(VAR_3) == 0 && (FUNC_3(VAR_3) & 0x01) == 0)
 {

  VAR_9 = (UCHAR *)VAR_2->L3.IPv4Header;
  FUNC_8(VAR_1, VAR_3->SrcIP, VAR_3->DstIP, VAR_3->Protocol, VAR_4, VAR_6, VAR_2->BroadcastPacket, VAR_3->TimeToLive,
   VAR_9, VAR_10, VAR_11, VAR_12);
 }
 else
 {

  UINT VAR_13 = FUNC_5(VAR_3) * 8;
  IP_COMBINE *VAR_14 = FUNC_11(VAR_1, VAR_3->SrcIP, VAR_3->DstIP, FUNC_2(VAR_3->Identification), VAR_3->Protocol);

  if (VAR_13 == 0)
  {
   VAR_9 = (UCHAR *)VAR_2->L3.IPv4Header;
  }

  VAR_8 = ((FUNC_3(VAR_3) & 0x01) == 0 ? 1 : 0);

  if (VAR_14 != ((void*)0))
  {

   VAR_14->MaxL3Size = FUNC_10(VAR_14->MaxL3Size, VAR_12);
   FUNC_1(VAR_1, VAR_14, VAR_13, VAR_4, VAR_6, VAR_8, VAR_9, VAR_10);
  }
  else
  {

   VAR_14 = FUNC_6(
    VAR_1, VAR_3->SrcIP, VAR_3->DstIP, FUNC_2(VAR_3->Identification), VAR_3->Protocol, VAR_2->BroadcastPacket,
    VAR_3->TimeToLive, VAR_11);
   if (VAR_14 != ((void*)0))
   {
    VAR_14->MaxL3Size = VAR_12;

    FUNC_1(VAR_1, VAR_14, VAR_13, VAR_4, VAR_6, VAR_8, VAR_9, VAR_10);
   }
  }
 }
}
