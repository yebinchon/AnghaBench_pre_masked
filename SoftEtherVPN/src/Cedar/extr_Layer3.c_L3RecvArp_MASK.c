
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int HardwareSize; int ProtocolSize; int Operation; int SrcAddress; int ProtocolType; int HardwareType; } ;
struct TYPE_7__ {TYPE_3__* ARPv4Header; } ;
struct TYPE_8__ {int MacAddressSrc; TYPE_1__ L3; } ;
typedef TYPE_2__ PKT ;
typedef int L3IF ;
typedef TYPE_3__ ARPV4_HEADER ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int VAR_1 ;

void FUNC_4(L3IF *VAR_2, PKT *VAR_3)
{
 ARPV4_HEADER *VAR_4;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_4 = VAR_3->L3.ARPv4Header;

 if (FUNC_1(VAR_4->HardwareType) != VAR_0 ||
  FUNC_1(VAR_4->ProtocolType) != VAR_1 ||
  VAR_4->HardwareSize != 6 || VAR_4->ProtocolSize != 4)
 {
  return;
 }
 if (FUNC_0(VAR_4->SrcAddress, VAR_3->MacAddressSrc, 6) != 0)
 {
  return;
 }

 switch (FUNC_1(VAR_4->Operation))
 {
 case 129:

  FUNC_2(VAR_2, VAR_3);
  break;

 case 128:

  FUNC_3(VAR_2, VAR_3);
  break;
 }
}
