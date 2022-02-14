
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* UINT64 ;
typedef size_t UINT ;
typedef void* UCHAR ;
struct TYPE_4__ {size_t NumAck; size_t* AckPacketId; size_t PacketId; size_t DataSize; int Data; void* YourSessionId; void* MySessionId; void* KeyId; void* OpCode; } ;
typedef TYPE_1__ OPENVPN_PACKET ;


 int FUNC_0 (void**,size_t) ;
 size_t FUNC_1 (size_t,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int) ;

OPENVPN_PACKET *FUNC_3(UCHAR VAR_1, UCHAR VAR_2, UINT64 VAR_3, UINT VAR_4,
         UINT *VAR_5, UINT64 VAR_6, UINT VAR_7,
         UINT VAR_8, UCHAR *VAR_9)
{
 OPENVPN_PACKET *VAR_10 = FUNC_2(sizeof(OPENVPN_PACKET));
 UINT VAR_11;

 VAR_10->OpCode = VAR_1;
 VAR_10->KeyId = VAR_2;
 VAR_10->MySessionId = VAR_3;
 VAR_10->NumAck = VAR_4;

 for (VAR_11 = 0;VAR_11 < FUNC_1(VAR_4, VAR_0);VAR_11++)
 {
  VAR_10->AckPacketId[VAR_11] = VAR_5[VAR_11];
 }

 VAR_10->YourSessionId = VAR_6;
 VAR_10->PacketId = VAR_7;

 if (VAR_8 != 0 && VAR_9 != ((void*)0))
 {
  VAR_10->Data = FUNC_0(VAR_9, VAR_8);
  VAR_10->DataSize = VAR_8;
 }

 return VAR_10;
}
