
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int so_state; TYPE_2__* so_proto; } ;
typedef int sae_connid_t ;
typedef int sae_associd_t ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_disconnectx ) (struct socket*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket*,int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (struct socket*,int ,int ) ;

int
FUNC_2(struct socket *VAR_3, sae_associd_t VAR_4, sae_connid_t VAR_5)
{
 int VAR_6;





 VAR_6 = (*VAR_3->so_proto->pr_usrreqs->pru_disconnectx)(VAR_3, VAR_4, VAR_5);
 if (VAR_6 == 0) {




  if (VAR_3->so_state & (VAR_1|VAR_0))
   FUNC_0(VAR_3, VAR_2, ((void*)0));
 }
 return (VAR_6);
}
