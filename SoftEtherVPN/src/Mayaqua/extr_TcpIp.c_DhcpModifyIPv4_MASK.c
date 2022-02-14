
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_18__ {scalar_t__ Checksum; } ;
typedef TYPE_4__ UDP_HEADER ;
typedef int UCHAR ;
struct TYPE_20__ {void* Buf; scalar_t__ Size; } ;
struct TYPE_17__ {TYPE_2__* IPv4Header; } ;
struct TYPE_15__ {TYPE_4__* UDPHeader; } ;
struct TYPE_19__ {scalar_t__ TypeL3; scalar_t__ TypeL4; scalar_t__ TypeL7; scalar_t__ PayloadSize; void* PacketData; scalar_t__ PacketSize; TYPE_3__ L3; TYPE_1__ L4; int Payload; } ;
struct TYPE_16__ {int DstIP; int SrcIP; } ;
typedef TYPE_5__ PKT ;
typedef int DHCP_MODIFY_OPTION ;
typedef TYPE_6__ BUF ;


 scalar_t__ FUNC_0 (int ,int ,int ,TYPE_4__*,scalar_t__,int ) ;
 TYPE_6__* FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_6__* FUNC_4 () ;
 TYPE_5__* FUNC_5 (void*,scalar_t__,int,int ,int,int,int) ;
 int FUNC_6 (TYPE_6__*,void*,scalar_t__) ;

BUF *FUNC_7(DHCP_MODIFY_OPTION *VAR_4, void *VAR_5, UINT VAR_6)
{
 PKT *VAR_7;
 BUF *VAR_8 = ((void*)0);

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == 0)
 {
  return ((void*)0);
 }

 VAR_7 = FUNC_5(VAR_5, VAR_6, 0, 0, 0, 0, 0);

 if (VAR_7 != ((void*)0) && VAR_7->TypeL3 == VAR_1 && VAR_7->TypeL4 == VAR_2 && VAR_7->TypeL7 == VAR_3)
 {
  BUF *VAR_9 = FUNC_1(VAR_4, VAR_7->Payload, VAR_7->PayloadSize);

  if (VAR_9 != ((void*)0))
  {
   VAR_8 = FUNC_4();

   FUNC_6(VAR_8, VAR_7->PacketData, VAR_7->PacketSize - VAR_7->PayloadSize);
   FUNC_6(VAR_8, VAR_9->Buf, VAR_9->Size);

   FUNC_2(VAR_9);
  }
 }

 FUNC_3(VAR_7);

 if (VAR_8 != ((void*)0))
 {
  PKT *VAR_10 = FUNC_5(VAR_8->Buf, VAR_8->Size, 0, 0, 0, 0, 0);

  if (VAR_10 != ((void*)0))
  {

   if (VAR_10->TypeL3 == VAR_1 && VAR_10->TypeL4 == VAR_2)
   {
    UDP_HEADER *VAR_11 = VAR_10->L4.UDPHeader;

    VAR_11->Checksum = 0;
    VAR_11->Checksum = FUNC_0(VAR_10->L3.IPv4Header->SrcIP,
     VAR_10->L3.IPv4Header->DstIP,
     VAR_0,
     VAR_11,
     VAR_10->PacketSize - (UINT)(((UCHAR *)VAR_11) - ((UCHAR *)VAR_10->PacketData)), 0);
   }

   FUNC_3(VAR_10);
  }
 }

 return VAR_8;
}
