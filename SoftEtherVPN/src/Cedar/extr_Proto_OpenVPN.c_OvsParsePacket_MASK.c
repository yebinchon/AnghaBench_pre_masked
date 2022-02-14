
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT64 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_5__ {int OpCode; int KeyId; int DataSize; int NumAck; int* AckPacketId; void* Data; void* PacketId; void* YourSessionId; void* MySessionId; } ;
typedef TYPE_1__ OPENVPN_PACKET ;


 void* FUNC_0 (int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int*) ;
 void* FUNC_3 (int*) ;
 TYPE_1__* FUNC_4 (int) ;

OPENVPN_PACKET *FUNC_5(UCHAR *VAR_2, UINT VAR_3)
{
 UCHAR VAR_4;
 OPENVPN_PACKET *VAR_5 = ((void*)0);

 if (VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_4(sizeof(OPENVPN_PACKET));

 VAR_4 = *((UCHAR *)VAR_2);
 VAR_2++;
 VAR_3--;

 VAR_5->OpCode = ((VAR_4 & 0xF8) >> 3) & 0x1F;
 VAR_5->KeyId = VAR_4 & 0x07;

 if (VAR_5->OpCode == VAR_1)
 {

  VAR_5->DataSize = VAR_3;
  VAR_5->Data = FUNC_0(VAR_2, VAR_3);
  return VAR_5;
 }


 if (VAR_3 < sizeof(UINT64))
 {
  goto LABEL_ERROR;
 }
 VAR_5->MySessionId = FUNC_3(VAR_2);
 VAR_2 += sizeof(UINT64);
 VAR_3 -= sizeof(UINT64);


 if (VAR_3 < 1)
 {
  goto LABEL_ERROR;
 }
 VAR_4 = *((UCHAR *)VAR_2);
 VAR_2++;
 VAR_3--;

 VAR_5->NumAck = VAR_4;

 if (VAR_5->NumAck > 4)
 {
  goto LABEL_ERROR;
 }

 if (VAR_5->NumAck >= 1)
 {
  UINT VAR_6;

  if (VAR_3 < (sizeof(UINT) * (UINT)VAR_5->NumAck + sizeof(UINT64)))
  {
   goto LABEL_ERROR;
  }

  for (VAR_6 = 0;VAR_6 < VAR_5->NumAck;VAR_6++)
  {
   UINT VAR_7;

   VAR_7 = FUNC_2(VAR_2);

   VAR_5->AckPacketId[VAR_6] = VAR_7;

   VAR_2 += sizeof(UINT);
   VAR_3 -= sizeof(UINT);
  }

  VAR_5->YourSessionId = FUNC_3(VAR_2);
  VAR_2 += sizeof(UINT64);
  VAR_3 -= sizeof(UINT64);
 }

 if (VAR_5->OpCode != VAR_0)
 {

  if (VAR_3 < sizeof(UINT))
  {
   goto LABEL_ERROR;
  }

  VAR_5->PacketId = FUNC_2(VAR_2);
  VAR_2 += sizeof(UINT);
  VAR_3 -= sizeof(UINT);


  VAR_5->DataSize = VAR_3;
  if (VAR_3 >= 1)
  {
   VAR_5->Data = FUNC_0(VAR_2, VAR_3);
  }
 }

 return VAR_5;

LABEL_ERROR:
 FUNC_1(VAR_5);
 return ((void*)0);
}
