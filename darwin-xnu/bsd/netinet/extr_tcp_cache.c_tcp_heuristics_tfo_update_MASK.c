
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int sin_addr; } ;
struct TYPE_7__ {scalar_t__ sa_family; } ;
struct TYPE_6__ {int sin6_addr; } ;
union sockaddr_in_4_6 {TYPE_5__ sin; TYPE_2__ sa; TYPE_1__ sin6; } ;
typedef int tcks ;
struct TYPE_9__ {int addr; int addr6; } ;
struct TYPE_8__ {int addr; int addr6; } ;
struct tcp_cache_key_src {scalar_t__ af; TYPE_4__ faddr; TYPE_3__ laddr; struct ifnet* ifp; } ;
struct necp_tcp_tfo_cache {int necp_tcp_tfo_cookie_len; int necp_tcp_tfo_cookie; scalar_t__ necp_tcp_tfo_heuristics_middlebox; scalar_t__ necp_tcp_tfo_heuristics_rst_req; scalar_t__ necp_tcp_tfo_heuristics_rst_data; scalar_t__ necp_tcp_tfo_heuristics_loss_req; scalar_t__ necp_tcp_tfo_heuristics_loss; scalar_t__ necp_tcp_tfo_heuristics_success_req; scalar_t__ necp_tcp_tfo_heuristics_success; } ;
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
 int FUNC_3 (struct tcp_cache_key_src*,int ,int ) ;
 int FUNC_4 (struct tcp_cache_key_src*,int) ;
 int FUNC_5 (struct tcp_cache_key_src*,int) ;
 int FUNC_6 (struct tcp_cache_key_src*) ;

void FUNC_7(struct necp_tcp_tfo_cache *VAR_6,
    struct ifnet *VAR_7, union sockaddr_in_4_6 *VAR_8,
    union sockaddr_in_4_6 *VAR_9)
{
 struct tcp_cache_key_src VAR_10;

 FUNC_2(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.ifp = VAR_7;

 FUNC_0();

 if (VAR_9->sa.sa_family == VAR_1) {
  FUNC_1(&VAR_10.laddr.addr6, &VAR_8->sin6.sin6_addr, sizeof(struct in6_addr));
  FUNC_1(&VAR_10.faddr.addr6, &VAR_9->sin6.sin6_addr, sizeof(struct in6_addr));
  VAR_10.af = VAR_1;
 } else if (VAR_9->sa.sa_family == VAR_0) {
  FUNC_1(&VAR_10.laddr.addr, &VAR_8->sin.sin_addr, sizeof(struct in_addr));
  FUNC_1(&VAR_10.faddr.addr, &VAR_9->sin.sin_addr, sizeof(struct in_addr));
  VAR_10.af = VAR_0;
 }

 if (VAR_6->necp_tcp_tfo_heuristics_success)
  FUNC_5(&VAR_10, VAR_4 | VAR_2 |
          VAR_5 | VAR_3);

 if (VAR_6->necp_tcp_tfo_heuristics_success_req)
  FUNC_5(&VAR_10, VAR_4 | VAR_5);

 if (VAR_6->necp_tcp_tfo_heuristics_loss)
  FUNC_4(&VAR_10, VAR_4 | VAR_2);

 if (VAR_6->necp_tcp_tfo_heuristics_loss_req)
  FUNC_4(&VAR_10, VAR_4);

 if (VAR_6->necp_tcp_tfo_heuristics_rst_data)
  FUNC_4(&VAR_10, VAR_5 | VAR_3);

 if (VAR_6->necp_tcp_tfo_heuristics_rst_req)
  FUNC_4(&VAR_10, VAR_5);

 if (VAR_6->necp_tcp_tfo_heuristics_middlebox)
  FUNC_6(&VAR_10);

 if (VAR_6->necp_tcp_tfo_cookie_len != 0) {
  FUNC_3(&VAR_10,
   VAR_6->necp_tcp_tfo_cookie, VAR_6->necp_tcp_tfo_cookie_len);
 }

 return;
}
