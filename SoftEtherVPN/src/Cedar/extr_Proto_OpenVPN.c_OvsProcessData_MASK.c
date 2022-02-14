
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int buf ;
typedef scalar_t__ USHORT ;
typedef int UINT ;
struct TYPE_10__ {int Size; scalar_t__* Data; int Type; } ;
typedef TYPE_1__ UDPPACKET ;
typedef int UCHAR ;
struct TYPE_12__ {int SendPacketList; int RecvPacketList; } ;
struct TYPE_11__ {int DstPort; int DstIP; int SrcPort; int SrcIP; int * Data; } ;
typedef TYPE_2__ TCP_RAW_DATA ;
typedef TYPE_3__ OPENVPN_SERVER ;
typedef int FIFO ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 TYPE_1__* FUNC_10 (int *,int ,int *,int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_11 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int *,int *,scalar_t__) ;
 int FUNC_14 (int *,scalar_t__*,int) ;

bool FUNC_15(void *VAR_2, TCP_RAW_DATA *VAR_3, FIFO *VAR_4)
{
 bool VAR_5 = 1;
 UINT VAR_6;
 OPENVPN_SERVER *VAR_7;
 UCHAR VAR_8[VAR_1];

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return 0;
 }

 VAR_7 = VAR_2;


 while (1)
 {
  UDPPACKET *VAR_9;
  USHORT VAR_10, VAR_11;
  FIFO *VAR_12 = VAR_3->Data;
  const UINT VAR_13 = FUNC_6(VAR_12);

  if (VAR_13 < sizeof(USHORT))
  {

   break;
  }


  VAR_10 = FUNC_12(FUNC_5(VAR_12));
  VAR_11 = VAR_10 + sizeof(USHORT);

  if (VAR_10 == 0 || VAR_11 > sizeof(VAR_8))
  {
   VAR_5 = 0;
   FUNC_2("OvsProcessData(): Invalid payload size: %u bytes\n", VAR_10);
   break;
  }

  if (VAR_13 < VAR_11)
  {

   break;
  }

  if (FUNC_13(VAR_12, VAR_8, VAR_11) != VAR_11)
  {
   VAR_5 = 0;
   FUNC_2("OvsProcessData(): ReadFifo() failed to read the packet\n");
   break;
  }


  VAR_9 = FUNC_10(&VAR_3->SrcIP, VAR_3->SrcPort, &VAR_3->DstIP, VAR_3->DstPort, FUNC_1(VAR_8 + sizeof(USHORT), VAR_10), VAR_10);
  VAR_9->Type = VAR_0;
  FUNC_0(VAR_7->RecvPacketList, VAR_9);
 }


 FUNC_11(VAR_7, VAR_7->RecvPacketList);


 for (VAR_6 = 0; VAR_6 < FUNC_9(VAR_7->RecvPacketList); ++VAR_6)
 {
  UDPPACKET *VAR_14 = FUNC_8(VAR_7->RecvPacketList, VAR_6);
  FUNC_7(VAR_14);
 }

 FUNC_3(VAR_7->RecvPacketList);


 for (VAR_6 = 0; VAR_6 < FUNC_9(VAR_7->SendPacketList); ++VAR_6)
 {
  UDPPACKET *VAR_15 = FUNC_8(VAR_7->SendPacketList, VAR_6);


  USHORT VAR_16 = FUNC_4((USHORT)VAR_15->Size);

  FUNC_14(VAR_4, &VAR_16, sizeof(USHORT));


  FUNC_14(VAR_4, VAR_15->Data, VAR_15->Size);


  FUNC_7(VAR_15);
 }

 FUNC_3(VAR_7->SendPacketList);

 return VAR_5;
}
