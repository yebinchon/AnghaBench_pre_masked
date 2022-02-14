
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_15__ {int Size; int HeadIpHeaderDataSize; int DataReserved; int MaxL3Size; int * HeadIpHeaderData; int Ttl; scalar_t__ Data; int Protocol; int DestIP; int SrcIP; int IpParts; } ;
struct TYPE_14__ {int Offset; int Size; } ;
struct TYPE_13__ {int IpCombine; int CurrentIpQuota; } ;
typedef TYPE_1__ NATIVE_NAT ;
typedef TYPE_2__ IP_PART ;
typedef TYPE_3__ IP_COMBINE ;
typedef int IPV4_HEADER ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 TYPE_2__* FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ,scalar_t__,int,int ,int *,int,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 TYPE_2__* FUNC_9 (int) ;

void FUNC_10(NATIVE_NAT *VAR_0, IP_COMBINE *VAR_1, UINT VAR_2, void *VAR_3, UINT VAR_4, bool VAR_5, UCHAR *VAR_6, UINT VAR_7)
{
 UINT VAR_8;
 IP_PART *VAR_9;
 UINT VAR_10;
 UINT VAR_11;

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }


 if ((VAR_2 + VAR_4) > 65535)
 {

  return;
 }

 if (VAR_5 == 0 && VAR_1->Size != 0)
 {
  if ((VAR_2 + VAR_4) > VAR_1->Size)
  {

   return;
  }
 }

 if (VAR_6 != ((void*)0) && VAR_7 >= sizeof(IPV4_HEADER))
 {
  if (VAR_1->HeadIpHeaderData == ((void*)0))
  {
   VAR_1->HeadIpHeaderData = FUNC_1(VAR_6, VAR_7);
   VAR_1->HeadIpHeaderDataSize = VAR_7;
  }
 }

 VAR_10 = VAR_2 + VAR_4;
 VAR_11 = VAR_1->DataReserved;

 while (VAR_1->DataReserved < VAR_10)
 {
  VAR_1->DataReserved = VAR_1->DataReserved * 4;
  VAR_1->Data = FUNC_8(VAR_1->Data, VAR_1->DataReserved);
 }
 VAR_11 = VAR_1->DataReserved - VAR_11;
 VAR_0->CurrentIpQuota += VAR_11;


 FUNC_2(((UCHAR *)VAR_1->Data) + VAR_2, VAR_3, VAR_4);

 if (VAR_5)
 {

  VAR_1->Size = VAR_2 + VAR_4;
 }



 for (VAR_8 = 0;VAR_8 < FUNC_5(VAR_1->IpParts);VAR_8++)
 {
  UINT VAR_12;
  IP_PART *VAR_13 = FUNC_4(VAR_1->IpParts, VAR_8);


  if ((VAR_13->Offset <= VAR_2) && ((VAR_13->Offset + VAR_13->Size) > VAR_2))
  {



   if ((VAR_2 + VAR_4) <= (VAR_13->Offset + VAR_13->Size))
   {

    VAR_4 = 0;
   }
   else
   {

    VAR_12 = VAR_13->Offset + VAR_13->Size - VAR_2;
    VAR_2 += VAR_12;
    VAR_4 -= VAR_12;
   }
  }
  if ((VAR_13->Offset < (VAR_2 + VAR_4)) && ((VAR_13->Offset + VAR_13->Size) >= (VAR_2 + VAR_4)))
  {



   VAR_12 = VAR_13->Offset + VAR_13->Size - VAR_2 - VAR_4;
   VAR_4 -= VAR_12;
  }

  if ((VAR_13->Offset >= VAR_2) && ((VAR_13->Offset + VAR_13->Size) <= (VAR_2 + VAR_4)))
  {

   VAR_13->Size = 0;
  }
 }

 if (VAR_4 != 0)
 {

  VAR_9 = FUNC_9(sizeof(IP_PART));

  VAR_9->Offset = VAR_2;
  VAR_9->Size = VAR_4;

  FUNC_0(VAR_1->IpParts, VAR_9);
 }

 if (VAR_1->Size != 0)
 {

  UINT VAR_14 = 0;
  UINT VAR_15;

  for (VAR_15 = 0;VAR_15 < FUNC_5(VAR_1->IpParts);VAR_15++)
  {
   IP_PART *VAR_16 = FUNC_4(VAR_1->IpParts, VAR_15);

   VAR_14 += VAR_16->Size;
  }

  if (VAR_14 == VAR_1->Size)
  {


   FUNC_7(VAR_0, VAR_1->SrcIP, VAR_1->DestIP, VAR_1->Protocol, VAR_1->Data, VAR_1->Size, VAR_1->Ttl,
    VAR_1->HeadIpHeaderData, VAR_1->HeadIpHeaderDataSize, VAR_1->MaxL3Size);


   FUNC_6(VAR_0, VAR_1);


   FUNC_3(VAR_0->IpCombine, VAR_1);
  }
 }
}
