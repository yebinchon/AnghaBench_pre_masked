
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pfr_ktable {int pfrkt_flags; int pfrkt_nomatch; int pfrkt_match; int pfrkt_ip6; int pfrkt_ip4; struct pfr_ktable* pfrkt_root; } ;
struct pfr_kentry {int pfrke_not; } ;
struct pf_addr {int * addr32; } ;
typedef int sa_family_t ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {int sin6_addr; TYPE_1__ sin_addr; } ;




 int FUNC_0 (struct pfr_kentry*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct pf_addr*,int *,int) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;

int
FUNC_4(struct pfr_ktable *VAR_5, struct pf_addr *VAR_6, sa_family_t VAR_7)
{
 struct pfr_kentry *VAR_8 = ((void*)0);
 int VAR_9;

 FUNC_1(VAR_2, VAR_0);

 if (!(VAR_5->pfrkt_flags & VAR_1) && VAR_5->pfrkt_root != ((void*)0))
  VAR_5 = VAR_5->pfrkt_root;
 if (!(VAR_5->pfrkt_flags & VAR_1))
  return (0);

 switch (VAR_7) {
 }
 VAR_9 = (VAR_8 && !VAR_8->pfrke_not);
 if (VAR_9)
  VAR_5->pfrkt_match++;
 else
  VAR_5->pfrkt_nomatch++;
 return (VAR_9);
}
