
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sb_hiwat; } ;
struct TYPE_3__ {scalar_t__ sb_hiwat; } ;
struct socket {scalar_t__ so_pcb; TYPE_2__ so_rcv; TYPE_1__ so_snd; } ;
struct proc {int dummy; } ;
struct inpcb {int in6p_hops; int in6p_cksum; int inp_ip_ttl; int inp_vflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct socket*,int *,struct proc*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (struct socket*,int ,int ) ;
 struct inpcb* FUNC_3 (struct socket*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_9, int VAR_10, struct proc *VAR_11)
{
#pragma unused(proto)
 struct inpcb *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_3(VAR_9);
 if (VAR_12 != ((void*)0))
  return (VAR_0);

 VAR_13 = FUNC_0(VAR_9, &VAR_6, VAR_11);
 if (VAR_13)
  return (VAR_13);

 if (VAR_9->so_snd.sb_hiwat == 0 || VAR_9->so_rcv.sb_hiwat == 0) {
  VAR_13 = FUNC_2(VAR_9, VAR_8, VAR_7);
  if (VAR_13)
   return (VAR_13);
 }
 VAR_12 = (struct inpcb *)VAR_9->so_pcb;
 VAR_12->inp_vflag |= VAR_2;
 if (VAR_3)
  VAR_12->inp_vflag |= VAR_1;
 VAR_12->in6p_hops = -1;
 VAR_12->in6p_cksum = -1;






 VAR_12->inp_ip_ttl = VAR_4;
 if (VAR_5)
  FUNC_1(VAR_12);
 return (0);
}
