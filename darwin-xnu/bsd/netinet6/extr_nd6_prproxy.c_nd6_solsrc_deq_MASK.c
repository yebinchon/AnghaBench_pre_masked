
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nd_prefix {int ndpr_stateflags; int ndpr_prproxy_sols; } ;
struct in6_addr {int dummy; } ;
struct TYPE_2__ {struct in6_addr taddr; } ;
struct nd6_prproxy_soltgt {scalar_t__ soltgt_cnt; int soltgt_q; TYPE_1__ soltgt_key; } ;
struct nd6_prproxy_solsrc {struct ifnet* solsrc_ifp; struct in6_addr solsrc_saddr; } ;
struct ifnet {int dummy; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nd_prefix*) ;
 struct nd6_prproxy_soltgt* FUNC_1 (int ,int *,struct nd6_prproxy_soltgt*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct nd6_prproxy_solsrc* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct nd6_prproxy_solsrc*,int ) ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct in6_addr*,int) ;
 int FUNC_7 (struct nd6_prproxy_solsrc*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static boolean_t
FUNC_8(struct nd_prefix *VAR_7, struct in6_addr *VAR_8,
    struct in6_addr *VAR_9, struct ifnet **VAR_10)
{
 struct nd6_prproxy_soltgt VAR_11, *VAR_12;
 struct nd6_prproxy_solsrc *VAR_13;

 FUNC_0(VAR_7);
 FUNC_5(!(VAR_7->ndpr_stateflags & VAR_1));
 FUNC_5((VAR_7->ndpr_stateflags & (VAR_2|VAR_3)) ==
     (VAR_2|VAR_3));

 FUNC_6(VAR_9, sizeof (*VAR_9));
 *VAR_10 = ((void*)0);

 VAR_11.soltgt_key.taddr = *VAR_8;

 VAR_12 = FUNC_1(VAR_5, &VAR_7->ndpr_prproxy_sols, &VAR_11);
 if (VAR_12 == ((void*)0) || VAR_12->soltgt_cnt == 0) {
  FUNC_5(VAR_12 == ((void*)0) || FUNC_2(&VAR_12->soltgt_q));
  return (VAR_0);
 }

 FUNC_5(VAR_12->soltgt_cnt != 0);
 --VAR_12->soltgt_cnt;
 VAR_13 = FUNC_3(&VAR_12->soltgt_q);
 FUNC_5(VAR_13 != ((void*)0));
 FUNC_4(&VAR_12->soltgt_q, VAR_13, VAR_6);
 *VAR_9 = *(&VAR_13->solsrc_saddr);
 *VAR_10 = VAR_13->solsrc_ifp;
 FUNC_7(VAR_13);

 return (VAR_4);
}
