
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_12__ {scalar_t__ Dsap; scalar_t__ Ssap; } ;
struct TYPE_11__ {int* DestAddress; int* SrcAddress; int Protocol; } ;
struct TYPE_10__ {int BroadcastPacket; int InvalidSourcePacket; int VlanTypeID; TYPE_2__* MacHeader; } ;
typedef TYPE_1__ PKT ;
typedef TYPE_2__ MAC_HEADER ;
typedef TYPE_3__ LLC_HEADER ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 int FUNC_5 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_6 (int*,int*,int) ;

bool FUNC_7(PKT *VAR_2, UCHAR *VAR_3, UINT VAR_4, bool VAR_5)
{
 UINT VAR_6;
 bool VAR_7, VAR_8;
 USHORT VAR_9;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }


 if (VAR_4 < sizeof(MAC_HEADER))
 {
  return 0;
 }


 VAR_2->MacHeader = (MAC_HEADER *)VAR_3;

 VAR_3 += sizeof(MAC_HEADER);
 VAR_4 -= sizeof(MAC_HEADER);


 VAR_2->BroadcastPacket = 1;
 VAR_7 = 1;
 VAR_8 = 1;
 for (VAR_6 = 0;VAR_6 < 6;VAR_6++)
 {
  if (VAR_2->MacHeader->DestAddress[VAR_6] != 0xff)
  {
   VAR_2->BroadcastPacket = 0;
  }
  if (VAR_2->MacHeader->SrcAddress[VAR_6] != 0xff)
  {
   VAR_7 = 0;
  }
  if (VAR_2->MacHeader->SrcAddress[VAR_6] != 0x00)
  {
   VAR_8 = 0;
  }
 }
 if (VAR_7 || VAR_8 || (FUNC_6(VAR_2->MacHeader->SrcAddress, VAR_2->MacHeader->DestAddress, 6) == 0))
 {
  VAR_2->InvalidSourcePacket = 1;
 }
 else
 {
  VAR_2->InvalidSourcePacket = 0;
 }

 if (VAR_2->MacHeader->DestAddress[0] & 0x01)
 {
  VAR_2->BroadcastPacket = 1;
 }


 VAR_9 = FUNC_0(VAR_2->MacHeader->Protocol);

 if (VAR_9 > 1500)
 {

  switch (VAR_9)
  {
  case 130:
   if (VAR_5)
   {
    return 1;
   }

   return FUNC_1(VAR_2, VAR_3, VAR_4);

  case 129:
   if (VAR_5)
   {
    return 1;
   }

   return FUNC_3(VAR_2, VAR_3, VAR_4);

  case 128:
   if (VAR_5)
   {
    return 1;
   }

   return FUNC_4(VAR_2, VAR_3, VAR_4);

  default:
   if (VAR_9 == VAR_2->VlanTypeID)
   {

    return FUNC_5(VAR_2, VAR_3, VAR_4);
   }
   else
   {
    return 1;
   }
  }
 }
 else
 {


  UINT VAR_10 = (UINT)VAR_9;
  LLC_HEADER *VAR_11;


  if (VAR_4 < VAR_10 || VAR_4 < sizeof(LLC_HEADER))
  {
   return 1;
  }


  VAR_11 = (LLC_HEADER *)VAR_3;
  VAR_3 += sizeof(LLC_HEADER);
  VAR_4 -= sizeof(LLC_HEADER);


  if (VAR_11->Dsap == VAR_0 && VAR_11->Ssap == VAR_1)
  {

   return FUNC_2(VAR_2, VAR_3, VAR_4);
  }
  else
  {

   return 1;
  }
 }
}
