
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int DataSize; int Data; } ;
struct TYPE_15__ {int IsControl; int MessageType; int AttributeList; } ;
struct TYPE_14__ {int Aborting; int Disconnecting; int DisconnectRecved; int AbortReceived; int Status; int EstablishedCount; int SentNonce; } ;
typedef TYPE_1__ SSTP_SERVER ;
typedef TYPE_2__ SSTP_PACKET ;
typedef TYPE_3__ SSTP_ATTRIBUTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_3__* FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*) ;

void FUNC_12(SSTP_SERVER *VAR_10, SSTP_PACKET *VAR_11)
{

 if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0) || VAR_11->IsControl == 0)
 {
  return;
 }

 FUNC_0("SSTP Control Packet Recv: Msg = %u, Num = %u\n", VAR_11->MessageType, FUNC_1(VAR_11->AttributeList));

 switch (VAR_11->MessageType)
 {
 case 130:
  if (VAR_10->Aborting == 0 && VAR_10->Disconnecting == 0)
  {
   if (VAR_10->Status == VAR_9)
   {
    SSTP_ATTRIBUTE *VAR_12 = FUNC_6(VAR_11, VAR_2);
    if (VAR_12 != ((void*)0) && VAR_12->DataSize == 2 &&
     FUNC_2(VAR_12->Data) == VAR_3)
    {

     SSTP_PACKET *VAR_13;


     FUNC_3(VAR_10->SentNonce, VAR_6);

     VAR_13 = FUNC_8(VAR_4,
      FUNC_9(VAR_1, VAR_10->SentNonce));

     FUNC_11(VAR_10, VAR_13);

     FUNC_7(VAR_13);

     VAR_10->Status = VAR_7;

     VAR_10->EstablishedCount++;
    }
    else
    {

     SSTP_PACKET *VAR_14 = FUNC_8(VAR_5,
      FUNC_10(VAR_2, VAR_0));

     FUNC_11(VAR_10, VAR_14);

     FUNC_7(VAR_14);
    }
   }
  }
  break;

 case 131:
  if (VAR_10->Aborting == 0 && VAR_10->Disconnecting == 0)
  {
   if (VAR_10->Status == VAR_7)
   {
    VAR_10->Status = VAR_8;

    FUNC_0("SSTP Connected.\n");
   }
  }
  break;

 case 129:
 case 128:
  VAR_10->DisconnectRecved = 1;
  FUNC_5(VAR_10);
  break;

 case 132:
  VAR_10->AbortReceived = 1;
  FUNC_4(VAR_10);
  break;
 }
}
