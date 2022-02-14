
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int beacon_str ;
typedef int arp ;
typedef int USHORT ;
typedef int UINT ;
struct TYPE_16__ {int Checksum; void* PacketLength; void* SrcPort; void* DstPort; } ;
typedef TYPE_1__ UDP_HEADER ;
struct TYPE_17__ {int HardwareSize; int ProtocolSize; int SrcIP; int* TargetAddress; int TargetIP; struct TYPE_17__* SrcAddress; void* Operation; void* ProtocolType; void* HardwareType; } ;
typedef TYPE_2__ UCHAR ;
struct TYPE_19__ {int DstIP; int SrcIP; int Checksum; int Protocol; int TimeToLive; void* TotalLength; int TypeOfService; } ;
struct TYPE_18__ {scalar_t__ LastBeaconSent; int IpAddress; int SubnetMask; char* MacAddress; } ;
typedef TYPE_3__ L3IF ;
typedef TYPE_4__ IPV4_HEADER ;
typedef TYPE_2__ ARPV4_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int,int,TYPE_1__*,int,int ) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_3__*,int ,char*,int,TYPE_2__*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 () ;
 TYPE_2__* FUNC_9 (int) ;
 int VAR_9 ;

void FUNC_10(L3IF *VAR_10)
{

 if (VAR_10 == ((void*)0))
 {
  return;
 }

 if (VAR_10->LastBeaconSent == 0 ||
  (VAR_10->LastBeaconSent + VAR_2) <= FUNC_8())
 {
  UINT VAR_11;
  UCHAR *VAR_12;
  UINT VAR_13;
  ARPV4_HEADER VAR_14;
  IPV4_HEADER *VAR_15;
  UDP_HEADER *VAR_16;
  static char VAR_17[] =
   "PacketiX VPN Virtual Layer-3 Switch Beacon";


  VAR_11 = (VAR_10->IpAddress & VAR_10->SubnetMask) | (~VAR_10->SubnetMask);
  VAR_13 = sizeof(IPV4_HEADER) + sizeof(UDP_HEADER) + sizeof(VAR_17);
  VAR_12 = FUNC_9(VAR_13);

  VAR_15 = (IPV4_HEADER *)VAR_12;
  VAR_16 = (UDP_HEADER *)(VAR_12 + sizeof(IPV4_HEADER));
  VAR_16->DstPort = FUNC_2(7);
  VAR_16->SrcPort = FUNC_2(7);
  VAR_16->PacketLength = FUNC_2(sizeof(UDP_HEADER) + sizeof(VAR_17));

  FUNC_1(VAR_12 + sizeof(IPV4_HEADER) + sizeof(UDP_HEADER), VAR_17, sizeof(VAR_17));

  VAR_16->Checksum = FUNC_0(VAR_10->IpAddress, VAR_11, 0x11, VAR_16, sizeof(UDP_HEADER) + sizeof(VAR_17), 0);

  VAR_15->DstIP = VAR_11;
  FUNC_5(VAR_15, 4);
  FUNC_4(VAR_15, (VAR_5 / 4));
  VAR_15->TypeOfService = VAR_3;
  VAR_15->TotalLength = FUNC_2((USHORT)(VAR_13));
  VAR_15->TimeToLive = VAR_4;
  VAR_15->Protocol = VAR_6;
  VAR_15->SrcIP = VAR_10->IpAddress;
  VAR_15->Checksum = FUNC_6(VAR_15, VAR_5);

  FUNC_7(VAR_10, VAR_9, VAR_10->MacAddress, VAR_8, VAR_12, VAR_13);

  FUNC_3(VAR_12);


  VAR_14.HardwareType = FUNC_2(VAR_0);
  VAR_14.ProtocolType = FUNC_2(VAR_8);
  VAR_14.HardwareSize = 6;
  VAR_14.ProtocolSize = 4;
  VAR_14.Operation = FUNC_2(VAR_1);
  FUNC_1(VAR_14.SrcAddress, VAR_10->MacAddress, 6);
  VAR_14.SrcIP = VAR_10->IpAddress;
  VAR_14.TargetAddress[0] =
   VAR_14.TargetAddress[1] =
   VAR_14.TargetAddress[2] =
   VAR_14.TargetAddress[3] =
   VAR_14.TargetAddress[4] =
   VAR_14.TargetAddress[5] = 0xff;
  VAR_14.TargetIP = VAR_11;


  FUNC_7(VAR_10, VAR_9, VAR_10->MacAddress, VAR_7, &VAR_14, sizeof(VAR_14));

  VAR_10->LastBeaconSent = FUNC_8();
 }
}
