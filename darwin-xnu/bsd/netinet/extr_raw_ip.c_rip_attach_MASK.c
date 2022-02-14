
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_state; scalar_t__ so_pcb; } ;
struct proc {int dummy; } ;
struct inpcb {int inp_ip_p; int inp_ip_ttl; int inp_vflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct socket*,int *,struct proc*) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct socket*,int ,int ) ;
 struct inpcb* FUNC_3 (struct socket*) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_7, int VAR_8, struct proc *VAR_9)
{
 struct inpcb *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_7);
 if (VAR_10)
  FUNC_1("rip_attach");
 if ((VAR_7->so_state & VAR_2) == 0)
  return (VAR_0);

 VAR_11 = FUNC_2(VAR_7, VAR_5, VAR_4);
 if (VAR_11)
  return VAR_11;
 VAR_11 = FUNC_0(VAR_7, &VAR_6, VAR_9);
 if (VAR_11)
  return VAR_11;
 VAR_10 = (struct inpcb *)VAR_7->so_pcb;
 VAR_10->inp_vflag |= VAR_1;
 VAR_10->inp_ip_p = VAR_8;
 VAR_10->inp_ip_ttl = VAR_3;
 return 0;
}
