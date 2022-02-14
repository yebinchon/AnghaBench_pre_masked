
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int SrcAddress; int SrcIP; } ;
struct TYPE_5__ {TYPE_3__* ARPv4Header; } ;
struct TYPE_6__ {TYPE_1__ L3; } ;
typedef TYPE_2__ PKT ;
typedef int L3IF ;
typedef TYPE_3__ ARPV4_HEADER ;


 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(L3IF *VAR_0, PKT *VAR_1)
{
 ARPV4_HEADER *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = VAR_1->L3.ARPv4Header;

 FUNC_0(VAR_0, VAR_2->SrcIP, VAR_2->SrcAddress);
}
