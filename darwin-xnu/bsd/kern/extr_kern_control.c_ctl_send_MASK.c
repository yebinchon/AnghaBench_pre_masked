
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {scalar_t__ so_pcb; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct mbuf {int dummy; } ;
struct kctl {int (* send ) (int ,int ,int ,struct mbuf*,int) ;int kctlref; } ;
struct TYPE_3__ {int sc_unit; } ;
struct ctl_cb {int userdata; TYPE_1__ sac; struct kctl* kctl; } ;
struct TYPE_4__ {int kcs_send_fail; } ;
typedef int SInt64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct mbuf*,struct socket*,int ) ;
 int FUNC_4 (struct socket*,int ) ;
 int FUNC_5 (struct socket*,int ) ;
 int FUNC_6 (int ,int ,int ,struct mbuf*,int) ;

__attribute__((used)) static int
FUNC_7(struct socket *VAR_4, int VAR_5, struct mbuf *VAR_6,
 struct sockaddr *VAR_7, struct mbuf *VAR_8,
 struct proc *VAR_9)
{
#pragma unused(addr, p)
 int VAR_10 = 0;
 struct ctl_cb *VAR_11 = (struct ctl_cb *)VAR_4->so_pcb;
 struct kctl *VAR_12;

 if (VAR_8)
  FUNC_1(VAR_8);

 if (VAR_11 == ((void*)0))
  VAR_10 = VAR_1;

 if (VAR_10 == 0 && (VAR_12 = VAR_11->kctl) == ((void*)0))
  VAR_10 = VAR_0;

 if (VAR_10 == 0 && VAR_12->send) {
  FUNC_3(VAR_6, VAR_4, FUNC_2(VAR_6));
  FUNC_5(VAR_4, 0);
  VAR_10 = (*VAR_12->send)(VAR_12->kctlref, VAR_11->sac.sc_unit, VAR_11->userdata,
      VAR_6, VAR_5);
  FUNC_4(VAR_4, 0);
 } else {
  FUNC_1(VAR_6);
  if (VAR_10 == 0)
   VAR_10 = VAR_2;
 }
 if (VAR_10 != 0)
  FUNC_0((SInt64 *)&VAR_3.kcs_send_fail);
 return (VAR_10);
}
