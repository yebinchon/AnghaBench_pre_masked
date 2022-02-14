
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int USHORT ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_18__ {int Size; scalar_t__ Buf; } ;
struct TYPE_17__ {int DataSize; int VendorID; int Type; int* Data; scalar_t__ Mandatory; } ;
struct TYPE_16__ {int Ver; scalar_t__ SessionId; int IsControl; scalar_t__ TunnelId; int Ns; int Nr; int* Data; int DataSize; int AvpList; } ;
struct TYPE_15__ {int IsYamahaV3; } ;
typedef TYPE_1__ L2TP_TUNNEL ;
typedef TYPE_2__ L2TP_PACKET ;
typedef TYPE_3__ L2TP_AVP ;
typedef TYPE_4__ BUF ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int ) ;
 int * FUNC_4 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__* FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int ,scalar_t__*,int) ;
 TYPE_4__* FUNC_8 () ;
 int FUNC_9 (TYPE_4__*,int ,int ) ;
 int FUNC_10 (int*,int) ;
 int FUNC_11 (TYPE_4__*,...) ;

BUF *FUNC_12(L2TP_PACKET *VAR_9, L2TP_TUNNEL *VAR_10)
{
 BUF *VAR_11;
 UCHAR VAR_12;
 USHORT VAR_13;
 UINT VAR_14;

 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_11 = FUNC_8();

 VAR_12 = 0;

 if (VAR_9->Ver == 3)
 {
  if (VAR_9->SessionId != 0)
  {

   L2TP_AVP *VAR_15 = FUNC_3(VAR_9, VAR_3);
   if (VAR_15 == ((void*)0) || VAR_15->DataSize != sizeof(UINT))
   {
    UINT VAR_16 = FUNC_2(VAR_9->SessionId);
    FUNC_0(VAR_9->AvpList, FUNC_7(VAR_3, 1, 0, &VAR_16, sizeof(UINT)));

    if (FUNC_4(VAR_9, VAR_0, VAR_4) != ((void*)0))
    {
     FUNC_0(VAR_9->AvpList, FUNC_7(VAR_1, 1, VAR_4, &VAR_16, sizeof(UINT)));
    }
   }
  }
 }

 if (VAR_9->Ver == 3)
 {
  if (VAR_10->IsYamahaV3 == 0)
  {

   VAR_14 = 0;
   FUNC_11(VAR_11, &VAR_14, sizeof(UINT));
  }
 }


 if (VAR_9->IsControl)
 {
  VAR_12 |= VAR_8;
  VAR_12 |= VAR_5;
  VAR_12 |= VAR_7;
 }
 else
 {
  VAR_12 |= VAR_6;
 }

 if (VAR_9->IsControl == 0 && VAR_9->Ver == 3 && VAR_10->IsYamahaV3)
 {
  VAR_12 = 0;
 }

 FUNC_11(VAR_11, &VAR_12, 1);


 VAR_12 = 2;
 if (VAR_9->Ver == 3)
 {
  VAR_12 = 3;
 }
 FUNC_11(VAR_11, &VAR_12, 1);


 if (VAR_9->IsControl)
 {
  VAR_13 = 0;
  FUNC_11(VAR_11, &VAR_13, sizeof(USHORT));
 }


 if (VAR_9->IsControl == 0 && VAR_9->Ver == 3 && VAR_10->IsYamahaV3)
 {
  VAR_13 = 0;
  FUNC_11(VAR_11, &VAR_13, sizeof(USHORT));
 }


 if (VAR_9->Ver != 3)
 {
  VAR_13 = FUNC_1((USHORT)VAR_9->TunnelId);
  FUNC_11(VAR_11, &VAR_13, sizeof(USHORT));
 }
 else
 {
  VAR_14 = FUNC_2(VAR_9->TunnelId);
  FUNC_11(VAR_11, &VAR_14, sizeof(UINT));
 }


 if (VAR_9->Ver != 3)
 {
  VAR_13 = FUNC_1((USHORT)VAR_9->SessionId);
  FUNC_11(VAR_11, &VAR_13, sizeof(USHORT));
 }

 if (VAR_9->IsControl)
 {

  VAR_13 = FUNC_1(VAR_9->Ns);
  FUNC_11(VAR_11, &VAR_13, sizeof(USHORT));


  VAR_13 = FUNC_1(VAR_9->Nr);
  FUNC_11(VAR_11, &VAR_13, sizeof(USHORT));
 }
 else
 {
  if (!(VAR_9->IsControl == 0 && VAR_9->Ver == 3 && VAR_10->IsYamahaV3))
  {

   VAR_13 = 0;
   FUNC_11(VAR_11, &VAR_13, sizeof(USHORT));
  }
 }

 if (VAR_9->IsControl)
 {

  UINT VAR_17;
  for (VAR_17 = 0;VAR_17 < FUNC_6(VAR_9->AvpList);VAR_17++)
  {
   L2TP_AVP *VAR_18 = FUNC_5(VAR_9->AvpList, VAR_17);


   VAR_13 = FUNC_1(VAR_18->DataSize + 6);

   if (VAR_18->Mandatory)
   {
    *((UCHAR *)&VAR_13) |= VAR_2;
   }

   FUNC_11(VAR_11, &VAR_13, sizeof(USHORT));


   VAR_13 = FUNC_1(VAR_18->VendorID);
   FUNC_11(VAR_11, &VAR_13, sizeof(USHORT));


   VAR_13 = FUNC_1(VAR_18->Type);
   FUNC_11(VAR_11, &VAR_13, sizeof(USHORT));


   FUNC_11(VAR_11, VAR_18->Data, VAR_18->DataSize);
  }
 }
 else
 {

  FUNC_11(VAR_11, VAR_9->Data, VAR_9->DataSize);
 }

 if (VAR_9->IsControl)
 {

  bool VAR_19 = ((VAR_9->Ver == 3) && (VAR_10->IsYamahaV3 == 0));
  FUNC_10(((UCHAR *)VAR_11->Buf) + 2 + (VAR_19 ? sizeof(UINT) : 0), (USHORT)(VAR_11->Size - (VAR_19 ? sizeof(UINT) : 0)));
 }

 FUNC_9(VAR_11, 0, 0);

 return VAR_11;
}
