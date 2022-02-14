
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int LastRecvEapId; int NextRadiusPacketId; int Username; int * SslPipe; } ;
struct TYPE_18__ {scalar_t__ Code; scalar_t__ Type; scalar_t__* Data; void* Len; int Id; } ;
struct TYPE_17__ {int TlsFlags; } ;
struct TYPE_16__ {scalar_t__ Parse_EapMessage_DataSize; scalar_t__ Parse_StateSize; TYPE_3__* Parse_EapMessage; int AvpList; TYPE_3__* Parse_State; } ;
typedef TYPE_1__ RADIUS_PACKET ;
typedef TYPE_2__ EAP_PEAP ;
typedef TYPE_3__ EAP_MESSAGE ;
typedef TYPE_4__ EAP_CLIENT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_2 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_4__*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int ,int ,TYPE_3__*,int) ;
 TYPE_1__* FUNC_8 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ) ;
 TYPE_3__* FUNC_10 (int) ;

bool FUNC_11(EAP_CLIENT *VAR_8)
{
 bool VAR_9 = 0;
 RADIUS_PACKET *VAR_10 = ((void*)0);
 RADIUS_PACKET *VAR_11 = ((void*)0);
 RADIUS_PACKET *VAR_12 = ((void*)0);
 RADIUS_PACKET *VAR_13 = ((void*)0);
 EAP_MESSAGE *VAR_14 = ((void*)0);
 EAP_MESSAGE *VAR_15 = ((void*)0);
 if (VAR_8 == ((void*)0))
 {
  return 0;
 }
 if (VAR_8->SslPipe != ((void*)0))
 {
  return 0;
 }

 VAR_10 = FUNC_8(VAR_7, VAR_8->NextRadiusPacketId++);
 FUNC_3(VAR_10, VAR_8);

 VAR_14 = FUNC_10(sizeof(EAP_MESSAGE));
 VAR_14->Code = VAR_1;
 VAR_14->Id = VAR_8->LastRecvEapId;
 VAR_14->Len = FUNC_4(FUNC_9(VAR_8->Username) + 5);
 VAR_14->Type = VAR_2;
 FUNC_1(VAR_14->Data, VAR_8->Username, FUNC_9(VAR_8->Username));
 FUNC_0(VAR_10->AvpList, FUNC_7(VAR_5, 0, 0, VAR_14, FUNC_9(VAR_8->Username) + 5));

 VAR_11 = FUNC_2(VAR_8, VAR_10);

 if (VAR_11 != ((void*)0))
 {
  if (VAR_11->Parse_EapMessage_DataSize != 0 && VAR_11->Parse_EapMessage != ((void*)0))
  {
   EAP_MESSAGE *VAR_16 = VAR_11->Parse_EapMessage;
   if (VAR_16->Code == VAR_0)
   {
    if (VAR_16->Type != VAR_4)
    {

     VAR_12 = FUNC_8(VAR_7, VAR_8->NextRadiusPacketId++);
     FUNC_3(VAR_12, VAR_8);

     if (VAR_11->Parse_StateSize != 0)
     {
      FUNC_0(VAR_12->AvpList, FUNC_7(VAR_6, 0, 0,
       VAR_11->Parse_State, VAR_11->Parse_StateSize));
     }

     VAR_15 = FUNC_10(sizeof(EAP_MESSAGE));
     VAR_15->Code = VAR_1;
     VAR_15->Id = VAR_8->LastRecvEapId;
     VAR_15->Len = FUNC_4(6);
     VAR_15->Type = VAR_3;
     VAR_15->Data[0] = VAR_4;

     FUNC_0(VAR_12->AvpList, FUNC_7(VAR_5, 0, 0, VAR_15, 6));

     VAR_13 = FUNC_2(VAR_8, VAR_12);

     if (VAR_13 != ((void*)0) && VAR_13->Parse_EapMessage_DataSize != 0 && VAR_13->Parse_EapMessage != ((void*)0))
     {
      VAR_16 = VAR_13->Parse_EapMessage;

      if (VAR_16->Code == VAR_0 && VAR_16->Type == VAR_4)
      {
       goto LABEL_PARSE_PEAP;
      }
     }
    }
    else
    {
     EAP_PEAP *VAR_17;
LABEL_PARSE_PEAP:
     VAR_17 = (EAP_PEAP *)VAR_16;

     if (VAR_17->TlsFlags == 0x20)
     {
      VAR_9 = 1;
     }
    }
   }
  }
 }

 FUNC_6(VAR_10);
 FUNC_6(VAR_12);
 FUNC_6(VAR_11);
 FUNC_6(VAR_13);
 FUNC_5(VAR_14);
 FUNC_5(VAR_15);

 return VAR_9;
}
