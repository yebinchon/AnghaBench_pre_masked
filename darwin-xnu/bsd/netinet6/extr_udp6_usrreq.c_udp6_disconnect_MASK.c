
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int so_state; } ;
struct pr_usrreqs {int (* pru_disconnect ) (struct socket*) ;} ;
struct inpcb {int inp_vflag; int * in6p_last_outifp; int in6p_laddr; int in6p_faddr; } ;
struct TYPE_2__ {struct pr_usrreqs* pr_usrreqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct inpcb*) ;
 int VAR_6 ;
 int FUNC_2 (struct inpcb*) ;
 TYPE_1__** VAR_7 ;
 scalar_t__ FUNC_3 (struct inpcb*) ;
 struct inpcb* FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*) ;

__attribute__((used)) static int
FUNC_6(struct socket *VAR_8)
{
 struct inpcb *VAR_9;

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9 == ((void*)0)



  )
  return (VAR_9 == ((void*)0) ? VAR_0 : VAR_2);

 if (VAR_9->inp_vflag & VAR_3) {
  struct pr_usrreqs *VAR_10;

  VAR_10 = VAR_7[VAR_4]->pr_usrreqs;
  return ((*VAR_10->pru_disconnect)(VAR_8));
 }

 if (FUNC_0(&VAR_9->in6p_faddr))
  return (VAR_1);

 FUNC_1(VAR_9);


 FUNC_2(VAR_9);

 VAR_9->in6p_laddr = VAR_6;
 VAR_9->in6p_last_outifp = ((void*)0);

 VAR_8->so_state &= ~VAR_5;
 return (0);
}
