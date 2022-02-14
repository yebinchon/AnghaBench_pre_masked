
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int64_t ;
struct xsocket64 {int xso_len; short so_options; int so_uid; int so_rcv; int so_snd; int so_oobmark; int so_pgid; int so_error; int so_timeo; int so_qlimit; int so_incqlen; int so_qlen; scalar_t__ xso_family; scalar_t__ xso_protocol; void* so_pcb; int so_state; int so_linger; int so_type; void* xso_so; } ;
struct socket {int so_options; int so_cred; int so_rcv; int so_snd; int so_oobmark; int so_pgid; int so_error; int so_timeo; int so_qlimit; int so_incqlen; int so_qlen; scalar_t__ so_proto; struct socket* so_pcb; int so_state; int so_linger; int so_type; } ;


 scalar_t__ FUNC_0 (struct socket*) ;
 scalar_t__ FUNC_1 (struct socket*) ;
 scalar_t__ FUNC_2 (struct socket*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;

void
FUNC_5(struct socket *VAR_0, struct xsocket64 *VAR_1)
{
 VAR_1->xso_len = sizeof (*VAR_1);
 VAR_1->xso_so = (u_int64_t)FUNC_2(VAR_0);
 VAR_1->so_type = VAR_0->so_type;
 VAR_1->so_options = (short)(VAR_0->so_options & 0xffff);
 VAR_1->so_linger = VAR_0->so_linger;
 VAR_1->so_state = VAR_0->so_state;
 VAR_1->so_pcb = (u_int64_t)FUNC_2(VAR_0->so_pcb);
 if (VAR_0->so_proto) {
  VAR_1->xso_protocol = FUNC_1(VAR_0);
  VAR_1->xso_family = FUNC_0(VAR_0);
 } else {
  VAR_1->xso_protocol = VAR_1->xso_family = 0;
 }
 VAR_1->so_qlen = VAR_0->so_qlen;
 VAR_1->so_incqlen = VAR_0->so_incqlen;
 VAR_1->so_qlimit = VAR_0->so_qlimit;
 VAR_1->so_timeo = VAR_0->so_timeo;
 VAR_1->so_error = VAR_0->so_error;
 VAR_1->so_pgid = VAR_0->so_pgid;
 VAR_1->so_oobmark = VAR_0->so_oobmark;
 FUNC_4(&VAR_0->so_snd, &VAR_1->so_snd);
 FUNC_4(&VAR_0->so_rcv, &VAR_1->so_rcv);
 VAR_1->so_uid = FUNC_3(VAR_0->so_cred);
}
