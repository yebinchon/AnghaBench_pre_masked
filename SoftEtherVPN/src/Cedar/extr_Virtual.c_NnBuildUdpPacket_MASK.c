
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int ph ;
typedef int h ;
typedef scalar_t__ USHORT ;
typedef void* UINT ;
struct TYPE_15__ {int Checksum; void* PacketLength; void* DstPort; void* SrcPort; void* PacketLength2; void* PacketLength1; int Protocol; void* DstIP; void* SrcIP; } ;
typedef TYPE_1__ UDP_HEADER ;
typedef TYPE_1__ UDPV4_PSEUDO_HEADER ;
struct TYPE_16__ {int Size; TYPE_1__* Buf; } ;
typedef TYPE_3__ BUF ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,int) ;

BUF *FUNC_8(BUF *VAR_1, UINT VAR_2, USHORT VAR_3, UINT VAR_4, USHORT VAR_5)
{
 BUF *VAR_6 = FUNC_3();
 BUF *VAR_7 = FUNC_3();
 UDPV4_PSEUDO_HEADER VAR_8;
 UDP_HEADER VAR_9;


 FUNC_7(&VAR_8, sizeof(VAR_8));

 VAR_8.SrcIP = VAR_2;
 VAR_8.DstIP = VAR_4;
 VAR_8.SrcPort = FUNC_0(VAR_3);
 VAR_8.DstPort = FUNC_0(VAR_5);
 VAR_8.Protocol = VAR_0;
 VAR_8.PacketLength1 = VAR_8.PacketLength2 = FUNC_0(VAR_1->Size + (USHORT)sizeof(UDP_HEADER));

 FUNC_5(VAR_7, &VAR_8, sizeof(VAR_8));
 FUNC_6(VAR_7, VAR_1);


 FUNC_7(&VAR_9, sizeof(VAR_9));
 VAR_9.SrcPort = FUNC_0(VAR_3);
 VAR_9.DstPort = FUNC_0(VAR_5);
 VAR_9.PacketLength = FUNC_0(VAR_1->Size + (USHORT)sizeof(UDP_HEADER));
 VAR_9.Checksum = FUNC_2(VAR_7->Buf, VAR_7->Size);

 FUNC_5(VAR_6, &VAR_9, sizeof(VAR_9));
 FUNC_5(VAR_6, VAR_1->Buf, VAR_1->Size);

 FUNC_4(VAR_6);

 FUNC_1(VAR_1);
 FUNC_1(VAR_7);

 return VAR_6;
}
