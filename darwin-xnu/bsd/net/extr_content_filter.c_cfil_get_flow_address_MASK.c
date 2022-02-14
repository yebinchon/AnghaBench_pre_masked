
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int16_t ;
struct in_addr {int dummy; } ;
struct inpcb {int inp_fport; int inp_lport; struct in_addr inp_faddr; struct in_addr inp_laddr; } ;
struct TYPE_5__ {struct in_addr ia46_addr4; } ;
struct TYPE_6__ {TYPE_1__ addr46; } ;
struct TYPE_7__ {struct in_addr ia46_addr4; } ;
struct TYPE_8__ {TYPE_3__ addr46; } ;
struct cfil_hash_entry {int cfentry_fport; int cfentry_lport; TYPE_2__ cfentry_faddr; TYPE_4__ cfentry_laddr; } ;



__attribute__((used)) static void
FUNC_0(struct cfil_hash_entry *VAR_0, struct inpcb *VAR_1,
       struct in_addr *VAR_2, struct in_addr *VAR_3,
       u_int16_t *VAR_4, u_int16_t *VAR_5)
{
 if (VAR_0 != ((void*)0)) {
  *VAR_2 = VAR_0->cfentry_laddr.addr46.ia46_addr4;
  *VAR_3 = VAR_0->cfentry_faddr.addr46.ia46_addr4;
  *VAR_4 = VAR_0->cfentry_lport;
  *VAR_5 = VAR_0->cfentry_fport;
 } else {
  *VAR_2 = VAR_1->inp_laddr;
  *VAR_3 = VAR_1->inp_faddr;
  *VAR_4 = VAR_1->inp_lport;
  *VAR_5 = VAR_1->inp_fport;
 }
}
