
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int sin_addr; } ;
struct TYPE_6__ {scalar_t__ sa_family; } ;
struct TYPE_5__ {int sin6_addr; } ;
union sockaddr_in_4_6 {TYPE_4__ sin; TYPE_2__ sa; TYPE_1__ sin6; } ;
typedef int tcks ;
struct TYPE_7__ {int addr; int addr6; } ;
struct tcp_cache_key_src {scalar_t__ af; TYPE_3__ laddr; struct ifnet* ifp; } ;
struct necp_tcp_ecn_cache {scalar_t__ necp_tcp_ecn_heuristics_aggressive; scalar_t__ necp_tcp_ecn_heuristics_syn_rst; scalar_t__ necp_tcp_ecn_heuristics_drop_rxmt; scalar_t__ necp_tcp_ecn_heuristics_drop_rst; scalar_t__ necp_tcp_ecn_heuristics_loss; scalar_t__ necp_tcp_ecn_heuristics_success; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct tcp_cache_key_src*,int ,int) ;
 int FUNC_3 (struct tcp_cache_key_src*) ;
 int FUNC_4 (struct tcp_cache_key_src*,int ) ;
 int FUNC_5 (struct tcp_cache_key_src*,int ) ;

void FUNC_6(struct necp_tcp_ecn_cache *VAR_6,
    struct ifnet *VAR_7, union sockaddr_in_4_6 *VAR_8)
{
 struct tcp_cache_key_src VAR_9;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.ifp = VAR_7;

 FUNC_0();

 if (VAR_8->sa.sa_family == VAR_1) {
  FUNC_1(&VAR_9.laddr.addr6, &VAR_8->sin6.sin6_addr, sizeof(struct in6_addr));
  VAR_9.af = VAR_1;
 } else if (VAR_8->sa.sa_family == VAR_0) {
  FUNC_1(&VAR_9.laddr.addr, &VAR_8->sin.sin_addr, sizeof(struct in_addr));
  VAR_9.af = VAR_0;
 }

 if (VAR_6->necp_tcp_ecn_heuristics_success) {
  FUNC_5(&VAR_9, VAR_2);
 } else if (VAR_6->necp_tcp_ecn_heuristics_loss) {
  FUNC_4(&VAR_9, VAR_2);
 } else if (VAR_6->necp_tcp_ecn_heuristics_drop_rst) {
  FUNC_4(&VAR_9, VAR_3);
 } else if (VAR_6->necp_tcp_ecn_heuristics_drop_rxmt) {
  FUNC_4(&VAR_9, VAR_4);
 } else if (VAR_6->necp_tcp_ecn_heuristics_syn_rst) {
  FUNC_4(&VAR_9, VAR_5);
 } else if (VAR_6->necp_tcp_ecn_heuristics_aggressive) {
  FUNC_3(&VAR_9);
 }

 return;
}
