
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {int DstPort; int SrcPort; int PacketLength; } ;
typedef TYPE_1__ UDP_HEADER ;
struct TYPE_8__ {int DestPort; int Size; int SrcPort; int * Data; int SrcIP; int DstIP; scalar_t__ Type; } ;
typedef TYPE_2__ UDPPACKET ;
typedef int UCHAR ;
struct TYPE_9__ {int L2TPClientPort; int L2TP; int L2TPClientIP; int L2TPServerIP; } ;
typedef int IP ;
typedef int IKE_SERVER ;
typedef TYPE_3__ IKE_CLIENT ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int,int,int *,int) ;
 int FUNC_4 (int ,TYPE_2__*) ;

void FUNC_5(IKE_SERVER *VAR_1, IKE_CLIENT *VAR_2, UCHAR *VAR_3, UINT VAR_4)
{
 UDP_HEADER *VAR_5;
 UINT VAR_6;
 UINT VAR_7, VAR_8;
 UINT VAR_9;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == 0)
 {
  return;
 }

 if (VAR_4 <= sizeof(UDP_HEADER))
 {

  return;
 }


 VAR_5 = (UDP_HEADER *)VAR_3;

 VAR_9 = FUNC_1(VAR_5->PacketLength);

 if (VAR_9 <= sizeof(UDP_HEADER))
 {
  return;
 }

 VAR_6 = VAR_9 - sizeof(UDP_HEADER);

 if (VAR_6 == 0)
 {

  return;
 }

 if (VAR_4 < (sizeof(UDP_HEADER) + VAR_6))
 {

  return;
 }

 VAR_7 = FUNC_1(VAR_5->SrcPort);
 VAR_8 = FUNC_1(VAR_5->DstPort);

 if (VAR_8 == VAR_0)
 {
  UDPPACKET VAR_10;

  FUNC_2(VAR_1, VAR_2);


  VAR_2->L2TPClientPort = VAR_7;


  VAR_10.Type = 0;
  VAR_10.Data = VAR_3 + sizeof(UDP_HEADER);
  VAR_10.DestPort = VAR_0;
  FUNC_0(&VAR_10.DstIP, &VAR_2->L2TPServerIP, sizeof(IP));
  VAR_10.Size = VAR_6;
  FUNC_0(&VAR_10.SrcIP, &VAR_2->L2TPClientIP, sizeof(IP));
  VAR_10.SrcPort = VAR_0;

  FUNC_4(VAR_2->L2TP, &VAR_10);






 }
}
