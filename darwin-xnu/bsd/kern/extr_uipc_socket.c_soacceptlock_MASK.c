
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int so_state; TYPE_1__* so_proto; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {int (* pru_accept ) (struct socket*,struct sockaddr**) ;} ;
struct TYPE_3__ {TYPE_2__* pr_usrreqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct socket*,int ) ;
 int FUNC_2 (struct socket*,int *,int *) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*,int) ;
 int FUNC_5 (struct socket*,int) ;
 int FUNC_6 (struct socket*,struct sockaddr**) ;

int
FUNC_7(struct socket *VAR_2, struct sockaddr **VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_4)
  FUNC_4(VAR_2, 1);

 FUNC_1(VAR_2, VAR_0);
 FUNC_3(VAR_2);




 if ((VAR_2->so_state & VAR_1) == 0)
  FUNC_0("soaccept: !NOFDREF");
 VAR_2->so_state &= ~VAR_1;
 VAR_5 = (*VAR_2->so_proto->pr_usrreqs->pru_accept)(VAR_2, VAR_3);

 if (VAR_4)
  FUNC_5(VAR_2, 1);
 return (VAR_5);
}
