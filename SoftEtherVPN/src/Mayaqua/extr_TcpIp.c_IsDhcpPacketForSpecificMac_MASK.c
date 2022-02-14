
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
struct TYPE_3__ {int SrcPort; int DstPort; } ;
typedef TYPE_1__ UDP_HEADER ;
typedef int UCHAR ;
struct TYPE_4__ {scalar_t__ Protocol; } ;
typedef TYPE_2__ IPV4_HEADER ;


 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (int *) ;

bool FUNC_6(UCHAR *VAR_2, UINT VAR_3, UCHAR *VAR_4)
{
 USHORT *VAR_5;
 IPV4_HEADER *VAR_6;
 UDP_HEADER *VAR_7;
 UINT VAR_8;
 bool VAR_9 = 0, VAR_10 = 0;

 if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0) || FUNC_4(VAR_4, 6))
 {
  return 0;
 }


 if (VAR_3 < 14)
 {
  return 0;
 }


 if (FUNC_0(VAR_2, VAR_4, 6) == 0)
 {
  VAR_10 = 1;
 }
 VAR_3 -= 6;
 VAR_2 += 6;


 if (FUNC_0(VAR_2, VAR_4, 6) == 0)
 {
  VAR_9 = 1;
 }
 VAR_3 -= 6;
 VAR_2 += 6;

 if (VAR_9 == 0 && VAR_10 == 0)
 {
  return 0;
 }
 if (VAR_9 && VAR_10)
 {
  return 0;
 }


 VAR_5 = (USHORT *)VAR_2;
 VAR_3 -= 2;
 VAR_2 += 2;

 if (FUNC_5(VAR_5) != VAR_1)
 {

  return 0;
 }


 VAR_8 = FUNC_3(VAR_2, VAR_3);
 if (VAR_8 == 0)
 {

  return 0;
 }

 VAR_6 = (IPV4_HEADER *)VAR_2;
 VAR_2 += VAR_8;
 VAR_3 -= VAR_8;

 if (VAR_6->Protocol != VAR_0)
 {

  return 0;
 }


 if (VAR_3 < sizeof(UDP_HEADER))
 {
  return 0;
 }
 VAR_7 = (UDP_HEADER *)VAR_2;
 VAR_2 += sizeof(UDP_HEADER);
 VAR_3 -= sizeof(UDP_HEADER);

 if (VAR_9)
 {

  if (FUNC_2(VAR_7->DstPort) == 67)
  {
   FUNC_1("IsDhcpPacketForSpecificMac: DHCP Request Packet is Detected.\n");
   return 1;
  }
 }
 else if (VAR_10)
 {

  if (FUNC_2(VAR_7->SrcPort) == 67)
  {
   FUNC_1("IsDhcpPacketForSpecificMac: DHCP Response Packet is Detected.\n");
   return 1;
  }
 }

 return 0;
}
