
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_10__ ;


struct TYPE_30__ {scalar_t__ Message; } ;
typedef TYPE_2__ UCHAR ;
struct TYPE_29__ {int Chap_Id; } ;
struct TYPE_35__ {scalar_t__ LastStateSize; int NextEapId; TYPE_5__* LastState; int NextRadiusPacketId; int * ServerResponse; int MsChapV2Success; TYPE_2__* Username; TYPE_1__ MsChapV2Challenge; } ;
struct TYPE_34__ {scalar_t__ Code; scalar_t__ Type; } ;
struct TYPE_33__ {scalar_t__ Chap_Opcode; } ;
struct TYPE_32__ {int Chap_ValueSize; scalar_t__ Chap_Opcode; scalar_t__ Type; void* Len; scalar_t__ Id; void* Code; int * Chap_Name; int * Chap_NtResponse; int * Chap_PeerChallenge; void* Chap_Len; int Chap_Id; } ;
struct TYPE_31__ {scalar_t__ Parse_EapMessage_DataSize; scalar_t__ Code; int AvpList; TYPE_8__* Parse_EapMessage; } ;
struct TYPE_28__ {int Size; TYPE_2__* Buf; } ;
typedef TYPE_3__ RADIUS_PACKET ;
typedef TYPE_2__ EAP_MSCHAPV2_SUCCESS_SERVER ;
typedef TYPE_5__ EAP_MSCHAPV2_SUCCESS_CLIENT ;
typedef TYPE_5__ EAP_MSCHAPV2_RESPONSE ;
typedef TYPE_7__ EAP_MSCHAPV2_GENERAL ;
typedef TYPE_8__ EAP_MESSAGE ;
typedef TYPE_9__ EAP_CLIENT ;
typedef TYPE_10__ BUF ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_2 (TYPE_9__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_9__*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int ,int ,int ,TYPE_5__*,int) ;
 TYPE_3__* FUNC_10 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_11 (scalar_t__,char*) ;
 int FUNC_12 (TYPE_2__*) ;
 TYPE_10__* FUNC_13 (scalar_t__) ;
 TYPE_5__* FUNC_14 (int) ;

bool FUNC_15(EAP_CLIENT *VAR_9, UCHAR *VAR_10, UCHAR *VAR_11)
{
 bool VAR_12 = 0;
 RADIUS_PACKET *VAR_13 = ((void*)0);
 RADIUS_PACKET *VAR_14 = ((void*)0);
 RADIUS_PACKET *VAR_15 = ((void*)0);
 RADIUS_PACKET *VAR_16 = ((void*)0);
 EAP_MSCHAPV2_RESPONSE *VAR_17 = ((void*)0);
 EAP_MSCHAPV2_SUCCESS_CLIENT *VAR_18 = ((void*)0);
 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0) || VAR_11 == ((void*)0))
 {
  return 0;
 }

 VAR_13 = FUNC_10(VAR_8, VAR_9->NextRadiusPacketId++);
 FUNC_3(VAR_13, VAR_9);

 if (VAR_9->LastStateSize != 0)
 {
  FUNC_0(VAR_13->AvpList, FUNC_9(VAR_6, 0, 0,
   VAR_9->LastState, VAR_9->LastStateSize));
 }

 VAR_17 = FUNC_14(sizeof(EAP_MSCHAPV2_RESPONSE));
 VAR_17->Code = VAR_1;
 VAR_17->Id = VAR_9->NextEapId++;
 VAR_17->Len = FUNC_4(59 + FUNC_12(VAR_9->Username));
 VAR_17->Type = VAR_4;
 VAR_17->Chap_Opcode = VAR_2;
 VAR_17->Chap_Id = VAR_9->MsChapV2Challenge.Chap_Id;
 VAR_17->Chap_Len = FUNC_4(54 + FUNC_12(VAR_9->Username));
 VAR_17->Chap_ValueSize = 49;
 FUNC_1(VAR_17->Chap_PeerChallenge, VAR_11, 16);
 FUNC_1(VAR_17->Chap_NtResponse, VAR_10, 24);
 FUNC_1(VAR_17->Chap_Name, VAR_9->Username, FUNC_8(FUNC_12(VAR_9->Username), 255));

 FUNC_0(VAR_13->AvpList, FUNC_9(VAR_5, 0, 0, VAR_17, FUNC_12(VAR_9->Username) + 59));

 VAR_14 = FUNC_2(VAR_9, VAR_13);

 if (VAR_14 != ((void*)0))
 {
  if (VAR_14->Parse_EapMessage_DataSize != 0 && VAR_14->Parse_EapMessage != ((void*)0))
  {
   EAP_MESSAGE *VAR_19 = VAR_14->Parse_EapMessage;
   if (VAR_19->Code == VAR_0)
   {
    if (VAR_19->Type == VAR_4)
    {
     if (((EAP_MSCHAPV2_GENERAL *)VAR_19)->Chap_Opcode != VAR_3)
     {

     }
     else
     {

      EAP_MSCHAPV2_SUCCESS_SERVER *VAR_20 = (EAP_MSCHAPV2_SUCCESS_SERVER *)VAR_19;

      if (FUNC_11(VAR_20->Message, "S="))
      {
       BUF *VAR_21 = FUNC_13(VAR_20->Message + 2);

       if (VAR_21 && VAR_21->Size == 20)
       {
        FUNC_1(&VAR_9->MsChapV2Success, VAR_20, sizeof(EAP_MSCHAPV2_SUCCESS_SERVER));
        FUNC_1(VAR_9->ServerResponse, VAR_21->Buf, 20);

        if (1)
        {

         VAR_15 = FUNC_10(VAR_8, VAR_9->NextRadiusPacketId++);
         FUNC_3(VAR_15, VAR_9);

         if (VAR_9->LastStateSize != 0)
         {
          FUNC_0(VAR_15->AvpList, FUNC_9(VAR_6, 0, 0,
           VAR_9->LastState, VAR_9->LastStateSize));
         }

         VAR_18 = FUNC_14(sizeof(EAP_MSCHAPV2_SUCCESS_CLIENT));
         VAR_18->Code = VAR_1;
         VAR_18->Id = VAR_9->NextEapId++;
         VAR_18->Len = FUNC_4(6);
         VAR_18->Type = VAR_4;
         VAR_18->Chap_Opcode = VAR_3;

         FUNC_0(VAR_15->AvpList, FUNC_9(VAR_5, 0, 0, VAR_18, 6));

         VAR_16 = FUNC_2(VAR_9, VAR_15);

         if (VAR_16 != ((void*)0))
         {
          if (VAR_16->Code == VAR_7)
          {
           VAR_12 = 1;
          }
         }
        }
       }

       FUNC_6(VAR_21);
      }
     }
    }
   }
  }
 }

 FUNC_7(VAR_13);
 FUNC_7(VAR_15);
 FUNC_7(VAR_14);
 FUNC_7(VAR_16);
 FUNC_5(VAR_17);
 FUNC_5(VAR_18);

 return VAR_12;
}
