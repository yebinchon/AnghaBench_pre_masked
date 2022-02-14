
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Mtu; int Prefix; int TargetLinkLayer; int SourceLinkLayer; } ;
typedef TYPE_1__ ICMPV6_OPTION_LIST ;


 int FUNC_0 (int ) ;

void FUNC_1(ICMPV6_OPTION_LIST *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->SourceLinkLayer);
 FUNC_0(VAR_0->TargetLinkLayer);
 FUNC_0(VAR_0->Prefix);
 FUNC_0(VAR_0->Mtu);
}
