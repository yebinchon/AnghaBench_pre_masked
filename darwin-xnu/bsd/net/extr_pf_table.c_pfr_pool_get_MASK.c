
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef union sockaddr_union {int dummy; } sockaddr_union ;
struct pfr_ktable {int pfrkt_flags; int pfrkt_match; int pfrkt_ip6; int pfrkt_ip4; int pfrkt_nomatch; struct pfr_ktable* pfrkt_root; } ;
struct pfr_kentry {int pfrke_net; union sockaddr_union pfrke_sa; } ;
struct pf_addr {int dummy; } ;
typedef scalar_t__ sa_family_t ;
struct TYPE_4__ {int sin6_addr; int sin_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pfr_kentry*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct pf_addr*,struct pf_addr*,scalar_t__) ;
 int FUNC_3 (struct pf_addr*,scalar_t__) ;
 int FUNC_4 (int ,struct pf_addr*,struct pf_addr*,struct pf_addr*,scalar_t__) ;
 int FUNC_5 (struct pf_addr*,struct pf_addr*,struct pf_addr*,int *,scalar_t__) ;
 struct pf_addr* FUNC_6 (union sockaddr_union*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 struct pfr_kentry* FUNC_7 (struct pfr_ktable*,int,scalar_t__) ;
 union sockaddr_union VAR_6 ;
 int FUNC_8 (union sockaddr_union*,scalar_t__,int ) ;
 TYPE_1__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ) ;

int
FUNC_10(struct pfr_ktable *VAR_9, int *VAR_10, struct pf_addr *VAR_11,
    struct pf_addr **VAR_12, struct pf_addr **VAR_13, sa_family_t VAR_14)
{
 struct pfr_kentry *VAR_15, *VAR_16;
 struct pf_addr *VAR_17;
 union sockaddr_union VAR_18;
 int VAR_19 = -1, VAR_20 = 0;

 FUNC_1(VAR_4, VAR_2);

 if (VAR_14 == VAR_0)
  VAR_17 = (struct pf_addr *)&VAR_7.sin_addr;
 else if (VAR_14 == VAR_1)
  VAR_17 = (struct pf_addr *)&VAR_8;
 else
  return (-1);

 if (!(VAR_9->pfrkt_flags & VAR_3) && VAR_9->pfrkt_root != ((void*)0))
  VAR_9 = VAR_9->pfrkt_root;
 if (!(VAR_9->pfrkt_flags & VAR_3))
  return (-1);

 if (VAR_10 != ((void*)0))
  VAR_19 = *VAR_10;
 if (VAR_11 != ((void*)0) && VAR_19 >= 0)
  VAR_20 = 1;
 if (VAR_19 < 0)
  VAR_19 = 0;

_next_block:
 VAR_15 = FUNC_7(VAR_9, VAR_19, VAR_14);
 if (VAR_15 == ((void*)0)) {
  VAR_9->pfrkt_nomatch++;
  return (1);
 }
 FUNC_8(&VAR_6, VAR_14, VAR_15->pfrke_net);
 *VAR_12 = FUNC_6(&VAR_15->pfrke_sa, VAR_14);
 *VAR_13 = FUNC_6(&VAR_6, VAR_14);

 if (VAR_20) {

  if (!FUNC_4(0, *VAR_12, *VAR_13, VAR_11, VAR_14)) {

   VAR_19++;
   VAR_20 = 0;
   goto _next_block;
  }
  FUNC_2(VAR_17, VAR_11, VAR_14);
 } else {

  FUNC_2(VAR_17, *VAR_12, VAR_14);
 }

 if (!FUNC_0(VAR_15)) {

  FUNC_2(VAR_11, VAR_17, VAR_14);
  *VAR_10 = VAR_19;
  VAR_9->pfrkt_match++;
  return (0);
 }
 for (;;) {

  if (VAR_14 == VAR_0)
   VAR_16 = (struct pfr_kentry *)FUNC_9(&VAR_7,
       VAR_9->pfrkt_ip4);
  else if (VAR_14 == VAR_1)
   VAR_16 = (struct pfr_kentry *)FUNC_9(&VAR_8,
       VAR_9->pfrkt_ip6);
  else
   return (-1);

  if (VAR_16 == VAR_15) {

   FUNC_2(VAR_11, VAR_17, VAR_14);
   *VAR_10 = VAR_19;
   VAR_9->pfrkt_match++;
   return (0);
  }


  FUNC_8(&VAR_18, VAR_0, VAR_16->pfrke_net);
  FUNC_5(VAR_17, VAR_17, FUNC_6(&VAR_18, VAR_14), &VAR_5, VAR_14);
  FUNC_3(VAR_17, VAR_14);
  if (!FUNC_4(0, *VAR_12, *VAR_13, VAR_17, VAR_14)) {


   VAR_19++;
   VAR_20 = 0;
   goto _next_block;
  }
 }
}
