
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int last_pid; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct proc {int dummy; } ;
struct inpcb {int inp_flags2; int necp_client_uuid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inpcb*,struct sockaddr*,struct proc*) ;
 int FUNC_1 (int ,int ,struct inpcb*) ;
 int FUNC_2 (struct socket*,int ) ;
 int FUNC_3 (struct socket*,int ) ;
 struct inpcb* FUNC_4 (struct socket*) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct socket *VAR_5, struct sockaddr *VAR_6, struct proc *VAR_7)
{
 struct inpcb *VAR_8;
 int VAR_9;

 if (VAR_6->sa_family != 0 && VAR_6->sa_family != VAR_0 &&
     VAR_6->sa_family != VAR_1)
  return (VAR_2);

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8 == ((void*)0))
  return (VAR_3);
 VAR_9 = FUNC_0(VAR_8, VAR_6, VAR_7);
 return (VAR_9);
}
