
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_15__ {scalar_t__ Protocol; int TotalLength; int DstIP; int SrcIP; } ;
struct TYPE_14__ {int DestAddress; int SrcAddress; } ;
struct TYPE_13__ {scalar_t__ Protocol; int PayloadSize; scalar_t__ Payload; int * FragmentHeader; scalar_t__ IsFragment; TYPE_3__* IPv6Header; } ;
struct TYPE_12__ {int Flag; scalar_t__ Checksum; } ;
typedef TYPE_1__ TCP_HEADER ;
typedef TYPE_2__ IPV6_HEADER_PACKET_INFO ;
typedef TYPE_3__ IPV6_HEADER ;
typedef TYPE_4__ IPV4_HEADER ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__,TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__,TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (TYPE_2__*,int*,int) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int*,int) ;

bool FUNC_11(UCHAR *VAR_6, UINT VAR_7, UINT VAR_8)
{
 UCHAR VAR_9;
 TCP_HEADER *VAR_10 = ((void*)0);
 UINT VAR_11 = 0;
 UINT VAR_12;
 UCHAR *VAR_13;
 UINT VAR_14;
 IPV4_HEADER *VAR_15 = ((void*)0);
 IPV6_HEADER *VAR_16 = ((void*)0);

 if (VAR_6 == ((void*)0) || VAR_7 == 0 || VAR_8 == 0)
 {
  return 0;
 }


 VAR_9 = (VAR_6[0] >> 4) & 0x0f;

 if (VAR_9 == 4)
 {
  UINT VAR_17;
  UINT VAR_18;

  if (VAR_7 < sizeof(IPV4_HEADER))
  {

   return 0;
  }

  VAR_15 = (IPV4_HEADER *)VAR_6;

  if (VAR_15->Protocol != VAR_1)
  {

   return 0;
  }

  if (FUNC_4(VAR_15) != 0)
  {

   return 0;
  }

  if (FUNC_2(VAR_15) & 0x01)
  {

   return 0;
  }

  VAR_17 = FUNC_3(VAR_15) * 4;
  if (VAR_17 < sizeof(IPV4_HEADER))
  {

   return 0;
  }

  if (VAR_7 < VAR_17)
  {

   return 0;
  }

  VAR_18 = FUNC_8(&VAR_15->TotalLength);

  if (VAR_18 < VAR_17)
  {

   return 0;
  }

  if (VAR_7 < VAR_18)
  {

   return 0;
  }

  VAR_6 += VAR_17;
  VAR_7 = VAR_18 - VAR_17;

  if (VAR_7 < sizeof(TCP_HEADER))
  {

   return 0;
  }

  VAR_10 = (TCP_HEADER *)VAR_6;
  VAR_11 = VAR_7;
 }
 else if (VAR_9 == 6)
 {

  IPV6_HEADER_PACKET_INFO VAR_19;

  if (FUNC_7(&VAR_19, VAR_6, VAR_7) == 0)
  {

   return 0;
  }

  VAR_16 = VAR_19;
  if (VAR_16 == ((void*)0))
  {
   return 0;
  }

  if (VAR_19 != VAR_1)
  {

   return 0;
  }

  if (VAR_19)
  {

   return 0;
  }

  if (VAR_19 != ((void*)0))
  {
   if (FUNC_5(VAR_19) & VAR_0)
   {

    return 0;
   }
  }

  VAR_10 = (TCP_HEADER *)VAR_19;
  VAR_11 = VAR_19;
 }
 else
 {

  return 0;
 }


 if (VAR_10 == ((void*)0) || VAR_11 < sizeof(TCP_HEADER))
 {
  return 0;
 }

 VAR_12 = FUNC_9(VAR_10) * 4;
 if (VAR_12 < sizeof(TCP_HEADER))
 {

  return 0;
 }

 if (VAR_11 < VAR_12)
 {

  return 0;
 }

 if (((VAR_10->Flag & VAR_4) == 0) ||
  ((VAR_10->Flag & VAR_3) ||
  (VAR_10->Flag & VAR_2) ||
  (VAR_10->Flag & VAR_5)))
 {

  return 0;
 }


 VAR_13 = ((UCHAR *)VAR_10) + sizeof(TCP_HEADER);
 VAR_14 = VAR_12 - sizeof(TCP_HEADER);

 if (VAR_16 != ((void*)0))
 {

  if (VAR_8 >= 20)
  {
   VAR_8 -= 20;
  }
 }


 VAR_8 = FUNC_6(VAR_8, 64);

 if (VAR_14 >= 4 && VAR_13[0] == 0x02 && VAR_13[1] == 0x04)
 {

  USHORT VAR_20 = FUNC_8(((UCHAR *)VAR_13) + 2);

  if (VAR_20 <= VAR_8)
  {


   return 0;
  }
  else
  {
   FUNC_10(((UCHAR *)VAR_13) + 2, VAR_8);


   VAR_10->Checksum = 0;

   if (VAR_15 != ((void*)0))
   {

    VAR_10->Checksum = FUNC_0(VAR_15->SrcIP, VAR_15->DstIP, VAR_1, VAR_10, VAR_11, 0);
   }
   else
   {

    VAR_10->Checksum = FUNC_1(&VAR_16->SrcAddress, &VAR_16->DestAddress,
     VAR_1, VAR_10, VAR_11, 0);
   }

   return 1;
  }
 }
 else
 {

  return 0;
 }
}
