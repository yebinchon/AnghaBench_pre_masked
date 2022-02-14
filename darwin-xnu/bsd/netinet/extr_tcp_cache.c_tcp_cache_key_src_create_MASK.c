
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcpcb {struct inpcb* t_inpcb; } ;
struct TYPE_4__ {int addr; int addr6; } ;
struct TYPE_3__ {int addr; int addr6; } ;
struct tcp_cache_key_src {int af; TYPE_2__ faddr; TYPE_1__ laddr; int ifp; } ;
struct inpcb {int inp_vflag; int inp_faddr; int inp_laddr; int in6p_faddr; int in6p_laddr; int inp_last_outifp; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct tcp_cache_key_src*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct tcpcb *VAR_3, struct tcp_cache_key_src *VAR_4)
{
 struct inpcb *VAR_5 = VAR_3->t_inpcb;
 FUNC_1(VAR_4, 0, sizeof(*VAR_4));

 VAR_4->ifp = VAR_5->inp_last_outifp;

 if (VAR_5->inp_vflag & VAR_2) {
  FUNC_0(&VAR_4->laddr.addr6, &VAR_5->in6p_laddr, sizeof(struct in6_addr));
  FUNC_0(&VAR_4->faddr.addr6, &VAR_5->in6p_faddr, sizeof(struct in6_addr));
  VAR_4->af = VAR_1;
 } else {
  FUNC_0(&VAR_4->laddr.addr, &VAR_5->inp_laddr, sizeof(struct in_addr));
  FUNC_0(&VAR_4->faddr.addr, &VAR_5->inp_faddr, sizeof(struct in_addr));
  VAR_4->af = VAR_0;
 }

 return;
}
