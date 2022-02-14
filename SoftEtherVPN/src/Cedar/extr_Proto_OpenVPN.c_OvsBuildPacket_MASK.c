
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
typedef int UCHAR ;
struct TYPE_3__ {int OpCode; int KeyId; int DataSize; int NumAck; int PacketId; int * Data; int YourSessionId; scalar_t__* AckPacketId; int MySessionId; } ;
typedef TYPE_1__ OPENVPN_PACKET ;
typedef int BUF ;


 size_t FUNC_0 (int,int ) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;

BUF *FUNC_7(OPENVPN_PACKET *VAR_3)
{
 BUF *VAR_4;
 UCHAR VAR_5;
 UINT VAR_6;

 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_1();


 VAR_5 = ((VAR_3->OpCode << 3) & 0xF8) | (VAR_3->KeyId & 0x07);
 FUNC_4(VAR_4, VAR_5);

 if (VAR_3->OpCode == VAR_2)
 {

  FUNC_3(VAR_4, VAR_3->Data, VAR_3->DataSize);
  FUNC_2(VAR_4, 0, 0);
  return VAR_4;
 }


 FUNC_6(VAR_4, VAR_3->MySessionId);


 VAR_6 = FUNC_0(VAR_3->NumAck, VAR_0);
 FUNC_4(VAR_4, (UCHAR)VAR_6);

 if (VAR_3->NumAck >= 1)
 {
  UINT VAR_7;

  for (VAR_7 = 0;VAR_7 < VAR_6;VAR_7++)
  {
   FUNC_5(VAR_4, (UCHAR)VAR_3->AckPacketId[VAR_7]);
  }


  FUNC_6(VAR_4, VAR_3->YourSessionId);
 }

 if (VAR_3->OpCode != VAR_1)
 {

  FUNC_5(VAR_4, VAR_3->PacketId);


  if (VAR_3->DataSize >= 1 && VAR_3->Data != ((void*)0))
  {
   FUNC_3(VAR_4, VAR_3->Data, VAR_3->DataSize);
  }
 }

 FUNC_2(VAR_4, 0, 0);

 return VAR_4;
}
