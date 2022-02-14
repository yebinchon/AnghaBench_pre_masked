
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * Mtu; int * Prefix; int * TargetLinkLayer; int * SourceLinkLayer; } ;
typedef int ICMPV6_OPTION_PREFIX ;
typedef int ICMPV6_OPTION_MTU ;
typedef TYPE_1__ ICMPV6_OPTION_LIST ;
typedef int ICMPV6_OPTION_LINK_LAYER ;
typedef int BUF ;


 int FUNC_0 (int *,int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,int ) ;

BUF *FUNC_3(ICMPV6_OPTION_LIST *VAR_4)
{
 BUF *VAR_5;

 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_1();

 if (VAR_4->SourceLinkLayer != ((void*)0))
 {
  FUNC_0(VAR_5, VAR_2, VAR_4->SourceLinkLayer, sizeof(ICMPV6_OPTION_LINK_LAYER));
 }
 if (VAR_4->TargetLinkLayer != ((void*)0))
 {
  FUNC_0(VAR_5, VAR_3, VAR_4->TargetLinkLayer, sizeof(ICMPV6_OPTION_LINK_LAYER));
 }
 if (VAR_4->Prefix != ((void*)0))
 {
  FUNC_0(VAR_5, VAR_1, VAR_4->Prefix, sizeof(ICMPV6_OPTION_PREFIX));
 }
 if (VAR_4->Mtu != ((void*)0))
 {
  FUNC_0(VAR_5, VAR_0, VAR_4->Mtu, sizeof(ICMPV6_OPTION_MTU));
 }

 FUNC_2(VAR_5, 0, 0);

 return VAR_5;
}
