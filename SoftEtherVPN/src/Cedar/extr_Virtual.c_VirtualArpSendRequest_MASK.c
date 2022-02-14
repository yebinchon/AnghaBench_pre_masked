
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int arp ;
struct TYPE_6__ {int MacAddress; int HostIP; } ;
typedef TYPE_1__ VH ;
typedef int UINT ;
struct TYPE_7__ {int HardwareSize; int ProtocolSize; int TargetIP; int TargetAddress; int SrcIP; int SrcAddress; void* Operation; void* ProtocolType; void* HardwareType; } ;
typedef TYPE_2__ ARPV4_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 void* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,TYPE_2__*,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_4 ;

void FUNC_4(VH *VAR_5, UINT VAR_6)
{
 ARPV4_HEADER VAR_7;

 if (VAR_5 == ((void*)0))
 {
  return;
 }


 VAR_7.HardwareType = FUNC_1(VAR_0);
 VAR_7.ProtocolType = FUNC_1(VAR_3);
 VAR_7.HardwareSize = 6;
 VAR_7.ProtocolSize = 4;
 VAR_7.Operation = FUNC_1(VAR_1);
 FUNC_0(VAR_7.SrcAddress, VAR_5->MacAddress, 6);
 VAR_7.SrcIP = VAR_5->HostIP;
 FUNC_3(&VAR_7.TargetAddress, 6);
 VAR_7.TargetIP = VAR_6;


 FUNC_2(VAR_5, VAR_4, VAR_5->MacAddress, VAR_2, &VAR_7, sizeof(VAR_7));
}
