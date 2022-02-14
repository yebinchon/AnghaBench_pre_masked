
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sin6_addr; } ;
struct TYPE_4__ {int sin_addr; } ;
struct TYPE_6__ {TYPE_2__ sin6; TYPE_1__ sin; } ;
struct pfr_kentry {scalar_t__ pfrke_af; TYPE_3__ pfrke_sa; int pfrke_not; int pfrke_net; } ;
struct pfr_addr {scalar_t__ pfra_af; int pfra_ip6addr; int pfra_ip4addr; int pfra_not; int pfra_net; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pfr_addr*,int) ;

__attribute__((used)) static void
FUNC_1(struct pfr_addr *VAR_2, struct pfr_kentry *VAR_3)
{
 FUNC_0(VAR_2, sizeof (*VAR_2));
 if (VAR_3 == ((void*)0))
  return;
 VAR_2->pfra_af = VAR_3->pfrke_af;
 VAR_2->pfra_net = VAR_3->pfrke_net;
 VAR_2->pfra_not = VAR_3->pfrke_not;
 if (VAR_2->pfra_af == VAR_0)
  VAR_2->pfra_ip4addr = VAR_3->pfrke_sa.sin.sin_addr;
 else if (VAR_2->pfra_af == VAR_1)
  VAR_2->pfra_ip6addr = VAR_3->pfrke_sa.sin6.sin6_addr;
}
