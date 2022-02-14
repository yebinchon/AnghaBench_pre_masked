
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tcp_mss_option ;
typedef int VH ;
typedef void* USHORT ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_9__ {void* PacketLength; int Protocol; scalar_t__ Reserved; scalar_t__ DstIP; scalar_t__ SrcIP; } ;
struct TYPE_8__ {int Flag; scalar_t__ Checksum; scalar_t__ UrgentPointer; void* WindowSize; scalar_t__ HeaderSizeAndReserved; void* AckNumber; void* SeqNumber; void* DstPort; void* SrcPort; } ;
typedef TYPE_1__ TCP_HEADER ;
typedef TYPE_2__ IPV4_PSEUDO_HEADER ;


 int FUNC_0 (int*,void*,scalar_t__) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__) ;
 TYPE_2__* FUNC_5 (int) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__,int ,TYPE_1__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_1__*,int) ;

void FUNC_8(VH *VAR_2, UINT VAR_3, UINT VAR_4, UINT VAR_5, UINT VAR_6, UINT VAR_7, UINT VAR_8, UINT VAR_9, UINT VAR_10, UINT VAR_11, void *VAR_12, UINT VAR_13)
{
 static UCHAR VAR_14[] = {0x02, 0x04, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00};
 IPV4_PSEUDO_HEADER *VAR_15;
 TCP_HEADER *VAR_16;
 UINT VAR_17 = VAR_1;
 UINT VAR_18;

 if (VAR_2 == ((void*)0) || (VAR_13 != 0 && VAR_12 == ((void*)0)))
 {
  return;
 }


 VAR_15 = FUNC_5(sizeof(IPV4_PSEUDO_HEADER) + VAR_1 + VAR_13 + 32);
 VAR_16 = (TCP_HEADER *)(((UCHAR *)VAR_15) + sizeof(IPV4_PSEUDO_HEADER));

 if (VAR_11 != 0)
 {
  USHORT *VAR_19;
  VAR_19 = (USHORT *)(&VAR_14[2]);
  *VAR_19 = FUNC_1((USHORT)VAR_11);
  VAR_17 += sizeof(VAR_14);
 }

 VAR_18 = VAR_17 + VAR_13;
 if (VAR_18 > 65536)
 {

  FUNC_3(VAR_15);
  return;
 }


 VAR_15->SrcIP = VAR_3;
 VAR_15->DstIP = VAR_5;
 VAR_15->Reserved = 0;
 VAR_15->Protocol = VAR_0;
 VAR_15->PacketLength = FUNC_1((USHORT)VAR_18);


 VAR_16->SrcPort = FUNC_1((USHORT)VAR_4);
 VAR_16->DstPort = FUNC_1((USHORT)VAR_6);
 VAR_16->SeqNumber = FUNC_2(VAR_7);
 VAR_16->AckNumber = FUNC_2(VAR_8);
 VAR_16->HeaderSizeAndReserved = 0;
 FUNC_7(VAR_16, (UCHAR)(VAR_17 / 4));
 VAR_16->Flag = (UCHAR)VAR_9;
 VAR_16->WindowSize = FUNC_1((USHORT)VAR_10);
 VAR_16->Checksum = 0;
 VAR_16->UrgentPointer = 0;


 if (VAR_11 != 0)
 {
  FUNC_0(((UCHAR *)VAR_16) + VAR_1, VAR_14, sizeof(VAR_14));
 }


 FUNC_0(((UCHAR *)VAR_16) + VAR_17, VAR_12, VAR_13);


 VAR_16->Checksum = FUNC_4(VAR_15, VAR_18 + 12);


 FUNC_6(VAR_2, VAR_5, VAR_3, VAR_0, VAR_16, VAR_18);


 FUNC_3(VAR_15);
}
