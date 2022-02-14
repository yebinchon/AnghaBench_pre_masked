
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int opt ;
typedef int link ;
typedef int header ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_17__ {int Size; int Buf; } ;
struct TYPE_16__ {int TargetAddress; struct TYPE_16__* SourceLinkLayer; int * Address; } ;
typedef int IPV6_ADDR ;
typedef TYPE_1__ ICMPV6_OPTION_LIST ;
typedef TYPE_1__ ICMPV6_OPTION_LINK_LAYER ;
typedef TYPE_1__ ICMPV6_NEIGHBOR_SOLICIATION_HEADER ;
typedef TYPE_4__ BUF ;


 TYPE_4__* FUNC_0 (int *,int *,int,int ,int ,int ,int ,int ) ;
 TYPE_4__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_0 ;
 TYPE_4__* FUNC_4 () ;
 int FUNC_5 (TYPE_4__*,TYPE_1__*,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_1__*,int) ;

BUF *FUNC_8(IPV6_ADDR *VAR_1, IPV6_ADDR *VAR_2, UCHAR *VAR_3, UINT VAR_4)
{
 ICMPV6_OPTION_LIST VAR_5;
 ICMPV6_OPTION_LINK_LAYER VAR_6;
 ICMPV6_NEIGHBOR_SOLICIATION_HEADER VAR_7;
 BUF *VAR_8;
 BUF *VAR_9;
 BUF *VAR_10;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_7(&VAR_6, sizeof(VAR_6));
 FUNC_2(VAR_6.Address, VAR_3, 6);

 FUNC_7(&VAR_5, sizeof(VAR_5));
 VAR_5.SourceLinkLayer = &VAR_6;

 VAR_8 = FUNC_1(&VAR_5);

 FUNC_7(&VAR_7, sizeof(VAR_7));
 FUNC_2(&VAR_7.TargetAddress, VAR_2, sizeof(IPV6_ADDR));

 VAR_9 = FUNC_4();

 FUNC_5(VAR_9, &VAR_7, sizeof(VAR_7));
 FUNC_6(VAR_9, VAR_8);

 VAR_10 = FUNC_0(VAR_1, VAR_2, 255,
  VAR_0, 0, VAR_9->Buf, VAR_9->Size, VAR_4);

 FUNC_3(VAR_8);
 FUNC_3(VAR_9);

 return VAR_10;
}
