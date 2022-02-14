
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sin6; int sin; } ;
struct pfr_kentry {scalar_t__ pfrke_af; int pfrke_intrpool; int pfrke_not; int pfrke_net; TYPE_1__ pfrke_sa; } ;
struct pfr_addr {scalar_t__ pfra_af; int pfra_not; int pfra_net; int pfra_ip6addr; int pfra_ip4addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct pfr_kentry*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct pfr_kentry* FUNC_3 (int *,int ) ;

__attribute__((used)) static struct pfr_kentry *
FUNC_4(struct pfr_addr *VAR_5, int VAR_6)
{
 struct pfr_kentry *VAR_7;

 if (VAR_6)
  VAR_7 = FUNC_3(&VAR_4, VAR_2);
 else
  VAR_7 = FUNC_3(&VAR_3, VAR_2);
 if (VAR_7 == ((void*)0))
  return (((void*)0));
 FUNC_2(VAR_7, sizeof (*VAR_7));

 if (VAR_5->pfra_af == VAR_0)
  FUNC_0(VAR_7->pfrke_sa.sin, VAR_5->pfra_ip4addr);
 else if (VAR_5->pfra_af == VAR_1)
  FUNC_1(VAR_7->pfrke_sa.sin6, VAR_5->pfra_ip6addr);
 VAR_7->pfrke_af = VAR_5->pfra_af;
 VAR_7->pfrke_net = VAR_5->pfra_net;
 VAR_7->pfrke_not = VAR_5->pfra_not;
 VAR_7->pfrke_intrpool = VAR_6;
 return (VAR_7);
}
