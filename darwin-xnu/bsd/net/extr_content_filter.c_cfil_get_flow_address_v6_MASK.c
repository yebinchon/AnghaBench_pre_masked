
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int16_t ;
struct in6_addr {int dummy; } ;
struct inpcb {int inp_fport; int inp_lport; struct in6_addr in6p_faddr; struct in6_addr in6p_laddr; } ;
struct TYPE_4__ {struct in6_addr addr6; } ;
struct TYPE_3__ {struct in6_addr addr6; } ;
struct cfil_hash_entry {int cfentry_fport; int cfentry_lport; TYPE_2__ cfentry_faddr; TYPE_1__ cfentry_laddr; } ;



__attribute__((used)) static void
FUNC_0(struct cfil_hash_entry *VAR_0, struct inpcb *VAR_1,
       struct in6_addr **VAR_2, struct in6_addr **VAR_3,
       u_int16_t *VAR_4, u_int16_t *VAR_5)
{
 if (VAR_0 != ((void*)0)) {
  *VAR_2 = &VAR_0->cfentry_laddr.addr6;
  *VAR_3 = &VAR_0->cfentry_faddr.addr6;
  *VAR_4 = VAR_0->cfentry_lport;
  *VAR_5 = VAR_0->cfentry_fport;
 } else {
  *VAR_2 = &VAR_1->in6p_laddr;
  *VAR_3 = &VAR_1->in6p_faddr;
  *VAR_4 = VAR_1->inp_lport;
  *VAR_5 = VAR_1->inp_fport;
 }
}
