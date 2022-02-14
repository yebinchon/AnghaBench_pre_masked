
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int SrcIP; int SrcAddress; int TargetIP; } ;
struct TYPE_11__ {int IpAddress; } ;
struct TYPE_9__ {TYPE_4__* ARPv4Header; } ;
struct TYPE_10__ {TYPE_1__ L3; } ;
typedef TYPE_2__ PKT ;
typedef TYPE_3__ L3IF ;
typedef TYPE_4__ ARPV4_HEADER ;


 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ) ;

void FUNC_2(L3IF *VAR_0, PKT *VAR_1)
{
 ARPV4_HEADER *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = VAR_1->L3.ARPv4Header;

 FUNC_0(VAR_0, VAR_2->SrcIP, VAR_2->SrcAddress);

 if (VAR_2->TargetIP == VAR_0->IpAddress)
 {

  FUNC_1(VAR_0, VAR_2->SrcAddress, VAR_2->SrcIP, VAR_0->IpAddress);
 }
}
