
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VH ;
typedef int USHORT ;
typedef int UINT ;
struct TYPE_7__ {int Checksum; void* PacketLength; void* DstPort; void* SrcPort; } ;
typedef TYPE_1__ UDP_HEADER ;
struct TYPE_8__ {int SrcIP; int DstIP; void* PacketLength1; int Protocol; scalar_t__ Reserved; } ;
typedef TYPE_2__ UDPV4_PSEUDO_HEADER ;
typedef int UCHAR ;


 int FUNC_0 (int *,void*,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (int *,int,int,int ,TYPE_1__*,int) ;
 int VAR_1 ;

void FUNC_6(VH *VAR_2, UINT VAR_3, UINT VAR_4, UINT VAR_5, UINT VAR_6, void *VAR_7, UINT VAR_8)
{
 UDPV4_PSEUDO_HEADER *VAR_9;
 UDP_HEADER *VAR_10;
 UINT VAR_11 = VAR_1 + VAR_8;
 USHORT VAR_12;

 if (VAR_2 == ((void*)0) || VAR_7 == ((void*)0))
 {
  return;
 }
 if (VAR_11 > 65536)
 {
  return;
 }


 VAR_9 = FUNC_4(sizeof(UDPV4_PSEUDO_HEADER) + VAR_8);
 VAR_10 = (UDP_HEADER *)(((UCHAR *)VAR_9) + 12);

 VAR_9->SrcIP = VAR_5;
 VAR_9->DstIP = VAR_3;
 VAR_9->Reserved = 0;
 VAR_9->Protocol = VAR_0;
 VAR_9->PacketLength1 = FUNC_1((USHORT)VAR_11);
 VAR_10->SrcPort = FUNC_1((USHORT)VAR_6);
 VAR_10->DstPort = FUNC_1((USHORT)VAR_4);
 VAR_10->PacketLength = FUNC_1((USHORT)VAR_11);
 VAR_10->Checksum = 0;


 FUNC_0(((UCHAR *)VAR_10) + VAR_1, VAR_7, VAR_8);


 VAR_12 = FUNC_3(VAR_9, VAR_11 + 12);
 if (VAR_12 == 0x0000)
 {
  VAR_12 = 0xffff;
 }
 VAR_10->Checksum = VAR_12;


 FUNC_5(VAR_2, VAR_3, VAR_5, VAR_0, VAR_10, VAR_11);


 FUNC_2(VAR_9);
}
