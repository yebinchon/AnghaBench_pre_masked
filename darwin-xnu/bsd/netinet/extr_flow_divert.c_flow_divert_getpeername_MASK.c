
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int so_flags; TYPE_2__* so_proto; struct flow_divert_pcb* so_fd_pcb; } ;
struct sockaddr {int dummy; } ;
struct flow_divert_pcb {int remote_address; } ;
typedef int errno_t ;
struct TYPE_4__ {TYPE_1__* pr_domain; } ;
struct TYPE_3__ {int dom_family; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,struct sockaddr**) ;

__attribute__((used)) static errno_t
FUNC_2(struct socket *VAR_1, struct sockaddr **VAR_2)
{
 struct flow_divert_pcb *VAR_3 = VAR_1->so_fd_pcb;

 FUNC_0((VAR_1->so_flags & VAR_0) && VAR_1->so_fd_pcb != ((void*)0));

 return FUNC_1(VAR_1->so_proto->pr_domain->dom_family,
                             VAR_3->remote_address,
                             VAR_2);
}
