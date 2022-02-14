
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct socket {int so_usecount; struct socket* so_pcb; int so_state; } ;
struct proc {int dummy; } ;
struct inpcb {int inp_ip_p; struct socket inpcb_mtx; int inp_flags; int inp_vflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct socket*,int *,struct proc*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int ,int ,int ) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct socket*,int ,int ) ;
 struct inpcb* FUNC_6 (struct socket*) ;

__attribute__((used)) static int
FUNC_7(struct socket *VAR_6, int VAR_7, struct proc *VAR_8)
{
 struct inpcb *VAR_9;
 int VAR_10;


 VAR_9 = FUNC_6(VAR_6);
 if (VAR_9)
  FUNC_2("div_attach");
 if ((VAR_10 = FUNC_4(VAR_8)) != 0)
  return VAR_10;

 VAR_10 = FUNC_5(VAR_6, VAR_4, VAR_3);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_1(VAR_6, &VAR_5, VAR_8);
 if (VAR_10)
  return VAR_10;
 VAR_9 = (struct inpcb *)VAR_6->so_pcb;
 VAR_9->inp_ip_p = VAR_7;
 VAR_9->inp_vflag |= VAR_1;
 VAR_9->inp_flags |= VAR_0;


 VAR_6->so_state |= VAR_2;
 return 0;
}
