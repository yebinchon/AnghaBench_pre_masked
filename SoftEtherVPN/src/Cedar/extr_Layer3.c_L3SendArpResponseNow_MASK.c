
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int arp ;
typedef void* UINT ;
typedef int UCHAR ;
struct TYPE_7__ {int HardwareSize; int ProtocolSize; void* TargetIP; void* SrcIP; int TargetAddress; int SrcAddress; void* Operation; void* ProtocolType; void* HardwareType; } ;
struct TYPE_6__ {int * MacAddress; } ;
typedef TYPE_1__ L3IF ;
typedef TYPE_2__ ARPV4_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *,int *,int ,TYPE_2__*,int) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3(L3IF *VAR_4, UCHAR *VAR_5, UINT VAR_6, UINT VAR_7)
{
 ARPV4_HEADER VAR_8;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }


 VAR_8.HardwareType = FUNC_1(VAR_0);
 VAR_8.ProtocolType = FUNC_1(VAR_3);
 VAR_8.HardwareSize = 6;
 VAR_8.ProtocolSize = 4;
 VAR_8.Operation = FUNC_1(VAR_1);
 FUNC_0(VAR_8.SrcAddress, VAR_4->MacAddress, 6);
 FUNC_0(VAR_8.TargetAddress, VAR_5, 6);
 VAR_8.SrcIP = VAR_7;
 VAR_8.TargetIP = VAR_6;


 FUNC_2(VAR_4, VAR_5, VAR_4->MacAddress, VAR_2, &VAR_8, sizeof(VAR_8));
}
