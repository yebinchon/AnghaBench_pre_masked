
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int tcp_mss_option ;
typedef void* USHORT ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_15__ {scalar_t__ Size; int* Buf; } ;
struct TYPE_14__ {void* PacketLength; int Protocol; scalar_t__ Reserved; scalar_t__ DstIP; scalar_t__ SrcIP; } ;
struct TYPE_13__ {int Flag; scalar_t__ Checksum; scalar_t__ UrgentPointer; void* WindowSize; scalar_t__ HeaderSizeAndReserved; void* AckNumber; void* SeqNumber; void* DstPort; void* SrcPort; } ;
typedef TYPE_1__ TCP_HEADER ;
typedef TYPE_2__ IPV4_PSEUDO_HEADER ;
typedef TYPE_3__ BUF ;


 int FUNC_0 (int*,int*,int) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__) ;
 TYPE_2__* FUNC_6 (int) ;
 TYPE_3__* FUNC_7 (TYPE_1__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_8 (TYPE_1__*,int) ;

BUF *FUNC_9(BUF *VAR_2, UINT VAR_3, USHORT VAR_4, UINT VAR_5, USHORT VAR_6, UINT VAR_7, UINT VAR_8, UINT VAR_9, UINT VAR_10, UINT VAR_11)
{
 BUF *VAR_12;
 IPV4_PSEUDO_HEADER *VAR_13;
 TCP_HEADER *VAR_14;
 static UCHAR VAR_15[] = {0x02, 0x04, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00};
 UINT VAR_16 = VAR_1;
 UINT VAR_17;


 VAR_13 = FUNC_6(sizeof(IPV4_PSEUDO_HEADER) + VAR_1 + VAR_2->Size + 32);
 VAR_14 = (TCP_HEADER *)(((UCHAR *)VAR_13) + sizeof(IPV4_PSEUDO_HEADER));

 if (VAR_11 != 0)
 {
  USHORT *VAR_18;
  VAR_18 = (USHORT *)(&VAR_15[2]);
  *VAR_18 = FUNC_1((USHORT)VAR_11);
  VAR_16 += sizeof(VAR_15);
 }

 VAR_17 = VAR_16 + VAR_2->Size;


 VAR_13->SrcIP = VAR_3;
 VAR_13->DstIP = VAR_5;
 VAR_13->Reserved = 0;
 VAR_13->Protocol = VAR_0;
 VAR_13->PacketLength = FUNC_1((USHORT)VAR_17);


 VAR_14->SrcPort = FUNC_1((USHORT)VAR_4);
 VAR_14->DstPort = FUNC_1((USHORT)VAR_6);
 VAR_14->SeqNumber = FUNC_2(VAR_7);
 VAR_14->AckNumber = FUNC_2(VAR_8);
 VAR_14->HeaderSizeAndReserved = 0;
 FUNC_8(VAR_14, (UCHAR)(VAR_16 / 4));
 VAR_14->Flag = (UCHAR)VAR_9;
 VAR_14->WindowSize = FUNC_1((USHORT)VAR_10);
 VAR_14->Checksum = 0;
 VAR_14->UrgentPointer = 0;


 if (VAR_11 != 0)
 {
  FUNC_0(((UCHAR *)VAR_14) + VAR_1, VAR_15, sizeof(VAR_15));
 }


 FUNC_0(((UCHAR *)VAR_14) + VAR_16, VAR_2->Buf, VAR_2->Size);


 VAR_14->Checksum = FUNC_5(VAR_13, VAR_17 + 12);

 VAR_12 = FUNC_7(VAR_14, VAR_17);

 FUNC_3(VAR_13);

 FUNC_4(VAR_2);

 return VAR_12;
}
