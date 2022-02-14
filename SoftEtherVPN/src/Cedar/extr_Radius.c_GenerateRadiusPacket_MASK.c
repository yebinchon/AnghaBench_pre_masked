
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int zero16 ;
typedef int rand16 ;
typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_16__ {scalar_t__ Current; scalar_t__ Buf; int Size; } ;
struct TYPE_15__ {scalar_t__ Type; int DataSize; scalar_t__* Data; scalar_t__ VendorCode; int VendorId; } ;
struct TYPE_14__ {scalar_t__* Authenticator; scalar_t__ Code; scalar_t__ PacketId; int AvpList; } ;
typedef TYPE_1__ RADIUS_PACKET ;
typedef TYPE_2__ RADIUS_AVP ;
typedef TYPE_3__ BUF ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,char*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__*,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 () ;
 TYPE_2__* FUNC_7 (scalar_t__,int ,int ,scalar_t__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (scalar_t__*,int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (scalar_t__*,int ) ;
 int FUNC_12 (TYPE_3__*,scalar_t__*,int) ;
 int FUNC_13 (TYPE_3__*,scalar_t__) ;
 int FUNC_14 (TYPE_3__*,int ) ;
 int FUNC_15 (TYPE_3__*,int ) ;
 int FUNC_16 (scalar_t__*,int) ;

BUF *FUNC_17(RADIUS_PACKET *VAR_3, char *VAR_4)
{
 BUF *VAR_5;
 UINT VAR_6;
 UCHAR VAR_7[16];
 UINT VAR_8 = 0;
 UINT VAR_9 = 0;
 bool VAR_10 = 0;
 bool VAR_11 = 0;
 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_16(VAR_7, sizeof(VAR_7));


 for (VAR_6 = 0;VAR_6 < FUNC_5(VAR_3->AvpList);VAR_6++)
 {
  RADIUS_AVP *VAR_12 = (RADIUS_AVP *)FUNC_4(VAR_3->AvpList, VAR_6);

  if (VAR_12->Type == VAR_1)
  {
   VAR_10 = 1;
  }
  if (VAR_12->Type == VAR_0)
  {
   VAR_11 = 1;
  }
 }

 if (VAR_10 && VAR_11 == 0)
 {
  RADIUS_AVP *VAR_13 = FUNC_7(VAR_0, 0, 0, VAR_7, sizeof(VAR_7));

  FUNC_0(VAR_3->AvpList, VAR_13);
 }

 if (FUNC_3(VAR_3->Authenticator, 16))
 {
  UCHAR VAR_14[16];

  FUNC_8(VAR_14, sizeof(VAR_14));
  FUNC_1(VAR_3->Authenticator, VAR_14, 16);
 }

 VAR_5 = FUNC_6();

 FUNC_13(VAR_5, VAR_3->Code);
 FUNC_13(VAR_5, VAR_3->PacketId);
 VAR_8 = VAR_5->Current;
 FUNC_15(VAR_5, 0);
 FUNC_12(VAR_5, VAR_3->Authenticator, 16);

 for (VAR_6 = 0;VAR_6 < FUNC_5(VAR_3->AvpList);VAR_6++)
 {
  RADIUS_AVP *VAR_15 = (RADIUS_AVP *)FUNC_4(VAR_3->AvpList, VAR_6);

  FUNC_13(VAR_5, VAR_15->Type);

  if (VAR_15->Type != VAR_2)
  {
   FUNC_13(VAR_5, (UCHAR)((UINT)VAR_15->DataSize + 2));

   if (VAR_15->Type == VAR_0)
   {
    VAR_9 = VAR_5->Current;

    if (VAR_15->DataSize == 16)
    {
     FUNC_16(VAR_15->Data, sizeof(VAR_15->Data));
    }
   }

   FUNC_12(VAR_5, VAR_15->Data, VAR_15->DataSize);
  }
  else
  {
   FUNC_13(VAR_5, (UCHAR)((UINT)VAR_15->DataSize + 8));
   FUNC_14(VAR_5, VAR_15->VendorId);
   FUNC_13(VAR_5, VAR_15->VendorCode);
   FUNC_13(VAR_5, (UCHAR)((UINT)VAR_15->DataSize + 2));
   FUNC_12(VAR_5, VAR_15->Data, VAR_15->DataSize);
  }
 }

 FUNC_11(((UCHAR *)VAR_5->Buf) + VAR_8, VAR_5->Size);

 if (VAR_9 != 0)
 {
  UCHAR VAR_16[16];

  FUNC_2(VAR_16, VAR_4, FUNC_10(VAR_4), VAR_5->Buf, VAR_5->Size);

  FUNC_1(((UCHAR *)VAR_5->Buf) + VAR_9, VAR_16, 16);
 }

 FUNC_9(VAR_5);

 return VAR_5;
}
