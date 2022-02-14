
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ MsChapV2Challenge; int NextEapId; int NextRadiusPacketId; TYPE_3__* Username; } ;
struct TYPE_22__ {scalar_t__ Code; scalar_t__ Type; scalar_t__* Data; void* Len; scalar_t__ Id; } ;
struct TYPE_21__ {int Chap_ValueSize; } ;
struct TYPE_20__ {scalar_t__ Chap_Opcode; } ;
struct TYPE_19__ {scalar_t__ Parse_EapMessage_DataSize; scalar_t__ Parse_StateSize; TYPE_4__* Parse_EapMessage; int AvpList; TYPE_4__* Parse_State; } ;
typedef TYPE_1__ RADIUS_PACKET ;
typedef TYPE_2__ EAP_MSCHAPV2_GENERAL ;
typedef TYPE_3__ EAP_MSCHAPV2_CHALLENGE ;
typedef TYPE_4__ EAP_MESSAGE ;
typedef TYPE_5__ EAP_CLIENT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__*,TYPE_3__*,int) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_2 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_5__*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int ,int ,TYPE_4__*,int) ;
 TYPE_1__* FUNC_8 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (TYPE_3__*) ;
 TYPE_4__* FUNC_10 (int) ;

bool FUNC_11(EAP_CLIENT *VAR_9)
{
 bool VAR_10 = 0;
 RADIUS_PACKET *VAR_11 = ((void*)0);
 RADIUS_PACKET *VAR_12 = ((void*)0);
 RADIUS_PACKET *VAR_13 = ((void*)0);
 RADIUS_PACKET *VAR_14 = ((void*)0);
 EAP_MESSAGE *VAR_15 = ((void*)0);
 EAP_MESSAGE *VAR_16 = ((void*)0);
 if (VAR_9 == ((void*)0))
 {
  return 0;
 }

 VAR_11 = FUNC_8(VAR_8, VAR_9->NextRadiusPacketId++);
 FUNC_3(VAR_11, VAR_9);

 VAR_15 = FUNC_10(sizeof(EAP_MESSAGE));
 VAR_15->Code = VAR_1;
 VAR_15->Id = VAR_9->NextEapId++;
 VAR_15->Len = FUNC_4(FUNC_9(VAR_9->Username) + 5);
 VAR_15->Type = VAR_3;
 FUNC_1(VAR_15->Data, VAR_9->Username, FUNC_9(VAR_9->Username));
 FUNC_0(VAR_11->AvpList, FUNC_7(VAR_6, 0, 0, VAR_15, FUNC_9(VAR_9->Username) + 5));

 VAR_12 = FUNC_2(VAR_9, VAR_11);

 if (VAR_12 != ((void*)0))
 {
  if (VAR_12->Parse_EapMessage_DataSize != 0 && VAR_12->Parse_EapMessage != ((void*)0))
  {
   EAP_MESSAGE *VAR_17 = VAR_12->Parse_EapMessage;
   if (VAR_17->Code == VAR_0)
   {
    if (VAR_17->Type != VAR_5)
    {

     VAR_13 = FUNC_8(VAR_8, VAR_9->NextRadiusPacketId++);
     FUNC_3(VAR_13, VAR_9);

     if (VAR_12->Parse_StateSize != 0)
     {
      FUNC_0(VAR_13->AvpList, FUNC_7(VAR_7, 0, 0,
       VAR_12->Parse_State, VAR_12->Parse_StateSize));
     }

     VAR_16 = FUNC_10(sizeof(EAP_MESSAGE));
     VAR_16->Code = VAR_1;
     VAR_16->Id = VAR_9->NextEapId++;
     VAR_16->Len = FUNC_4(6);
     VAR_16->Type = VAR_4;
     VAR_16->Data[0] = VAR_5;

     FUNC_0(VAR_13->AvpList, FUNC_7(VAR_6, 0, 0, VAR_16, 6));

     VAR_14 = FUNC_2(VAR_9, VAR_13);

     if (VAR_14 != ((void*)0) && VAR_14->Parse_EapMessage_DataSize != 0 && VAR_14->Parse_EapMessage != ((void*)0))
     {
      VAR_17 = VAR_14->Parse_EapMessage;

      if (VAR_17->Code == VAR_0 && VAR_17->Type == VAR_5)
      {
       goto LABEL_PARSE_EAP;
      }
     }
    }
    else
    {
     EAP_MSCHAPV2_GENERAL *VAR_18;
LABEL_PARSE_EAP:
     VAR_18 = (EAP_MSCHAPV2_GENERAL *)VAR_17;

     if (VAR_18->Chap_Opcode == VAR_2)
     {
      EAP_MSCHAPV2_CHALLENGE *VAR_19 = (EAP_MSCHAPV2_CHALLENGE *)VAR_17;
      if (VAR_19->Chap_ValueSize == 16)
      {
       FUNC_1(&VAR_9->MsChapV2Challenge, VAR_19, sizeof(EAP_MSCHAPV2_CHALLENGE));

       VAR_10 = 1;
      }
     }
    }
   }
  }
 }

 FUNC_6(VAR_11);
 FUNC_6(VAR_13);
 FUNC_6(VAR_12);
 FUNC_6(VAR_14);
 FUNC_5(VAR_15);
 FUNC_5(VAR_16);

 return VAR_10;
}
