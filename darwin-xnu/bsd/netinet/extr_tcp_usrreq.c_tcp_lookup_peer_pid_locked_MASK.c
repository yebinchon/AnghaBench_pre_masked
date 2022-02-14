
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct socket {int so_state; scalar_t__ so_pcb; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct inpcb {int inp_vflag; TYPE_1__* inp_socket; struct in_addr inp_faddr; struct in_addr inp_laddr; struct in6_addr in6p_faddr; struct in6_addr in6p_laddr; int inp_fport; int inp_lport; } ;
typedef int pid_t ;
struct TYPE_2__ {int last_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inpcb* FUNC_0 (int *,struct in6_addr*,int ,struct in6_addr*,int ,int ,int *) ;
 int FUNC_1 (struct inpcb*,int ,int ) ;
 struct inpcb* FUNC_2 (int *,struct in_addr,int ,struct in_addr,int ,int ,int *) ;
 int FUNC_3 (struct socket*,int ) ;
 int FUNC_4 (struct socket*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(struct socket *VAR_7, pid_t *VAR_8)
{
 int VAR_9 = VAR_0;
 *VAR_8 = -1;
 if ((VAR_7->so_state & VAR_4) == 0) return VAR_1;

 struct inpcb *VAR_10 = (struct inpcb*)VAR_7->so_pcb;
 uint16_t VAR_11 = VAR_10->inp_lport;
 uint16_t VAR_12 = VAR_10->inp_fport;
 struct inpcb *VAR_13 = ((void*)0);
 struct in6_addr VAR_14, VAR_15;
 struct in_addr VAR_16, VAR_17;

 if (VAR_10->inp_vflag & VAR_3) {
  VAR_14 = VAR_10->in6p_laddr;
  VAR_15 = VAR_10->in6p_faddr;
 } else if (VAR_10->inp_vflag & VAR_2) {
  VAR_16 = VAR_10->inp_laddr;
  VAR_17 = VAR_10->inp_faddr;
 }

 FUNC_4(VAR_7, 0);
 if (VAR_10->inp_vflag & VAR_3) {
  VAR_13 = FUNC_0(&VAR_6, &VAR_14, VAR_11, &VAR_15, VAR_12, 0, ((void*)0));
 } else if (VAR_10->inp_vflag & VAR_2) {
  VAR_13 = FUNC_2(&VAR_6, VAR_16, VAR_11, VAR_17, VAR_12, 0, ((void*)0));
 }

 if (VAR_13) {
  *VAR_8 = VAR_13->inp_socket->last_pid;
  VAR_9 = 0;
  FUNC_1(VAR_13, VAR_5, 0);
 }
 FUNC_3(VAR_7, 0);

 return VAR_9;
}
