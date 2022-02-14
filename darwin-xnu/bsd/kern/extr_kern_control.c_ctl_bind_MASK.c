
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ so_pcb; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct ctl_cb {int userdata; int sac; TYPE_1__* kctl; } ;
struct TYPE_2__ {int (* bind ) (int ,int *,int *) ;int kctlref; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*,struct sockaddr*,struct proc*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct socket*,int ) ;
 int FUNC_3 (struct socket*,int ) ;
 int FUNC_4 (int ,int *,int *) ;

__attribute__((used)) static int
FUNC_5(struct socket *VAR_1, struct sockaddr *VAR_2, struct proc *VAR_3)
{
 int VAR_4 = 0;
 struct ctl_cb *VAR_5 = (struct ctl_cb *)VAR_1->so_pcb;

 if (VAR_5 == ((void*)0)) {
  FUNC_1("ctl_bind so_pcb null\n");
 }

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4) {
  return (VAR_4);
 }

 if (VAR_5->kctl == ((void*)0)) {
  FUNC_1("ctl_bind kctl null\n");
 }

 if (VAR_5->kctl->bind == ((void*)0)) {
  return (VAR_0);
 }

 FUNC_3(VAR_1, 0);
 VAR_4 = (*VAR_5->kctl->bind)(VAR_5->kctl->kctlref, &VAR_5->sac, &VAR_5->userdata);
 FUNC_2(VAR_1, 0);

 return (VAR_4);
}
