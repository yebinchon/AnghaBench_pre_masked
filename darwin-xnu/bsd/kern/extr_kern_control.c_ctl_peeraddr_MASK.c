
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ so_pcb; } ;
struct sockaddr_ctl {int sc_len; int sc_unit; int sc_id; int ss_sysaddr; int sc_family; } ;
struct sockaddr {int dummy; } ;
struct kctl {int id; } ;
struct TYPE_2__ {int sc_unit; } ;
struct ctl_cb {TYPE_1__ sac; struct kctl* kctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sockaddr_ctl*,int) ;
 struct sockaddr* FUNC_1 (struct sockaddr*,int) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_4, struct sockaddr **VAR_5)
{
 struct ctl_cb *VAR_6 = (struct ctl_cb *)VAR_4->so_pcb;
 struct kctl *VAR_7;
 struct sockaddr_ctl VAR_8;

 if (VAR_6 == ((void*)0))
  return (VAR_3);

 if ((VAR_7 = VAR_6->kctl) == ((void*)0))
  return (VAR_2);

 FUNC_0(&VAR_8, sizeof(struct sockaddr_ctl));
 VAR_8.sc_len = sizeof(struct sockaddr_ctl);
 VAR_8.sc_family = VAR_0;
 VAR_8.ss_sysaddr = VAR_1;
 VAR_8.sc_id = VAR_7->id;
 VAR_8.sc_unit = VAR_6->sac.sc_unit;

 *VAR_5 = FUNC_1((struct sockaddr *)&VAR_8, 1);

 return (0);
}
