
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_15__ {int TimeToLive; int Protocol; int Identification; int DstIP; int SrcIP; int TotalLength; } ;
struct TYPE_14__ {void* MaxL3Size; } ;
struct TYPE_12__ {TYPE_4__* IPv4Header; scalar_t__ PointerL3; } ;
struct TYPE_13__ {int PacketSize; int BroadcastPacket; TYPE_1__ L3; } ;
typedef TYPE_2__ PKT ;
typedef int NATIVE_NAT ;
typedef TYPE_3__ IP_COMBINE ;
typedef TYPE_4__ IPV4_HEADER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_0 ;
 void* FUNC_4 (void*,int) ;
 int FUNC_5 (int *,TYPE_3__*,int,void*,int,int,int *,int) ;
 TYPE_3__* FUNC_6 (int *,int ,int ,int,int ,int ,int ,int) ;
 int FUNC_7 (int *,int ,int ,int ,void*,int,int ,int *,int,int) ;
 TYPE_3__* FUNC_8 (int *,int ,int ,int,int ) ;

void FUNC_9(NATIVE_NAT *VAR_1, PKT *VAR_2)
{
 IPV4_HEADER *VAR_3;
 void *VAR_4;
 UINT VAR_5;
 UINT VAR_6;
 UINT VAR_7;
 bool VAR_8 = 0;
 UINT VAR_9 = 0;
 UCHAR *VAR_10 = ((void*)0);
 UINT VAR_11 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = VAR_2->L3.IPv4Header;


 VAR_7 = FUNC_2(VAR_2->L3.IPv4Header) * 4;
 VAR_11 = VAR_7;


 VAR_4 = ((UCHAR *)VAR_2->L3.PointerL3) + VAR_7;


 VAR_6 = VAR_9 = FUNC_0(VAR_3->TotalLength);
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

 if (FUNC_3(VAR_3) == 0 && (FUNC_1(VAR_3) & 0x01) == 0)
 {

  VAR_10 = (UCHAR *)VAR_2->L3.IPv4Header;
  FUNC_7(VAR_1, VAR_3->SrcIP, VAR_3->DstIP, VAR_3->Protocol, VAR_4, VAR_6, VAR_3->TimeToLive,
   VAR_10, VAR_11, VAR_9);
 }
 else
 {

  UINT VAR_12 = FUNC_3(VAR_3) * 8;
  IP_COMBINE *VAR_13 = FUNC_8(VAR_1, VAR_3->SrcIP, VAR_3->DstIP, FUNC_0(VAR_3->Identification), VAR_3->Protocol);

  if (VAR_12 == 0)
  {
   VAR_10 = (UCHAR *)VAR_2->L3.IPv4Header;
  }

  VAR_8 = ((FUNC_1(VAR_3) & 0x01) == 0 ? 1 : 0);

  if (VAR_13 != ((void*)0))
  {

   VAR_13->MaxL3Size = FUNC_4(VAR_13->MaxL3Size, VAR_9);
   FUNC_5(VAR_1, VAR_13, VAR_12, VAR_4, VAR_6, VAR_8, VAR_10, VAR_11);
  }
  else
  {

   VAR_13 = FUNC_6(
    VAR_1, VAR_3->SrcIP, VAR_3->DstIP, FUNC_0(VAR_3->Identification), VAR_3->Protocol, VAR_2->BroadcastPacket,
    VAR_3->TimeToLive, 0);
   if (VAR_13 != ((void*)0))
   {
    VAR_13->MaxL3Size = FUNC_4(VAR_13->MaxL3Size, VAR_9);
    FUNC_5(VAR_1, VAR_13, VAR_12, VAR_4, VAR_6, VAR_8, VAR_10, VAR_11);
   }
  }
 }
}
