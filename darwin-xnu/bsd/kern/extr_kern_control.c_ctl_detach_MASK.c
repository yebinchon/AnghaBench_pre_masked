
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int so_state; int so_flags; scalar_t__ so_pcb; } ;
struct TYPE_4__ {int sc_unit; } ;
struct ctl_cb {int * userdata; TYPE_2__ sac; TYPE_1__* kctl; } ;
struct TYPE_3__ {int kctlref; int (* disconnect ) (int ,int ,int *) ;int * bind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket*,int ) ;
 int FUNC_1 (struct socket*,int ) ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_2)
{
 struct ctl_cb *VAR_3 = (struct ctl_cb *)VAR_2->so_pcb;

 if (VAR_3 == 0)
  return (0);

 if (VAR_3->kctl != ((void*)0) && VAR_3->kctl->bind != ((void*)0) &&
     VAR_3->userdata != ((void*)0) && !(VAR_2->so_state & VAR_1)) {


  if (VAR_3->kctl->disconnect != ((void*)0)) {
   FUNC_1(VAR_2, 0);
   (*VAR_3->kctl->disconnect)(VAR_3->kctl->kctlref,
       VAR_3->sac.sc_unit, VAR_3->userdata);
   FUNC_0(VAR_2, 0);
  }
 }

 FUNC_2(VAR_2);
 VAR_2->so_flags |= VAR_0;
 return (0);
}
