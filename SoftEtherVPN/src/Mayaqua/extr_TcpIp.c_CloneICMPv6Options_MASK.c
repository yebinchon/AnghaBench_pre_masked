
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* Mtu; void* Prefix; void* TargetLinkLayer; void* SourceLinkLayer; } ;
typedef int ICMPV6_OPTION_PREFIX ;
typedef int ICMPV6_OPTION_MTU ;
typedef TYPE_1__ ICMPV6_OPTION_LIST ;
typedef int ICMPV6_OPTION_LINK_LAYER ;


 void* FUNC_0 (void*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2(ICMPV6_OPTION_LIST *VAR_0, ICMPV6_OPTION_LIST *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, sizeof(ICMPV6_OPTION_LIST));

 VAR_0->SourceLinkLayer = FUNC_0(VAR_1->SourceLinkLayer, sizeof(ICMPV6_OPTION_LINK_LAYER));
 VAR_0->TargetLinkLayer = FUNC_0(VAR_1->TargetLinkLayer, sizeof(ICMPV6_OPTION_LINK_LAYER));
 VAR_0->Prefix = FUNC_0(VAR_1->Prefix, sizeof(ICMPV6_OPTION_PREFIX));
 VAR_0->Mtu = FUNC_0(VAR_1->Mtu, sizeof(ICMPV6_OPTION_MTU));
}
