
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tmp1600 ;
typedef int UINT ;
struct TYPE_14__ {void* Checksum; void* PacketLength; void* DstPort; void* SrcPort; } ;
typedef TYPE_5__ UDP_HEADER ;
typedef int UCHAR ;
struct TYPE_13__ {scalar_t__ ipv6_addr; } ;
struct TYPE_12__ {scalar_t__ ipv6_addr; } ;
struct TYPE_11__ {scalar_t__ ipv6_addr; } ;
struct TYPE_10__ {scalar_t__ ipv6_addr; } ;
struct TYPE_15__ {TYPE_4__ TunnelModeClientIP; TYPE_3__ TunnelModeServerIP; TYPE_2__ TransportModeClientIP; TYPE_1__ TransportModeServerIP; int CurrentIpSecSaSend; int ClientIP; } ;
typedef int IPV6_ADDR ;
typedef int IKE_SERVER ;
typedef TYPE_6__ IKE_CLIENT ;


 void* FUNC_0 (int *,int *,int ,TYPE_5__*,int,int ) ;
 int FUNC_1 (int *,int *,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int,int *,int) ;
 int FUNC_5 (int *,TYPE_6__*,int *,int,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int) ;

void FUNC_9(IKE_SERVER *VAR_2, IKE_CLIENT *VAR_3, UINT VAR_4, UINT VAR_5, UCHAR *VAR_6, UINT VAR_7)
{
 UCHAR *VAR_8;
 UINT VAR_9;
 UDP_HEADER *VAR_10;
 UCHAR VAR_11[1600];
 bool VAR_12 = 0;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == 0)
 {
  return;
 }


 VAR_9 = sizeof(UDP_HEADER) + VAR_7;

 if (VAR_9 > sizeof(VAR_11))
 {
  VAR_8 = FUNC_8(VAR_9);
 }
 else
 {
  VAR_8 = VAR_11;
  VAR_12 = 1;
 }


 VAR_10 = (UDP_HEADER *)VAR_8;
 VAR_10->SrcPort = FUNC_2(VAR_4);
 VAR_10->DstPort = FUNC_2(VAR_5);
 VAR_10->PacketLength = FUNC_2(VAR_9);
 VAR_10->Checksum = 0;







 FUNC_1(VAR_8 + sizeof(UDP_HEADER), VAR_6, VAR_7);

 if (FUNC_6(&VAR_3->ClientIP))
 {
  if (FUNC_7(VAR_3->CurrentIpSecSaSend) == 0)
  {
   VAR_10->Checksum = FUNC_0((IPV6_ADDR *)VAR_3->TransportModeServerIP.ipv6_addr,
    (IPV6_ADDR *)VAR_3->TransportModeClientIP.ipv6_addr,
    VAR_1,
    VAR_10,
    VAR_9, 0);
  }
  else
  {
   VAR_10->Checksum = FUNC_0((IPV6_ADDR *)VAR_3->TunnelModeServerIP.ipv6_addr,
    (IPV6_ADDR *)VAR_3->TunnelModeClientIP.ipv6_addr,
    VAR_1,
    VAR_10,
    VAR_9, 0);
  }
 }

 FUNC_5(VAR_2, VAR_3, VAR_8, VAR_9, VAR_1);

 if (VAR_12 == 0)
 {
  FUNC_3(VAR_8);
 }
}
