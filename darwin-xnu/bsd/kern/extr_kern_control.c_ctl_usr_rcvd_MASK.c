
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ so_pcb; } ;
struct kctl {int kctlref; int (* rcvd ) (int ,int ,int ,int) ;} ;
struct TYPE_2__ {int sc_unit; } ;
struct ctl_cb {int userdata; TYPE_1__ sac; struct kctl* kctl; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*) ;
 int FUNC_1 (struct socket*,int ) ;
 int FUNC_2 (struct socket*,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_1, int VAR_2)
{
 struct ctl_cb *VAR_3 = (struct ctl_cb *)VAR_1->so_pcb;
 struct kctl *VAR_4;

 if ((VAR_4 = VAR_3->kctl) == ((void*)0)) {
  return (VAR_0);
 }

 if (VAR_4->rcvd) {
  FUNC_2(VAR_1, 0);
  (*VAR_4->rcvd)(VAR_4->kctlref, VAR_3->sac.sc_unit, VAR_3->userdata, VAR_2);
  FUNC_1(VAR_1, 0);
 }

 FUNC_0(VAR_1);

 return (0);
}
