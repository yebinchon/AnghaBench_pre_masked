
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ HostIP; } ;
typedef TYPE_2__ VH ;
struct TYPE_12__ {scalar_t__ TargetIP; int SrcIP; int SrcAddress; } ;
struct TYPE_9__ {TYPE_4__* ARPv4Header; } ;
struct TYPE_11__ {TYPE_1__ L3; } ;
typedef TYPE_3__ PKT ;
typedef TYPE_4__ ARPV4_HEADER ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,scalar_t__) ;

void FUNC_2(VH *VAR_0, PKT *VAR_1)
{
 ARPV4_HEADER *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = VAR_1->L3.ARPv4Header;


 FUNC_0(VAR_0, VAR_2->SrcIP, VAR_2->SrcAddress);


 if (VAR_0->HostIP == VAR_2->TargetIP)
 {

  FUNC_1(VAR_0, VAR_2->SrcAddress, VAR_2->SrcIP, VAR_0->HostIP);
  return;
 }

}
