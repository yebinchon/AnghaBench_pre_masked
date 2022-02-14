
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_int64_t ;
struct socket_info {short soi_options; int soi_rcv; int soi_snd; int soi_oobmark; int soi_error; int soi_timeo; int soi_qlimit; int soi_incqlen; int soi_qlen; scalar_t__ soi_family; scalar_t__ soi_protocol; void* soi_pcb; int soi_state; int soi_linger; int soi_type; void* soi_so; } ;
struct socket {int so_options; int so_rcv; int so_snd; int so_oobmark; int so_error; int so_timeo; int so_qlimit; int so_incqlen; int so_qlen; TYPE_1__* so_proto; struct socket* so_pcb; int so_state; int so_linger; int so_type; } ;
struct TYPE_2__ {scalar_t__ pr_domain; } ;


 scalar_t__ FUNC_0 (struct socket*) ;
 scalar_t__ FUNC_1 (struct socket*) ;
 scalar_t__ FUNC_2 (struct socket*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(struct socket *VAR_0, struct socket_info *VAR_1)
{
 VAR_1->soi_so = (u_int64_t)FUNC_2(VAR_0);
 VAR_1->soi_type = VAR_0->so_type;
 VAR_1->soi_options = (short)(VAR_0->so_options & 0xffff);
 VAR_1->soi_linger = VAR_0->so_linger;
 VAR_1->soi_state = VAR_0->so_state;
 VAR_1->soi_pcb = (u_int64_t)FUNC_2(VAR_0->so_pcb);
 if (VAR_0->so_proto) {
  VAR_1->soi_protocol = FUNC_1(VAR_0);
  if (VAR_0->so_proto->pr_domain)
   VAR_1->soi_family = FUNC_0(VAR_0);
  else
   VAR_1->soi_family = 0;
 } else {
  VAR_1->soi_protocol = VAR_1->soi_family = 0;
 }
 VAR_1->soi_qlen = VAR_0->so_qlen;
 VAR_1->soi_incqlen = VAR_0->so_incqlen;
 VAR_1->soi_qlimit = VAR_0->so_qlimit;
 VAR_1->soi_timeo = VAR_0->so_timeo;
 VAR_1->soi_error = VAR_0->so_error;
 VAR_1->soi_oobmark = VAR_0->so_oobmark;
 FUNC_3(&VAR_0->so_snd, &VAR_1->soi_snd);
 FUNC_3(&VAR_0->so_rcv, &VAR_1->soi_rcv);
}
