
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int USHORT ;
typedef scalar_t__ ULONG ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_9__ {int VlanId; int UserPriority; int CanonicalFormatId; } ;
struct TYPE_14__ {TYPE_1__ TagHeader; scalar_t__ Value; } ;
struct TYPE_13__ {int Halt; int Ready; int SupportVLan; int * AdapterHandle2; TYPE_2__* Device; int * TmpBuffer; int * AdapterHandle; } ;
struct TYPE_12__ {scalar_t__ NumRecvPackets; int Event; int RecvLock; TYPE_3__* RecvPacketTail; TYPE_3__* RecvPacketHead; } ;
struct TYPE_11__ {int* Data; struct TYPE_11__* Next; scalar_t__ Size; } ;
struct TYPE_10__ {int FileList; scalar_t__ Halting; } ;
typedef TYPE_3__ SL_PACKET ;
typedef TYPE_4__ SL_FILE ;
typedef TYPE_5__ SL_ADAPTER ;
typedef int NET_BUFFER_LIST ;
typedef int NET_BUFFER ;
typedef int NDIS_PORT_NUMBER ;
typedef TYPE_6__ NDIS_NET_BUFFER_LIST_8021Q_INFO ;
typedef scalar_t__ NDIS_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *,scalar_t__,int *,int,int ) ;
 int FUNC_9 (int *,int *,scalar_t__) ;
 TYPE_4__* FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (int*,int *,scalar_t__) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 TYPE_3__* FUNC_15 (int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

void FUNC_19(NDIS_HANDLE VAR_4, NET_BUFFER_LIST *VAR_5,
          NDIS_PORT_NUMBER VAR_6, ULONG VAR_7,
          ULONG VAR_8)
{
 SL_ADAPTER *VAR_9 = (SL_ADAPTER *)VAR_4;
 UINT VAR_10;
 UINT VAR_11 = 0;
 NET_BUFFER_LIST *VAR_12;
 UCHAR *VAR_13;
 UINT VAR_14;

 if (VAR_5 == ((void*)0) || VAR_7 == 0)
 {
  return;
 }

 if (VAR_9->AdapterHandle2 == ((void*)0))
 {
  VAR_9->AdapterHandle2 = VAR_9->AdapterHandle;
 }

 if (FUNC_1(VAR_8))
 {
  FUNC_0(VAR_11, VAR_1);
 }

 if (VAR_9->Halt || VAR_9->Device == ((void*)0) || VAR_9->Device->Halting || VAR_9->Ready == 0 || VAR_9->AdapterHandle == ((void*)0))
 {
  goto LABEL_CLEANUP;
 }

 VAR_13 = VAR_9->TmpBuffer;
 VAR_14 = sizeof(VAR_9->TmpBuffer);

 VAR_12 = VAR_5;

 FUNC_14(VAR_9->Device->FileList);
 {
  if (VAR_9->Halt == 0)
  {
   for (VAR_10 = 0;VAR_10 < FUNC_11(VAR_9->Device->FileList);VAR_10++)
   {

    SL_FILE *VAR_15 = FUNC_10(VAR_9->Device->FileList, VAR_10);

    FUNC_13(VAR_15->RecvLock);
   }

   while (VAR_12 != ((void*)0))
   {
    NET_BUFFER *VAR_16 = FUNC_4(VAR_12);
    bool VAR_17 = 0;
    UCHAR VAR_18[2];

    if (FUNC_5(VAR_12, VAR_0) != 0)
    {
     NDIS_NET_BUFFER_LIST_8021Q_INFO VAR_19;
     VAR_19.Value = FUNC_5(VAR_12, VAR_0);
     if (VAR_19.TagHeader.VlanId != 0)
     {
      USHORT VAR_20;
      VAR_17 = 1;

      VAR_9->SupportVLan = 1;

      VAR_20 = (VAR_19.TagHeader.UserPriority & 0x07 << 13) |
       (VAR_19.TagHeader.CanonicalFormatId & 0x01 << 12) |
       (VAR_19.TagHeader.VlanId & 0x0FFF);

      VAR_18[0] = ((UCHAR *)(&VAR_20))[1];
      VAR_18[1] = ((UCHAR *)(&VAR_20))[0];
     }
    }

    while (VAR_16 != ((void*)0))
    {
     UINT VAR_21 = FUNC_3(VAR_16);

     if (VAR_21 >= 14 && VAR_21 <= VAR_14 && VAR_21 <= (UINT)((VAR_17 == 0) ? VAR_3 : (VAR_3 - 4)))
     {
      UCHAR *VAR_22 = FUNC_8(VAR_16, VAR_21, VAR_13, 1, 0);

      if (VAR_22 != ((void*)0))
      {

       for (VAR_10 = 0;VAR_10 < FUNC_11(VAR_9->Device->FileList);VAR_10++)
       {
        SL_FILE *VAR_23 = FUNC_10(VAR_9->Device->FileList, VAR_10);

        if (VAR_23->NumRecvPackets < VAR_2)
        {
         SL_PACKET *VAR_24 = FUNC_15(sizeof(SL_PACKET));

         if (VAR_17 == 0)
         {

          FUNC_12(VAR_24->Data, VAR_22, VAR_21);
          VAR_24->Size = VAR_21;
         }
         else
         {

          FUNC_12(VAR_24->Data, VAR_22, 12);
          VAR_24->Data[12] = 0x81;
          VAR_24->Data[13] = 0x00;
          FUNC_12(&VAR_24->Data[14], VAR_18, 2);
          FUNC_12(&VAR_24->Data[16], &VAR_22[12], VAR_21 - 12);

          VAR_24->Size = VAR_21 + 4;
         }

         VAR_24->Next = ((void*)0);

         if (VAR_23->RecvPacketHead == ((void*)0))
         {
          VAR_23->RecvPacketHead = VAR_24;
         }
         else
         {
          VAR_23->RecvPacketTail->Next = VAR_24;
         }

         VAR_23->RecvPacketTail = VAR_24;

         VAR_23->NumRecvPackets++;
        }
       }
      }
     }

     VAR_16 = FUNC_7(VAR_16);
    }

    VAR_12 = FUNC_6(VAR_12);
   }


   for (VAR_10 = 0;VAR_10 < FUNC_11(VAR_9->Device->FileList);VAR_10++)
   {
    SL_FILE *VAR_25 = FUNC_10(VAR_9->Device->FileList, VAR_10);


    FUNC_17(VAR_25->RecvLock);

    FUNC_16(VAR_25->Event);
   }
  }
 }
 FUNC_18(VAR_9->Device->FileList);

LABEL_CLEANUP:

 if (FUNC_2(VAR_8))
 {
  FUNC_9(VAR_9->AdapterHandle2, VAR_5, VAR_11);
 }
}
