
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int so_state; TYPE_2__* so_proto; } ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_disconnect ) (struct socket*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct socket*,int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (struct socket*) ;

int
FUNC_2(struct socket *VAR_5)
{
 int VAR_6;

 if ((VAR_5->so_state & VAR_2) == 0) {
  VAR_6 = VAR_1;
  goto bad;
 }
 if (VAR_5->so_state & VAR_3) {
  VAR_6 = VAR_0;
  goto bad;
 }

 VAR_6 = (*VAR_5->so_proto->pr_usrreqs->pru_disconnect)(VAR_5);
 if (VAR_6 == 0)
  FUNC_0(VAR_5, VAR_4, ((void*)0));

bad:
 return (VAR_6);
}
