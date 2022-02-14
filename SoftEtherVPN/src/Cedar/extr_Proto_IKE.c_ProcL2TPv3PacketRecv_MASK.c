
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ Size; int * Data; void* SrcPort; int SrcIP; int DstIP; void* DestPort; scalar_t__ Type; } ;
typedef TYPE_1__ UDPPACKET ;
typedef int UCHAR ;
struct TYPE_7__ {int IsL2TPOnIPsecTunnelMode; int L2TP; int L2TPClientIP; int L2TPServerIP; int TunnelModeClientIP; int TunnelModeServerIP; } ;
typedef int IP ;
typedef int IKE_SERVER ;
typedef TYPE_2__ IKE_CLIENT ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int ,int,int *,scalar_t__) ;
 int FUNC_3 (int ,TYPE_1__*) ;

void FUNC_4(IKE_SERVER *VAR_2, IKE_CLIENT *VAR_3, UCHAR *VAR_4, UINT VAR_5, bool VAR_6)
{
 UDPPACKET VAR_7;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == 0)
 {
  return;
 }

 VAR_3->IsL2TPOnIPsecTunnelMode = VAR_6;

 FUNC_1(VAR_2, VAR_3);


 VAR_7.Type = 0;
 VAR_7.Data = VAR_4;
 VAR_7.DestPort = VAR_1;
 VAR_7.Size = VAR_5;

 if (VAR_6)
 {
  FUNC_0(&VAR_7.DstIP, &VAR_3->TunnelModeServerIP, sizeof(IP));
  FUNC_0(&VAR_7.SrcIP, &VAR_3->TunnelModeClientIP, sizeof(IP));
 }
 else
 {
  FUNC_0(&VAR_7.DstIP, &VAR_3->L2TPServerIP, sizeof(IP));
  FUNC_0(&VAR_7.SrcIP, &VAR_3->L2TPClientIP, sizeof(IP));
 }
 VAR_7.SrcPort = VAR_1;





 FUNC_3(VAR_3->L2TP, &VAR_7);
}
